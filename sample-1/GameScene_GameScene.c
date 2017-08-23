cocos2d::CCScene *__fastcall GameScene::GameScene(cocos2d::CCScene *a1)
{
  cocos2d::CCScene *v1; // r4@1
  int v2; // r3@1
  cocos2d::CCUserDefault *v3; // r0@2
  int v4; // r5@3
  cocos2d::CCUserDefault *v5; // r0@3
  int v6; // r5@3
  int v8; // [sp+0h] [bp-30h]@3
  char v9; // [sp+4h] [bp-2Ch]@3
  char v10; // [sp+8h] [bp-28h]@3
  char v11; // [sp+Ch] [bp-24h]@3
  int v12; // [sp+10h] [bp-20h]@1
  char v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1
  char v15; // [sp+1Ch] [bp-14h]@1

  v1 = a1;
  cocos2d::CCScene::CCScene(a1);
  *(_DWORD *)v1 = &off_478C98;
  v12 = 2037152124;
  v2 = 0;
  v13 = 0;
  v15 = 0;
  v14 = 0;
  do
  {
    v3 = (cocos2d::CCUserDefault *)(*((_BYTE *)&v12 + v2) ^ 0x38);
    *((_BYTE *)&v14 + v2++) = (_BYTE)v3;
  }
  while ( v2 != 4 );
  v4 = cocos2d::CCUserDefault::sharedUserDefault(v3);
  sub_3A34D8(&v10, &unk_3F92A0, &v8);
  cocos2d::CCUserDefault::getStringForKey(&v9, v4, &v14, &v10);
  v5 = (cocos2d::CCUserDefault *)sub_3A1DDC(&v10);
  v6 = cocos2d::CCUserDefault::sharedUserDefault(v5);
  std::operator+<char,std::char_traits<char>,std::allocator<char>>(&v11, &v9, "Zn");
  cocos2d::CCUserDefault::setStringForKey(v6, &v14, &v11);
  sub_3A1DDC(&v11);
  *((_DWORD *)v1 + 57) = 0;
  sub_3A1DDC(&v9);
  return v1;
}
