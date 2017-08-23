int __fastcall ControlLayer::updateScore(int result, int a2)
{
  int v2; // r3@1
  const char *v3; // r4@1
  int v4; // r7@4
  cocos2d::CCUserDefault *v5; // r0@4
  int v6; // r5@5
  char *v7; // r0@5
  int v8; // r5@7
  int v9; // r5@9
  int v10; // r5@11
  int v11; // r5@13
  int v12; // r5@15
  int v13; // r5@17
  int v14; // r5@19
  int v15; // r5@21
  int v16; // r5@23
  int v17; // r0@25
  int v18; // [sp+4h] [bp-64h]@1
  char v19; // [sp+Ch] [bp-5Ch]@4
  char v20; // [sp+10h] [bp-58h]@4
  char v21; // [sp+14h] [bp-54h]@4
  char v22; // [sp+18h] [bp-50h]@5
  char v23; // [sp+1Ch] [bp-4Ch]@7
  char v24; // [sp+20h] [bp-48h]@9
  char v25; // [sp+24h] [bp-44h]@11
  char v26; // [sp+28h] [bp-40h]@13
  char v27; // [sp+2Ch] [bp-3Ch]@15
  char v28; // [sp+30h] [bp-38h]@17
  char v29; // [sp+34h] [bp-34h]@19
  char v30; // [sp+38h] [bp-30h]@21
  char v31; // [sp+3Ch] [bp-2Ch]@23
  int v32; // [sp+40h] [bp-28h]@1
  char v33; // [sp+44h] [bp-24h]@1
  int v34; // [sp+48h] [bp-20h]@1
  char v35; // [sp+4Ch] [bp-1Ch]@1

  v32 = 1635017060;
  v2 = 0;
  v33 = 0;
  v35 = 0;
  v18 = result;
  v3 = (const char *)a2;
  v34 = 0;
  do
  {
    *((_BYTE *)&v34 + v2) = *((_BYTE *)&v32 + v2) ^ 0x20;
    ++v2;
  }
  while ( v2 != 4 );
  if ( (unsigned int)a2 <= 0x3B9ACA00 )
  {
    v4 = cocos2d::CCUserDefault::sharedUserDefault((cocos2d::CCUserDefault *)result);
    sub_3A34D8(&v21, &unk_3F92A0, &v19);
    cocos2d::CCUserDefault::getStringForKey(&v20, v4, &v34, &v21);
    v5 = (cocos2d::CCUserDefault *)sub_3A1DDC(&v21);
    if ( v3 == (const char *)100 )
    {
      v6 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v22, &v20, "MW");
      cocos2d::CCUserDefault::setStringForKey(v6, &v34, &v22);
      v7 = &v22;
    }
    else if ( v3 == (const char *)600 )
    {
      v8 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v23, &v20, "Rf");
      cocos2d::CCUserDefault::setStringForKey(v8, &v34, &v23);
      v7 = &v23;
    }
    else if ( v3 == (const char *)700 )
    {
      v9 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v24, &v20, "Rz");
      cocos2d::CCUserDefault::setStringForKey(v9, &v34, &v24);
      v7 = &v24;
    }
    else if ( v3 == (const char *)3000 )
    {
      v10 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v25, &v20, "Bt");
      cocos2d::CCUserDefault::setStringForKey(v10, &v34, &v25);
      v7 = &v25;
    }
    else if ( v3 == (const char *)5600 )
    {
      v11 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v26, &v20, "RV");
      cocos2d::CCUserDefault::setStringForKey(v11, &v34, &v26);
      v7 = &v26;
    }
    else if ( v3 == (const char *)9900 )
    {
      v12 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v27, &v20, "9Z");
      cocos2d::CCUserDefault::setStringForKey(v12, &v34, &v27);
      v7 = &v27;
    }
    else if ( v3 == (const char *)18000 )
    {
      v13 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v28, &v20, "b1");
      cocos2d::CCUserDefault::setStringForKey(v13, &v34, &v28);
      v7 = &v28;
    }
    else if ( v3 == (const char *)88800 )
    {
      v14 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v29, &v20, "Vf");
      cocos2d::CCUserDefault::setStringForKey(v14, &v34, &v29);
      v7 = &v29;
    }
    else if ( v3 == (const char *)100000 )
    {
      v15 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v30, &v20, "S2");
      cocos2d::CCUserDefault::setStringForKey(v15, &v34, &v30);
      v7 = &v30;
    }
    else
    {
      if ( v3 != (const char *)1000000000 )
      {
LABEL_25:
        v17 = cocos2d::CCString::createWithFormat((cocos2d::CCString *)"%d", v3);
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v18 + 264) + 428))(
          *(_DWORD *)(v18 + 264),
          *(_DWORD *)(v17 + 20));
        return sub_3A1DDC(&v20);
      }
      v16 = cocos2d::CCUserDefault::sharedUserDefault(v5);
      std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v31, &v20, "4w");
      cocos2d::CCUserDefault::setStringForKey(v16, &v34, &v31);
      v7 = &v31;
    }
    sub_3A1DDC(v7);
    goto LABEL_25;
  }
  return result;
}
