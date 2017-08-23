# Masalah

Diberikan berkas `plane.apk`, ungkap kelemahan yang ada didalamnya.

# Penyelesaian

Aplikasi Android yang diberikan merupakan aplikasi *game* sederhana. Untuk mendapatkan potongan `Flag` maka harus meraih skor yang lebih tinggi dari skor tertinggi sebelumnya. Untuk memudahkan, gunakan aplikasi `Cheat Droid` untuk memodifikasi berkas `Cocos2dxPrefsFile.xml` yang berisi informasi skor. Ubah skor menjadi `100` dan mainkan *game* sampai meraih skor lebih dari `100`. Bagaimana penulis bisa tahu tentang ini? Simak penjelasannya dibawah.

## M1 - Improper Platform Usage [Client Attacks]

Selanjutnya baca berkas `Cocos2dxPrefsFile.xml` dengan menggunakan ADB.

```
# adb shell
shell@ido:/ $ su
root@ido:/ # cat /data/data/com.example.plane/shared_prefs/Cocos2dxPrefsFile.xml
<?xml version='1.0' encoding='utf-8' standalone='yes' ?>
<map>
    <int name="HighestScore" value="10400" />
    <string name="DATA">MGN0ZntDMGNvUzJkX0FuRHJvMWdz99ZntDMGNvUzJkX0FuRHJvMGN0ZntDMGNvUzJkX0FuRHJvMWRfRzRVdz99ZntDMGNvUzJkX0FuRHJvMGN0ZntDMGNvUzJkX0FuRHJvMWdz99ZntDMGNvUzJkX0FuRHJvMWdz99MGN0ZntDMGNvUzJkX0FuRHJvMW9Zdz99</string>
    <boolean name="isHaveSaveFileXml" value="true" />
</map>
```

*Decode value* pada *key* `DATA` pada terminal yang lain.

```
# echo "MGN0ZntDMGNvUzJkX0FuRHJvMWdz99ZntDMGNvUzJkX0FuRHJvMGN0ZntDMGNvUzJkX0FuRHJvMWRfRzRVdz99ZntDMGNvUzJkX0FuRHJvMGN0ZntDMGNvUzJkX0FuRHJvMWdz99ZntDMGNvUzJkX0FuRHJvMWdz99MGN0ZntDMGNvUzJkX0FuRHJvMW9Zdz99" | base64 -d | strings
```

Luaran
```
base64: invalid input
0ctf{C0coS2d_AnDro1gs
~ skipped ~
```

## M7 - Client Code Quality [Client Attacks]

`Flag` baru didapatkan sebagian, untuk mendapatkan secara utuh, amati setiap proses pada aplikasi `Plane` menyebabkan string yang ada dalam berkas `Cocos2dxPrefsFile.xml` selalu bertambah.

* Pada proses inisialisasi, terdapat string `MGN0`.
* Pada proses permainan dimulai, terdapat string `ZntDMGNvUzJkX0FuRHJvMW`.
* Pada proses permainan berakhir, terdapat string `dz99`.

Namun ada string yang tidak tercetak karena ada pengecekan di salah satu *library* yang terpasang pada aplikasi. Silahkan lihat kode pada *library* tersebut dengan melakukan dekompilasi berkas `plane.apk` dengan menggunakan `dex2jar`.

```
# 7z x plane.apk
# /tools/mob/dex2jar-2.0/d2j-dex2jar.sh plane.apk -o plane.jar
```

Jika melihat kode Java `plane.jar` yang diimpor pada JD-GUI, isinya sama dengan penjelasan yang sebelumnya.

```java
package com.example.plane;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;

public class a
{
  private SharedPreferences editor = null;

  public a(Context paramContext, String paramString)
  {
    this.editor = paramContext.getSharedPreferences(paramString, 0);
  }

  public void b()
  {
    this.editor.edit().putString("DATA", "").commit();
  }

  public String c()
  {
    return this.editor.getString("DATA", "");
  }

  public void d(String paramString)
  {
    this.editor.edit().putString("DATA", String.valueOf(c()) + paramString).commit();
  }
}
```

Buka IDA, lihat apa yang terjadi pada fungsi utama program yang terletak pada *library*.

* String `MGN0` terletak pada class `FirstTest`
* String `ZntDMGNvUzJkX0FuRHJvMW` terletak pada `GameScene::GameScene` di `libcocos2dcpp.so`.
* String `RfRzBtRV9Zb1VfS24w` terletak pada `ControlLayer::updateScore` di `libcocos2dcpp.so`.
* String `dz99` terletak pada `GameOverLayer::init`.

Digabungkan menjadi `MGN0ZntDMGNvUzJkX0FuRHJvMWRfRzBtRV9Zb1VfS24wdz99` dan di*decode* dari Base64 ke ASCII menjadi *Flag*.

```
# echo 'MGN0ZntDMGNvUzJkX0FuRHJvMWRfRzBtRV9Zb1VfS24wdz99' | base64 --decode  
0ctf{C0coS2d_AnDro1d_G0mE_YoU_Kn0w?}  
```

** Reference **
* [1](https://eugenekolo.com/blog/0ctf-2016-boomshakalaka-writeup/)
* [2](https://github.com/p4-team/ctf/blob/master/2016-03-12-0ctf/boomshakalaka/README.md)
