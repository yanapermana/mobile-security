signed int __fastcall GameOverLayer::init(GameOverLayer *this)
{
  int v1; // r3@1
  GameOverLayer *v2; // r5@1
  int v3; // r6@3
  cocos2d::CCUserDefault *v4; // r0@3
  int v5; // r4@3
  CocosDenshion::SimpleAudioEngine *v6; // r0@3
  CocosDenshion::SimpleAudioEngine *v7; // r0@5
  CocosDenshion::SimpleAudioEngine *v8; // r0@5
  CocosDenshion::SimpleAudioEngine *v9; // r0@6
  CocosDenshion::SimpleAudioEngine *v10; // r0@7
  cocos2d::CCDirector *v11; // r0@7
  cocos2d::CCSpriteFrameCache *v12; // r0@7
  cocos2d::CCSpriteFrameCache *v13; // r0@7
  cocos2d::CCSprite *v14; // r0@7
  cocos2d::CCSpriteFrame *v15; // r1@7
  int v16; // r0@7
  int v17; // r4@7
  void (__fastcall *v18)(int, char *); // r7@7
  float v19; // r6@7
  float v20; // r0@7
  cocos2d::CCSpriteFrameCache *v21; // r0@7
  cocos2d::CCSpriteFrameCache *v22; // r0@7
  cocos2d::CCSprite *v23; // r0@7
  cocos2d::CCSpriteFrame *v24; // r1@7
  cocos2d::CCSpriteFrameCache *v25; // r0@7
  cocos2d::CCSpriteFrameCache *v26; // r4@7
  cocos2d::CCSpriteFrameCache *v27; // r0@7
  cocos2d::CCSprite *v28; // r0@7
  cocos2d::CCSpriteFrame *v29; // r1@7
  cocos2d::CCMenuItemImage *v30; // r0@7
  cocos2d::CCMenuItemImage *v31; // r7@7
  cocos2d::CCMenu *v32; // r0@7
  cocos2d::CCMenu *v33; // r6@7
  float v34; // ST18_4@7
  cocos2d::CCFiniteTimeAction *v35; // ST14_4@7
  int v36; // r7@7
  int v37; // ST1C_4@7
  int v38; // r0@7
  int v39; // r0@7
  float v40; // r4@7
  int v41; // r0@7
  float v42; // r0@7
  int v43; // r4@7
  int v44; // r2@7
  int v45; // r0@7
  const char *v46; // r2@7
  cocos2d::CCNode *v47; // r0@7
  int v48; // r3@7
  cocos2d::CCNode *v49; // r6@7
  void (__fastcall *v50)(cocos2d::CCNode *, char *); // r7@7
  float v51; // r4@7
  float v52; // r0@7
  float v53; // r1@7
  cocos2d::CCSequence *v54; // r7@7
  float v55; // r2@7
  cocos2d::CCFiniteTimeAction *v56; // ST14_4@7
  float v57; // r2@7
  float v58; // ST18_4@7
  int v59; // r0@7
  cocos2d::CCAction *v60; // r0@7
  int v61; // r0@7
  const char *v62; // r2@7
  int v63; // r0@7
  void (*v64)(void); // r3@7
  int v65; // r7@7
  void (__fastcall *v66)(int, char *); // r4@7
  int v67; // r7@7
  void (__fastcall *v68)(int, char *); // r4@7
  float v69; // r0@7
  cocos2d::CCUserDefault *v70; // r0@7
  cocos2d::CCUserDefault *v71; // r0@8
  float v72; // r1@8
  cocos2d::CCSequence *v73; // r4@8
  const cocos2d::CCPoint *v74; // r2@8
  cocos2d::CCFiniteTimeAction *v75; // r7@8
  cocos2d::CCFiniteTimeAction *v76; // ST14_4@8
  const cocos2d::CCPoint *v77; // r2@8
  int v78; // r0@8
  cocos2d::CCAction *v79; // r0@8
  int v80; // r0@10
  void (*v81)(void); // r3@10
  int v82; // r4@10
  cocos2d::CCFiniteTimeAction *v83; // ST14_4@10
  float v84; // ST18_4@10
  int v85; // r7@10
  int v86; // r0@10
  int v87; // r0@10
  float v88; // r0@10
  signed int v89; // r4@4
  char v91; // [sp+24h] [bp-A4h]@3
  char v92; // [sp+28h] [bp-A0h]@7
  char v93; // [sp+29h] [bp-9Fh]@7
  char v94; // [sp+2Ah] [bp-9Eh]@7
  char v95; // [sp+2Ch] [bp-9Ch]@7
  char v96; // [sp+2Dh] [bp-9Bh]@7
  char v97; // [sp+2Eh] [bp-9Ah]@7
  char v98; // [sp+30h] [bp-98h]@10
  char v99; // [sp+31h] [bp-97h]@10
  char v100; // [sp+32h] [bp-96h]@10
  char v101; // [sp+34h] [bp-94h]@3
  char v102; // [sp+38h] [bp-90h]@3
  char v103; // [sp+3Ch] [bp-8Ch]@3
  int v104; // [sp+40h] [bp-88h]@1
  char v105; // [sp+44h] [bp-84h]@1
  int v106; // [sp+48h] [bp-80h]@1
  char v107; // [sp+4Ch] [bp-7Ch]@1
  float v108; // [sp+50h] [bp-78h]@7
  int v109; // [sp+54h] [bp-74h]@7
  char v110; // [sp+58h] [bp-70h]@7
  char v111; // [sp+60h] [bp-68h]@7
  char v112; // [sp+68h] [bp-60h]@7
  char v113; // [sp+70h] [bp-58h]@7
  char v114; // [sp+78h] [bp-50h]@7
  char v115; // [sp+80h] [bp-48h]@8
  char v116; // [sp+88h] [bp-40h]@8
  char v117; // [sp+90h] [bp-38h]@10
  int (__fastcall *v118)(GameOverLayer *, cocos2d::CCObject *); // [sp+98h] [bp-30h]@7
  int v119; // [sp+9Ch] [bp-2Ch]@7
  void (__fastcall *v120)(GameOverLayer *); // [sp+A0h] [bp-28h]@7
  int v121; // [sp+A4h] [bp-24h]@7
  int (__fastcall *v122)(GameOverLayer *, cocos2d::CCNode *); // [sp+A8h] [bp-20h]@8
  int v123; // [sp+ACh] [bp-1Ch]@8

  v104 = -285479189;
  v1 = 0;
  v105 = 0;
  v107 = 0;
  v2 = this;
  v106 = 0;
  do
  {
    *((_BYTE *)&v106 + v1) = *((_BYTE *)&v104 + v1) ^ 0xAF;
    ++v1;
  }
  while ( v1 != 4 );
  v3 = cocos2d::CCUserDefault::sharedUserDefault(this);
  sub_3A34D8(&v102, &unk_3F92A0, &v91);
  cocos2d::CCUserDefault::getStringForKey(&v101, v3, &v106, &v102);
  v4 = (cocos2d::CCUserDefault *)sub_3A1DDC(&v102);
  v5 = cocos2d::CCUserDefault::sharedUserDefault(v4);
  sub_3A2F30(&v103, &v101);
  sub_3A2CB4(&v103, "dz99");
  cocos2d::CCUserDefault::setStringForKey(v5, &v106, &v103);
  sub_3A1DDC(&v103);
  v6 = (CocosDenshion::SimpleAudioEngine *)cocos2d::CCLayer::init(v2);
  if ( v6 )
  {
    v7 = (CocosDenshion::SimpleAudioEngine *)CocosDenshion::SimpleAudioEngine::sharedEngine(v6);
    v8 = (CocosDenshion::SimpleAudioEngine *)CocosDenshion::SimpleAudioEngine::isBackgroundMusicPlaying(v7);
    if ( v8 )
    {
      v9 = (CocosDenshion::SimpleAudioEngine *)CocosDenshion::SimpleAudioEngine::sharedEngine(v8);
      v8 = (CocosDenshion::SimpleAudioEngine *)CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(v9, 0);
    }
    v10 = (CocosDenshion::SimpleAudioEngine *)CocosDenshion::SimpleAudioEngine::sharedEngine(v8);
    v11 = (cocos2d::CCDirector *)CocosDenshion::SimpleAudioEngine::playEffect(v10, "sound/game_over.mp3", 0);
    cocos2d::CCDirector::sharedDirector(v11);
    v12 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCDirector::getWinSize((cocos2d::CCDirector *)&v108);
    v13 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v12);
    v14 = (cocos2d::CCSprite *)cocos2d::CCSpriteFrameCache::spriteFrameByName(v13, "gameover.png");
    v16 = cocos2d::CCSprite::createWithSpriteFrame(v14, v15);
    v17 = v16;
    v18 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v16 + 76);
    v19 = COERCE_FLOAT(_mulsf3(LODWORD(v108), 1056964608));
    v20 = COERCE_FLOAT(_mulsf3(v109, 1056964608));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v19, v20);
    v18(v17, &v110);
    v21 = (cocos2d::CCSpriteFrameCache *)(*(int (__fastcall **)(GameOverLayer *, int))(*(_DWORD *)v2 + 200))(v2, v17);
    v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v21);
    v23 = (cocos2d::CCSprite *)cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, "btn_finish.png");
    v25 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSprite::createWithSpriteFrame(v23, v24);
    v26 = v25;
    v27 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v25);
    v28 = (cocos2d::CCSprite *)cocos2d::CCSpriteFrameCache::spriteFrameByName(v27, "btn_finish.png");
    v30 = (cocos2d::CCMenuItemImage *)cocos2d::CCSprite::createWithSpriteFrame(v28, v29);
    v31 = v30;
    v32 = (cocos2d::CCMenu *)cocos2d::CCMenuItemImage::create(v30);
    v119 = 0;
    v33 = v32;
    v118 = GameOverLayer::menuBackCallback;
    cocos2d::CCMenuItemSprite::initWithNormalSprite(v32, v26, v31);
    v34 = v108;
    v35 = *(cocos2d::CCFiniteTimeAction **)(*(_DWORD *)v33 + 76);
    v36 = *(_DWORD *)(*(int (__fastcall **)(cocos2d::CCSpriteFrameCache *))(*(_DWORD *)v26 + 140))(v26);
    v37 = (*(int (__fastcall **)(cocos2d::CCSpriteFrameCache *))(*(_DWORD *)v26 + 140))(v26);
    v38 = _mulsf3(v36, 1056964608);
    v39 = _subsf3(LODWORD(v34), v38);
    v40 = COERCE_FLOAT(_subsf3(v39, 1092616192));
    v41 = _mulsf3(*(_DWORD *)(v37 + 4), 1056964608);
    v42 = COERCE_FLOAT(_aeabi_fadd(v41, 1092616192));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v111, v40, v42);
    ((void (__fastcall *)(cocos2d::CCMenu *, char *))v35)(v33, &v111);
    v43 = cocos2d::CCMenu::create(v33, 0);
    (*(void (__cdecl **)(int, void *, int))(*(_DWORD *)v43 + 76))(v43, &unk_4A68CC, v44);
    (*(void (__fastcall **)(GameOverLayer *, int))(*(_DWORD *)v2 + 200))(v2, v43);
    v45 = cocos2d::CCString::createWithFormat((cocos2d::CCString *)"%d", *((const char **)v2 + 66));
    v47 = (cocos2d::CCNode *)cocos2d::CCLabelBMFont::create(
                               *(cocos2d::CCLabelBMFont **)(v45 + 20),
                               "font/font.fnt",
                               v46);
    v48 = *(_DWORD *)v47;
    v49 = v47;
    v92 = -113;
    v93 = -110;
    v94 = -109;
    (*(void (__cdecl **)(cocos2d::CCNode *, char *, signed int))(v48 + 500))(v47, &v92, 500);
    v50 = *(void (__fastcall **)(cocos2d::CCNode *, char *))(*(_DWORD *)v49 + 76);
    v51 = COERCE_FLOAT(_mulsf3(LODWORD(v108), 1056964608));
    v52 = COERCE_FLOAT(_mulsf3(v109, 1056964608));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v112, v51, v52);
    v50(v49, &v112);
    (*(void (__fastcall **)(GameOverLayer *, cocos2d::CCNode *))(*(_DWORD *)v2 + 200))(v2, v49);
    v54 = (cocos2d::CCSequence *)cocos2d::CCDelayTime::create((cocos2d::CCDelayTime *)0x3F800000, v53);
    v56 = (cocos2d::CCFiniteTimeAction *)cocos2d::CCScaleTo::create((cocos2d::CCScaleTo *)0x3F800000, 3.0, v55);
    v58 = COERCE_FLOAT(cocos2d::CCScaleTo::create((cocos2d::CCScaleTo *)0x3E99999A, 2.0, v57));
    v120 = GameOverLayer::showAD;
    v121 = 0;
    v59 = cocos2d::CCCallFunc::create(v2);
    v60 = (cocos2d::CCAction *)cocos2d::CCSequence::create(v54, v56, v58, v59, 0, GameOverLayer::menuBackCallback, 0);
    cocos2d::CCNode::runAction(v49, v60);
    v61 = cocos2d::CCString::createWithFormat((cocos2d::CCString *)"%d", GameOverLayer::highestHistoryScore);
    v63 = cocos2d::CCLabelBMFont::create(*(cocos2d::CCLabelBMFont **)(v61 + 20), "font/font.fnt", v62);
    *((_DWORD *)v2 + 67) = v63;
    v64 = *(void (**)(void))(*(_DWORD *)v63 + 500);
    v95 = -113;
    v96 = -110;
    v97 = -109;
    v64();
    v65 = *((_DWORD *)v2 + 67);
    v66 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v65 + 124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v113, 0.0, 0.5);
    v66(v65, &v113);
    v67 = *((_DWORD *)v2 + 67);
    v68 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v67 + 76);
    v69 = COERCE_FLOAT(_subsf3(v109, 1109393408));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v114, 10.0, v69);
    v68(v67, &v114);
    v70 = (cocos2d::CCUserDefault *)(*(int (__fastcall **)(GameOverLayer *, _DWORD))(*(_DWORD *)v2 + 200))(
                                      v2,
                                      *((_DWORD *)v2 + 67));
    if ( *((_DWORD *)v2 + 66) > (signed int)GameOverLayer::highestHistoryScore )
    {
      v71 = (cocos2d::CCUserDefault *)cocos2d::CCUserDefault::sharedUserDefault(v70);
      cocos2d::CCUserDefault::setIntegerForKey(v71, "HighestScore", *((_DWORD *)v2 + 66));
      GameOverLayer::highestHistoryScore = (const char *)*((_DWORD *)v2 + 66);
      v73 = (cocos2d::CCSequence *)cocos2d::CCDelayTime::create((cocos2d::CCDelayTime *)0x3FA66666, v72);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v115, 0.0, 100.0);
      v75 = (cocos2d::CCFiniteTimeAction *)cocos2d::CCMoveBy::create(
                                             (cocos2d::CCMoveBy *)0x3DCCCCCD,
                                             COERCE_FLOAT(&v115),
                                             v74);
      v123 = 0;
      v122 = GameOverLayer::beginChangeHighestScore;
      v76 = (cocos2d::CCFiniteTimeAction *)cocos2d::CCCallFuncN::create(v2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v116, 0.0, -100.0);
      v78 = cocos2d::CCMoveBy::create((cocos2d::CCMoveBy *)0x3DCCCCCD, COERCE_FLOAT(&v116), v77);
      v79 = (cocos2d::CCAction *)cocos2d::CCSequence::create(v73, v75, v76, v78, 0);
      cocos2d::CCNode::runAction(*((cocos2d::CCNode **)v2 + 67), v79);
    }
    if ( *((_DWORD *)v2 + 66) == 1000000000 )
    {
      v80 = cocos2d::CCLabelTTF::create(
              (cocos2d::CCLabelTTF *)"Look at your xml file",
              "Monaco",
              (const char *)0x41F00000,
              0.0047238);
      v81 = *(void (**)(void))(*(_DWORD *)v80 + 444);
      v98 = -113;
      v99 = -110;
      v100 = -109;
      v82 = v80;
      v81();
      v83 = *(cocos2d::CCFiniteTimeAction **)(*(_DWORD *)v82 + 76);
      v84 = *(float *)(*(int (__fastcall **)(cocos2d::CCNode *))(*(_DWORD *)v49 + 80))(v49);
      v85 = *(_DWORD *)((*(int (__fastcall **)(cocos2d::CCNode *))(*(_DWORD *)v49 + 80))(v49) + 4);
      v86 = (*(int (__fastcall **)(cocos2d::CCNode *))(*(_DWORD *)v49 + 140))(v49);
      v87 = _aeabi_fadd(v85, *(_DWORD *)(v86 + 4));
      v88 = COERCE_FLOAT(_aeabi_fadd(v87, 1125515264));
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v84, v88);
      ((void (__fastcall *)(int, char *))v83)(v82, &v117);
      (*(void (__fastcall **)(GameOverLayer *, int))(*(_DWORD *)v2 + 200))(v2, v82);
    }
    (*(void (__fastcall **)(GameOverLayer *, signed int))(*(_DWORD *)v2 + 500))(v2, 1);
    v89 = 1;
  }
  else
  {
    v89 = 0;
  }
  sub_3A1DDC(&v101);
  return v89;
}
