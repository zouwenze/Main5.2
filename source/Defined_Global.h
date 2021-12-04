
#define PBG_FIX_DROPBAN_GENS

#define KJW_FIX_ITEMNAME_ORB_OF_SUMMONING
#define KJW_FIX_ITEMNAME_CRITICAL_SCROLL
#define KJW_FIX_MYSHOP

#define KJW_FIX_CHAOSCASTLE_MESSAGE
#define KJW_FIX_QUEST_INFO_DUPLICATE
#define KJW_FIX_GENS_WINDOW_OPEN

#define KJW_ADD_NEWUI_SCROLLBAR
#define KJW_ADD_NEWUI_TEXTBOX
#define KJW_ADD_NEWUI_GROUP

#define KWAK_ADD_TRACE_FUNC
#ifdef _DEBUG
	#define KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK
#endif // _DEBUG


#define KJW_FIX_SLEEPUP_SKILL_INFO
#define KJW_FIX_LOGIN_ID_BLACK_SPACE
#define KJW_FIX_SLIDE_MOVE

//----------------------------------------------------------------------------------------------
// << Season 5-4 >>

#define SEASON5_4
#ifdef  SEASON5_4

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 4 ]
	#define PJH_ADD_MASTERSKILL
		#ifdef PJH_ADD_MASTERSKILL								
		#undef KJH_FIX_WOPS_K22193_SUMMONER_MASTERSKILL_UI_ABNORMAL_TEXT	//해외에 소환술사 마스터스킬 추가(10.05.28)
	#endif //PJH_ADD_MASTERSKILL								

	#define ASG_ADD_STRIFE_KANTURU_RUIN_ISLAND				// 칸투르 폐허3 분쟁지역화.(10.04.13)

	#define KJH_FIX_POTION_PRICE							// 상점 물약가격 버그수정 (10.04.16)
	#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// 비정상적적인 종료시 이벤트맵 초기화 (10.04.20)
	#define LDK_LDS_EXTENSIONMAP_HUNTERZONE					// 사냥터 확장 맵 (기존 맵 리뉴얼 및 몬스터, 보스급 몬스터 추가.). (10.02.18)

	#ifdef LDK_LDS_EXTENSIONMAP_HUNTERZONE						
		#define LDS_EXTENSIONMAP_MONSTERS_RAKLION				// 확장 맵내의 일반 몹들. 라클리온 (10.02.18)
		#define LDS_EXTENSIONMAP_MONSTERS_AIDA					// 확장 맵내의 일반 몹들. 아이� (10.02.26)
		#define LDS_EXTENSIONMAP_MONSTERS_KANTUR				// 확장 맵내의 일반 몹들. 칸투르 (10.03.02)
		#define LDS_EXTENSIONMAP_MONSTERS_SWAMPOFQUIET			// 확장 맵내의 일반 몹들. 평원의늪 (10.03.02)
		#define LDS_MOD_EXTEND_MAXMODELLIMITS_200TO400			// 기존 몬스터모델 갯수 제한 (MAX_MODEL_MONSTER=200)개를 초과하여 오� 발생으로 (MAX_MODEL_MONSTER=400)설정. (10.03.15)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA				// 평온의늪 보스 몬스터 메듀사 (10.02.19)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA_EYE_EFFECT		// 평온의늪 보스 몬스터 메듀사 눈 잔상 이펙트(10.03.03)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA_WAND_EFFECT	// 평온의늪 보스 몬스터 메듀사 지팡이 이펙트(10.03.04)
		#define LDK_MOD_EVERY_USE_SKILL_CAOTIC					// 카오틱 디세이어 몬스터 사용 가능하도록 수정(10.03.08)
		#define LDK_FIX_AIDA_OBJ41_UV_FIX						// 아이뉨� 41번 obj(빛) uv 값 고정(10.03.16)
		#define LDK_ADD_AIDA_OBJ77_OBJ78						// 아이뉨� 77,78번 obj uv흐름 추가(10.03.18)
	#endif // LDK_LDS_EXTENSIONMAP_HUNTERZONE

	#define LJH_ADD_SUPPORTING_MULTI_LANGUAGE					// 눙뭬沮熾� (10.05.19)
	#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
		#define LJH_ADD_RESTRICTION_ON_ID						// ID, 길드이름, 캐릭터명은 영어, 숫자, 특수기호만 사용할수 있게 제한(10.09.17)
	#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
	#define YDG_ADD_MOVE_COMMAND_PROTOCOL						// 이동명령 프로토콜 추가(/이동 제거) (2009.04.01) [2009.04.22 테섭]

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 4]
	#define LDK_MOD_GUARDIAN_DROP_RESIZE					// 데몬 수호정령 뭅悶� 놓였을때 사이즈 조정(10.03.04)
	#define PBG_FIX_SATAN_VALUEINCREASE						// 사탄 착용시 수치 증가 버그 수정(10.04.07)
	#define PBG_MOD_GUARDCHARMTEXT							// 수호의부적아템 문구수정(10.04.14)
	#define LJH_FIX_REARRANGE_INVISIBLE_CLOAK_LEVEL_FOR_CHECKING_REMAINING_TIME	// 투명망토(lv1~8)과 블러드캐슬(lv0~7)의 차이때문에 8레벨 투명망토 우클릭 할 때 시간이 이상하게 나오는 버그 수정(10.07.07) 
	#define ASG_FIX_MONSTER_MAX_COUNT_1024					// #define MAX_MONSTER 512 -> 1024로 수정(10.06.29)
	#define LJH_FIX_GETTING_ZEN_WITH_PET_OF_OTHER_PLAYER	// 뉨� 플레이어의 펫이 젠을 먹어주는 버그 수정(10.05.10)
	#define LJH_FIX_BUG_DISPLAYING_NULL_TITLED_QUEST_LIST			// 서버에서 받은 캭뵈� 인덱스가 존재하지 않아 (null)로 표시되는 항목은 캭뵈� 목록을 만들때 넣지 않도록 수정(10.04.14)
	#define LJH_FIX_BUG_SELLING_ITEM_CAUSING_OVER_LIMIT_OF_ZEN		// 소지한도액을 초과하는 판매액의 아이템을 팔지 못하게 서버로 메세지도 보내지 않도록 수정(10.04.15)				
	#define PBG_FIX_CHARACTERSELECTINDEX					// 캐릭터 인덱스 버그수정(10.07.05)
#endif //SEASON5_4
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define KJH_FIX_INGAMESHOP_SENDGIFT_ELIXIROFCONTROL		// 인게임샵 선물하기에서 늚㈆琯弱� 아닌 클래스도 선물하기 받을수 있는문제 수정 (10.06.23)
#define KJH_FIX_SELL_EXPIRED_UNICON_PET					// 기간지난 유니콘펫 상점판매 가능하게 수정 (10.06.08)
#define KJH_FIX_SELL_EXPIRED_CRITICAL_WIZARD_RING		// 기간지난 치명적인 마법사의 반지 상점판매 가능하게 수정 (10.06.08)


//----------------------------------------------------------------------------------------------
// << Season 5 - Part 1 

#define UPDATE_100527
#ifdef UPDATE_100527

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define KJH_FIX_BTS158_TEXT_CUT_ROUTINE							// UI에 맞게 Text를 자를시 이상현상 수정 (10.05.07)
	#define KJH_FIX_BTS179_INGAMESHOP_STORAGE_UPDATE_WHEN_ITEM_BUY	// 인게임샵 아이템 구입시 선물함 탭에서 보관함 아이템이 갱신되는 버그수정 (10.05.13)
	#define KJH_FIX_MINIMAP_NAME									// 미니맵에서 NPC/Portal Name 이 짤리는 버그 수정 (10.05.14) - minimap 스크립트 모두 재컨버팅
	#define KJH_MOD_BTS184_REQUIRE_STAT_WHEN_SPELL_SKILL			// 스킬 시전시 스텟 요구치에 따라 스킬 사용 변경 (10.05.17)
	#define KJH_FIX_EMPIREGUARDIAN_ENTER_UI_RENDER_TEXT_ONLY_GLOBAL	// 제국수호군 입장 UI(제린트NPC) Text 수정 (10.05.17) - 글로벌 전용
	#define KJH_FIX_DOPPELGANGER_ENTER_UI_RENDER_TEXT_ONLY_GLOBAL	// 도펠갱어 입장 UI(루가드NPC) Text 수정 (10.05.19) - 글로벌 전용
	#define KJH_FIX_BTS167_MOVE_NPC_IN_VIEWPORT						// 뷰포트안에 NPC가 들어오면 NPC가 갑자기 이동하는 버그수정 (10.05.17)
	#define KJH_FIX_BTS204_INGAMESHOP_ITEM_STORAGE_SELECT_LINE		// 인게임샵 보관함에서 1번째 아이템 사용시, 포커싱이 3번째 아이템으로 선택되는 버그수정 (10.05.18)
	#define	KJH_FIX_BTS206_INGAMESHOP_SEND_GIFT_MSGBOX_BLANK_ID		// 인게임샵 선물하기 메세지창에서 ID입력하지 않고 확인 버튼 클릭시, 선물확인 메세지창이 뜨는 버그 (10.05.18)
	#define KJH_MOD_COMMON_MSG_BOX_BTN_DISABLE_TEXT_COLOR			// 공통 메세지박스 버튼 Disable시 글자색 수정 (10.05.18)
	#define	KJH_MOD_BTS208_CANNOT_MOVE_TO_VULCANUS_IN_NONPVP_SERVER	// nonPVP 서버일대 불카누스로 이동불가 (10.05.18)
	#define KJH_FIX_BTS207_INGAMESHOP_SEND_GIFT_ERRORMSG_INCORRECT_ID	// 인게임샵 선물하기에서 상대방 아이디가 틀렸을때 에러 메세지 (10.05.19)
	#define KJH_FIX_BTS251_ELITE_SD_POTION_TOOLTIP					// 엘리트 SD물약 툴팁이 안나오는 버그 수정 (10.05.24)
	#define KJH_FIX_BTS260_PERIOD_ITEM_INFO_TOOLTIP					// 기간제아이템 기간제 정보 툴팁 버그 수정 (10.05.24)
	#define KJH_FIX_BTS295_DONT_EXPIRED_WIZARD_RING_RENDER_SELL_PRICE	// 기간제 마법사반지가 기간이 만료되지 않았는데 판매가격이 나오는 버그 수정 (10.05.25)
	#define KJH_MOD_INGAMESHOP_GIFT_FLAG							// 인게임샵 선물하기 Flag로 선물하기 버튼 On/Off (10.05.25)
	#define ASG_FIX_QUEST_GIVE_UP									// 캭뵈� 포기 버그 수정. 캭뵈� 상태(QS) 0xfe삭제됨.(10.05.26)

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define KJH_MOD_INGAMESHOP_UNITTTYPE_FILED_OF_PRODUCT_SCRIPT	// Product 게임샵 스크립트의 UnitType필드로 단위명 변경 (10.04.22) - 10.03.29일자 인게임샵 라이브러리 적용
	#define KJH_MOD_INGAMESHOP_ITEM_STORAGE_PAGE_UNIT				// 인게임샵 보관함 페이지 단위 방식으로 변경 (10.04.27)
	#define KJH_MOD_INGAMESHOP_DOMAIN_EACH_NATION					// 국가별 게임샵 도메인 설정 (10.05.04)
	#define KJH_MOD_INGAMESHOP_GLOBAL_CASHPOINT_ONLY_GLOBAL			// Global 캐시 포인트 시스템. (10.04.19) - 글로벌 전용

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// 비정상적적인 종료시 이벤트맵 초기화 (10.04.20)

	#define LDS_ADD_OUTPUTERRORLOG_WHEN_RECEIVEREFRESHPERSONALSHOPITEM	// 로렌 시장 서버로부터 개인상점 구매이후 ReceiveRefreshPersonalShopItem 받을 때 Error Log 정보를 더 자세히 출력 (10.03.30)
	#define LDS_FIX_MEMORYLEAK_WHERE_NEWUI_DEINITIALIZE		// 로렌시장 DEAD현상 : NewUI 내 폐기 처리 메모리 미반환으로 인한 메모리 누수 작업 (10.03.23)
	#define ASG_MOD_GM_VIEW_NAME_IN_GENS_STRIFE_MAP			// 겐스 분쟁지역에서 GM은 타세력 캐릭터 이름 보이게(10.02.26)
	//^#define KJH_FIX_MOVE_MAP_GENERATE_KEY				// 맵 이동(&더미스킬 프로토콜)시 생성되는 키값 수정

	#define ASG_FIX_GENS_STRIFE_FRIEND_NAME_BLOCK			// 겐스 분쟁지역에서 친구 이름 자동입력 막기(2010.02.03)
	#define ASG_MOD_GENS_STRIFE_ADD_PARTY_MSG				// 겐스 분쟁지역 관련 파티 메시지 추가.(2010.02.03)
	#define PBG_MOD_STRIFE_GENSMARKRENDER					// 분쟁지역유저표시 변경(10.02.18)
	#define YDG_FIX_MOVE_ICARUS_EQUIPED_SKELETON_CHANGE_RING	// 스켈레톤변신반지 착용후 이카루스로 이동할 수 없는 현상 (10.02.16)
	#define ASG_ADD_LEAP_OF_CONTROL_TOOLTIP_TEXT			// 통솔의 비약 툴팁 텍스트 추가(2010.01.28)
	#define PBG_FIX_GAMECENSORSHIP_1215							// 12/15세 이용가능 마크 출현 버그수정(10.02.09)
	#define LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT		// 통합시장 이동 시에 사용자의 키 및 마우스 인풋 입력을 막지 않아 생기는 문제로 일괄 Skip 처리. (10.02.02) 
	//^#define PBG_MOD_GAMECENSORSHIP_RED						// 레드의 경우도 18이상가능가로 조정(09.01.26)[10.02.04본섭패치시 테섭/본섭 블루 동시 적용]
	#define LDS_FIX_DISABLEALLKEYEVENT_WHENMAPLOADING			// 맵이동 요청이후 서버로부터 맵이동 결과가 오기전까지 모든 키입력을 막습니�. (로렌시장, 공성 서버 이동 요청시에 esc로 옵션창 "게임종료"호출이후 모든 키입력이 안되는 버그 ). (10.01.28)
	#define PBG_FIX_GENSREWARDNOTREG							// 겐스 미가입자가 보상받을시 문구 수정(10.01.28)

	#define LJH_ADD_SAVEOPTION_WHILE_MOVING_FROM_OR_TO_DIFF_SERVER	// (JP_622, JP_624)(국내버그)뉨� 서버(현재 공성서버, 로렌시장)에서부터 또는 뉨� 서버로 이동할 때 옵션이 저장 되지 않는 버그 수정(10.04.16)
	#define LJH_FIX_DIVIDE_LINE_BY_PIXEL_FOR_GENS_RANK	// 겐스에서 랭크이름이 너무 길어 한좆� � 나오지 않아 nPixelPerLine = 240으로 수정 _ 일본 때문(10.03.10)
	#define LJH_FIX_UNABLE_TO_TRADE_OR_PURCHASE_IN_TROUBLED_AREAS	// 분쟁지역에서 /거래, /구입 명령어 제한 (10.03.31)
	#define LJH_FIX_NO_EFFECT_ON_WEAPONS_IN_SAFE_ZONE_OF_CURSED_TEMPLE	// 환영사원의 안전지역에서 15레벨 아이템 이펙트 나오지 않는 버그 수정(10.04.16)


	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define SEASON5_PART3
	#ifdef SEASON5_PART3
		//------------------------------------------------
		// 1. 로렌시장
		// - 이동석
		#define LDS_ADD_MAP_UNITEDMARKETPLACE					// 통합 시장 서버 (로렌 시장) 추가 (09.12.04)
		#ifdef LDS_ADD_MAP_UNITEDMARKETPLACE
			#define LDS_ADD_NPC_UNITEDMARKETPLACE					// NPC 로렌시장 1.보석� 조합 및 해체 라울, 2.시장 상인 존�아, 3.물약 및 기타 잡화 아이템 상인 크리스틴 (09.12.15)
			#define LDS_ADD_UI_UNITEDMARKETPLACE					// UI 로렌시장 메세지 처리 1.카오스케슬 입장 불가 2.결투신청불가 3.파티신청 불가 4.
			#define LDS_ADD_SERVERPROCESSING_UNITEDMARKETPLACE		// 서버와의 교신 처리 1.통합시장맵으로 이동 2. (09.12.23)
			#define LDS_ADD_SOUND_UNITEDMARKETPLACE					// 통합시장 환경음, 배경음 처리. (10.01.12)
			//#define LDS_ADD_MOVEMAP_UNITEDMARKETPLACE				// 맵이동 윈도우에 "통합 시장" 추가. (10.01.12)
			#define LDS_ADD_EFFECT_UNITEDMARKETPLACE				// 통합시장 NPC 등에 추가 EFFECT. (10.01.14)
		#endif // LDS_ADD_MAP_UNITEDMARKETPLACE

		#define PBG_ADD_GENSRANKING
		#define KJH_ADD_SKILLICON_RENEWAL
		#define PBG_MOD_PREMIUMITEM_TRADE_0118						// 카오스 카드,부적,행운의부적 레드블루 거래가능으로 기획변경(10.01.18)
		#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG2				// 인게임샵 스크립트 늉佇琯� 버그수정 2 (10.01.14)
		#define ASG_ADD_QUEST_REQUEST_REWARD_TYPE				// 캭뵈� 요구사항, 보상 추가(2009.12.15)
		#define YDG_MOD_SKELETON_NOTSELLING						// 스켈레톤 펫 반지 안팔리게 설정(2010.01.20)
		#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK			// 변신반지 스탯올릴때 만료 체크 (2010.01.25)
		#define YDG_FIX_SKELETON_PET_CREATE_POSITION			// 스켈레톤 펫 생성 위치 수정 (2010.01.26)
	#endif // SEASON5_PART3

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 2]

	#define PBG_MOD_PANDAPETRING_NOTSELLING						// 펜더 펫 반지 안팔리게 설정(10.01.11)
	#define LJH_FIX_EXTENDING_OVER_MAX_TIME_4S_To_10S			// 해외사용자들 일부 사용자에게 캐시샵이 열리지 않아 Max Time을 기존 4초에서 10초로 변경(09.12.17)
	#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG					// 인게임샵 스크립트 늉佇琯� 버그 (09.12.28)
	#define LDK_FIX_EXPIREDPERIOD_ITEM_EQUIP_WARNING			// 만료된 아이템 작용불가 및 경고 
	#define LDK_FIX_EQUIPED_EXPIREDPERIOD_RING_EXCEPTION		// 착용중인 만료된 반지 능력치 계산 예외처리(09.12.11)
	#define LDK_FIX_EQUIPED_EXPIREDPERIOD_AMULET_EXCEPTION		// 착용중인 만료된 목걸이 능력치 계산 예외처리(09.12.11)
	#define LDS_FIX_VISUALRENDER_PERIODITEM_EXPIRED_RE			// 인게임샾 아이템들중 목걸이, 반지들에 대한 기간제 종료 이후 사용 불능 처리 (인벤토리상에서 비주얼 처리만.) (09.12.10)
	#define KJH_FIX_SOURCE_CODE_REPEATED						// 같은 소스코드 중복된것 수정 (09.10.12)
	#define ASG_MOD_QUEST_OK_BTN_DISABLE						// 캭뵈� 진행 확인 버튼 비활성화 상태 추가(2009.11.23)
	#define KJH_FIX_MOVE_ICARUS_EQUIPED_PANDA_CHANGE_RING		// 팬더변신반지 착용후 이카루스로 이동할 수 없는 현상 (09.11.30)
	#define ASG_MOD_GUILD_RESULT_GENS_MSG						// 길드 가입시 겐스 관련 메시지.(2009.11.23)
	#define LDK_MOD_BUFFTIMERTYPE_SCRIPT						// 버프타이머 타입값을 buffEffect.txt의 Viewport로 받아서 적용(09.11.10) - enum.h : 타이머 필요한 버스 등록시 eBuffTimeType에 등록안해도 됨
	#define ASG_FIX_GENS_JOINING_ERR_CODE_ADD					// 겐스 가입 에러 코드 추가.(연합길드장 관련)(2009.11.12)
	#define KJH_FIX_INGAMESHOP_INIT_BANNER						// 인게임샵 배너 늉佇琯� 후 초기화되지 않아 Render가 안돼는 현상 (09.11.10)
	#define LDK_MOD_PC4_GUARDIAN_EXPIREDPERIOD_NOTPRINT_INFO	// 캐릭터정보창에서 만료된 데몬, 수호정력 수치 표시 안함(09.11.12)
	#define LDK_MOD_ITEM_DROP_TRADE_SHOP_EXCEPTION				// 카오스부적,카오스카드,데몬,수호정령,팬더펫,팬더변신반지,마법사의반지 일반아이템시 버리기,개인상점,개인거래 가능하도록 처리(09.11.16)
	#define YDG_ADD_GM_DISCHARGE_STAMINA_DEBUFF					// GM이 거는 스태미너 방전 디버프 (2009.11.13)
	#define PBG_FIX_MSGBUFFERSIZE								// 메시지박스내 문구 잘리는 버그수정(09.11.13)
	#define PBG_FIX_MSGTITLENUM									// 메시지박스 title문구 잘못나오는 버그 수정(09.11.13)
	#define LDS_MOD_MODIFYTEXT_TOPAZRING_SAPIRERING				// 사파이어링과 토파즈 링의 텍스트 변경 (09.11.06)
	#define LDK_MOD_TRADEBAN_ITEMLOCK_AGAIN						// 일부 유료 아이템중 트레이드 가능 불가능 변경(NOT DEFINE 처리)(09.10.29) (기획에서 수시로 묾� ㅡ.ㅡ+)
	#define LDK_FIX_PERIODITEM_SELL_CHECK						// 판매시 기간제 아이템 확인 추가(09.11.09)
	#define KJH_MOD_SHOP_SCRIPT_DOWNLOAD						// 샵 스크립트 늉佇琯� 방식 변경 (09.11.09)
	#define KJH_FIX_SHOP_EVENT_CATEGORY_PAGE					// 샵 이벤트 카테고리 페이지 버그 수정 (09.11.09)
	#define KJH_FIX_EXPIRED_PERIODITEM_TOOLTIP					// 기간만료된 기간제 아이템의 툴팁Render가 안돼는 버그 수정 (09.11.09)
	#define LDS_MOD_INGAMESHOPITEM_RING_AMULET_CHARACTERATTR	// 인게임샾 아이템들중 반지, 목걸이 시리즈의 STATUS 수치 반영.
	#define LDK_FIX_NEWWEALTHSEAL_INFOTIMER_AND_MOVEWINDOW		// 풍요의인장 버프정보 시간표시 추가, 버프사용시 이동창 비활성화 (09.11.06)
	#define PBG_FIX_TRADECLOSE									// 거래중 인벤을 닫을시에 거래창은 닫히지 않는 버그 수정(09.11.06)
	#define LDS_FIX_INGAMESHOPITEM_PASSCHAOSCASTLE_REQUEST		// 카오스캐슬 자유 입장권 사용시 서버로 사용에 대한 패킷 정보를 보내지 않는 문제 수정 (09.11.02)
	#define LDS_MOD_INGAMESHOPITEM_POSSIBLETRASH_SILVERGOLDBOX	// 금,은 상자 버리기가 가능하도록.
	#define KJH_FIX_RENDER_PERIODITEM_DURABILITY				// 기간제 아이템일때 내구도정보가 Render 되는 문제 (2009.11.03)
	#define KJH_MOD_RENDER_INGAMESHOP_KEEPBOX_ITEM				// 게임샵 보관함 아이템의 수량이 1개일때 Render 안함 (2009.11.03)
	#define LDK_MOD_INGAMESHOP_ITEM_CHANGE_VALUE				// 혼합유료화 아이템 가격 변경(09.10.29)
	#define KJH_MOD_INGAMESHOP_PATCH_091028						// 인게임샵 수정 - 이벤트 카테고리, 인게임샵 라이브러리 업데이트 (09.10.28)
	#define LDK_FIX_BLUESERVER_UNLIMIT_AREA						// 블루섭 전용 이동창 이동제한 설정중 추가지역 제한 해제(09.10.28)

	#define SEASON5_PART2
	#ifdef SEASON5_PART2
		#define KJH_PBG_ADD_INGAMESHOP_SYSTEM
		#ifdef KJH_PBG_ADD_INGAMESHOP_SYSTEM
			#define PBG_ADD_INGAMESHOP_UI_MAINFRAME
			#define PBG_ADD_INGAMESHOP_UI_ITEMSHOP
			#define PBG_ADD_NAMETOPMSGBOX
			#define KJH_ADD_INGAMESHOP_UI_SYSTEM
			#define KJH_ADD_PERIOD_ITEM_SYSTEM
			#define PBG_ADD_INGAMESHOPMSGBOX
			#define PBG_ADD_MSGBACKOPACITY
			#define PBG_ADD_ITEMRESIZE
			#define PBG_FIX_ITEMANGLE
			#define PBG_ADD_MU_LOGO
			//^#define PBG_ADD_CHARACTERSLOT
			#define PBG_ADD_CHARACTERCARD
			//^#define LDK_ADD_INGAMESHOP_LIMIT_MOVE_WINDOW
		#endif //KJH_PBG_ADD_INGAMESHOP_SYSTEM

		//------------------------------------------------
		// 2. 겐스시스템
		// - 안상규
		#define ASG_ADD_GENS_SYSTEM
		#ifdef ASG_ADD_GENS_SYSTEM
			#define ASG_ADD_UI_NPC_DIALOGUE						// NPC 대화창(2009.09.14)
			#define ASG_ADD_INFLUENCE_GROUND_EFFECT				// 겐스 세력 구분 뭅� 이펙트(2009.10.07)
			#define ASG_ADD_GENS_MARK							// 겐스 마크 표시(2009.10.09)
			#define ASG_ADD_GENS_NPC							// 겐스 NPC 추가(2009.10.12)
			#define ASG_ADD_GATE_TEXT_MAX_LEVEL					// Gate.txt 최대 레벨 추가.(2009.10.16)	[주의] 리소스 컨버터 새로운 소스로 컴파일 할 것.
			#define ASG_ADD_MOVEREQ_TEXT_MAX_LEVEL				// Movereq.txt 최대 레벨 추가.(2009.10.16)	[주의] 리소스 컨버터 새로운 소스로 컴파일 할 것.
		#endif	// ASG_ADD_GENS_SYSTEM

		//------------------------------------------------
		// 3. 추가아이템
		#define INGAMESHOP_ITEM01							// 해외에만 등록되어있거나 새로 생성된 아이템 디파인 추가(2009.09.08)
		#ifdef	INGAMESHOP_ITEM01
			#define LDK_MOD_PREMIUMITEM_DROP					// 프리미엄아이템 버리기제한해제(09.09.16)
			#define LDK_MOD_PREMIUMITEM_SELL					// 프리미엄아이템 판매제한해제(09.09.25)
			#define LDK_ADD_INGAMESHOP_GOBLIN_GOLD				// 고블린금화
			#define LDK_ADD_INGAMESHOP_LOCKED_GOLD_CHEST		// 봉인된 금색상자
			#define LDK_ADD_INGAMESHOP_LOCKED_SILVER_CHEST		// 봉인된 은색상자
			#define LDK_ADD_INGAMESHOP_GOLD_CHEST				// 금색상자
			#define LDK_ADD_INGAMESHOP_SILVER_CHEST				// 은색상자
			#define LDK_ADD_INGAMESHOP_PACKAGE_BOX				// 패키지 상자A-F
			#define LDK_ADD_INGAMESHOP_SMALL_WING				// 기간제 날개 작은(군망, 재날, 요날, 천날, 사날)
			#define LDK_ADD_INGAMESHOP_NEW_WEALTH_SEAL			// 신규 풍요의 인장

			// - 이동석
			#define LDS_ADD_NOTICEBOX_STATECOMMAND_ONLYUSEDARKLORD	// 인게임샾 아이템 // 리셋열매5종 // 통솔리셋열매는 늚㈆琯躍� 사용가능한 메세지 출력.
			#define LDS_ADD_INGAMESHOP_ITEM_RINGSAPPHIRE		// 인게임샾 아이템 // 신규 사파이어(푸른색)링	// MODEL_HELPER+109
			#define LDS_ADD_INGAMESHOP_ITEM_RINGRUBY			// 인게임샾 아이템 // 신규 루비(붉은색)링		// MODEL_HELPER+110
			#define LDS_ADD_INGAMESHOP_ITEM_RINGTOPAZ			// 인게임샾 아이템 // 신규 토파즈(주황)링		// MODEL_HELPER+111
			#define LDS_ADD_INGAMESHOP_ITEM_RINGAMETHYST		// 인게임샾 아이템 // 신규 자수정(보라색)링		// MODEL_HELPER+112
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETRUBY			// 인게임샾 아이템 // 신규 루비(붉은색) 목걸이	// MODEL_HELPER+113
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETEMERALD		// 인게임샾 아이템 // 신규 에메랄드(푸른) 목걸이// MODEL_HELPER+114
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETSAPPHIRE		// 인게임샾 아이템 // 신규 사파이어(녹색) 목걸이// MODEL_HELPER+115
			#define LDS_ADD_INGAMESHOP_ITEM_KEYSILVER			// 인게임샾 아이템 // 신규 키(실버)				// MODEL_POTION+112
			#define LDS_ADD_INGAMESHOP_ITEM_KEYGOLD				// 인게임샾 아이템 // 신규 키(골드)				// MODEL_POTION+113
			#define LDS_ADD_INGAMESHOP_ITEM_PASSCHAOSCASTLE		// 인게임샾 아이템 // 카오스케슬 자유입장권		// MODEL_HELPER+121
			#define LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6		// 인게임샾 아이템 // 프리미엄서비스6종			// MODEL_POTION+114~119
			#define LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4		// 인게임샾 아이템 // 정액권4종					// MODEL_POTION+126~129
			#define LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3	// 인게임샾 아이템 // 정량권3종					// MODEL_POTION+130~132
		#endif	//INGAMESHOP_ITEM01

	#endif // SEASON5_PART2

	#define ADD_TOTAL_CHARGE_8TH
	#ifdef  ADD_TOTAL_CHARGE_8TH
		#define YDG_ADD_HEALING_SCROLL						// 치유의 스크롤 (2009.12.03)

		#define LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12		// 희귀아이템 티켓 7-12 추가 (2010.02.12)
		#define LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH	//도플갱어, 뭏Ｄ�, 뭏Ｄ� 제 7맵 자유입장권 추가(2010.02.17)

		#define YDG_ADD_SKELETON_CHANGE_RING				// 스켈레톤 변신반지 (2009.12.03)
		#define ADD_SKELETON_PET							// 스켈레톤 펫 (2009.12.03)
		#ifdef  ADD_SKELETON_PET
			#define YDG_ADD_SKELETON_PET					// 스켈레톤 펫 
			#define YDG_FIX_SKELETON_PET_CREATE_POSITION	// 스켈레톤 펫 생성 위치 수정 (2010.01.26)
			#ifndef KJH_ADD_PERIOD_ITEM_SYSTEM					// #ifndef
				#define LJH_FIX_IGNORING_EXPIRATION_PERIOD		// 일본에는 아직 기간제가 적용되지 않으므로 bExpiredPeriod를 사용하지 않도록 수정(2010.02.11) - 기간제 시스템 도입 후 삭제
			#endif // KJH_ADD_PERIOD_ITEM_SYSTEM
			#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK	// 변신반지 스탯올릴때 만료 체크 (2010.01.25)
			#define LDK_FIX_PC4_GUARDIAN_DEMON_INFO			// 데몬 캐릭터정보창에 공격력,마력,저주력 추가 데미지 적용(09.10.15) - 캐릭터정보창에 펫 종렛� 의한 저주력 추가 데미지를 적용 시키기 위해 추가
			#define LJH_FIX_NOT_POP_UP_HIGHVALUE_MSGBOX_FOR_BANNED_TO_TRADE	//NPC에게 판매 금지된 아이템을 판매하려고 할때 고가의 아이템이라고 나오는 메세지 창을 안나오게 수정(10.02.19)
		#endif  //ADD_SKELETON_PET

		#define YDG_MOD_CHANGE_RING_EQUIPMENT_LIMIT			// 변신반지 한종렇� 장비하도록 수정 (2009.12.28)
	#endif  //ADD_TOTAL_CHARGE_8TH

	//-----------------------------------------------------------------------------
	// [ Seaso 5 - Part 1]

	#define LDS_ADD_SET_BMDMODELSEQUENCE_					// BMD 클래스의 사용되지 않는 변수인 BmdSequenceID에 BMDSequence 설정. (09.08.05)
	#define LDS_FIX_MEMORYLEAK_BMDWHICHBONECOUNTZERO		// BoneCount==0 인 BMD들에 대한 BMD Destruct 시점에 발생하는 메모리 릭 FIX. (09.08.13)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER	// 제국 수호군 방패병의 서버로부터의 몬스터 스킬==>Action 연결 작업. (09.08.18)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX	// 방패병의 1번 스킬(44)동작의 기존방식과 뉨� 방식의 에니메이션 호출 재 수정 (09.08.21)
	#define LDS_FIX_EG_COLOR_CHANDELIER							// release 모드서만 제국 수호군 주말맵 샹들리에 연기 색 뉨� 버그 수정 (09.08.21)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX2	// 방패병 44번 방패막기 스킬시 간혹 렌덤방향 뭉鑿릿� 버그 수정 (09.08.24)
	#define LDS_FIX_SKILLKEY_DISABLE_WHERE_EG_ALLTELESKILL	// 법사 텔레계열(텔레키네시스,순간이동) 스킬들은 제국수호군 영역에서 사용 못하도록 설정(09.08.28)
	#define LDS_FIX_EG_JERINT_ATTK1_ATTK2_SPEED				// 제국수호군 제린트 공격1, 공격2 속도 잘못된 수치로 FIX 작업 (09.09.04)
	#define LDS_MOD_ANIMATIONTRANSFORM_WITHHIGHMODEL			// AnimationTransformWithAttachHighModel함수에서 현재 arrayBone만 필요할 경우는 Transform으로 Bone이 Vertices에 곱하지 않도록 변경. (2009.09.09)
	#define LDS_ADD_ANIMATIONTRANSFORMWITHMODEL_USINGGLOBALTM	// AnimationTransformWithAttachHighModel함수내 TMArray가 Local인 이유로 이후 연산에 TM이 Point를 잃어버리는 현상으로 TM을 Global 으로 변경. (09.09.07)
	#define LDS_FIX_EG_JERINT_ANIMATION_AND_SWORDFORCE_SPEED	// 제린트의 공격 속도 및 검기 시간 범위 재작업 (09.09.08) 

	#define YDG_FIX_DOPPELGANGER_BUTTON_COLOR				// 도플갱어 UI 버튼 잠글때 색 이상한 문제 (2009.08.14)
	#define YDG_MOD_DOPPELGANGER_END_SOUND					// 도플갱어 종료 사운드 추가 (2009.08.20)
	#define YDG_MOD_TOURMODE_MAXSPEED						// 투어모드 최고속도 올림 (2009.07.10)

	#define ASG_FIX_QUEST_PROTOCOL_ADD						// 신규 캭뵈� 프로토콜 추가.(2009.09.07)

	#define PBG_ADD_NEWLOGO_IMAGECHANGE						// 로된�면 이미지 변경(09.08.12)

	#define PJH_NEW_SERVER_SELECT_MAP						// 서버 선택화면 변경(09.08.17)


	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 1] (09.09.11)
	#define SEASON5										
	#ifdef SEASON5
		#define YDG_ADD_DOPPELGANGER_EVENT
		#ifdef YDG_ADD_DOPPELGANGER_EVENT
			#define YDG_ADD_MAP_DOPPELGANGER1					// 도플갱어 맵1 (라클리온베이스) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER2					// 도플갱어 맵2 (불카누스베이스) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER3					// 도플갱어 맵3 (아틀란스베이스) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER4					// 도플갱어 맵4 (칸투르1차베이스) (2009.03.22)
			#define YDG_ADD_DOPPELGANGER_MONSTER				// 도플갱어 몬스터 추가 (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_NPC					// 도플갱어 NPC 루가드 추가 (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_ITEM					// 도플갱어 아이템 추가 (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_UI						// 도플갱어 UI 추가 (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_PROTOCOLS				// 도플갱어 프로토콜 추가 (2009.06.23)
			#define YDG_ADD_DOPPELGANGER_PORTAL					// 도플갱어 맵 포탈 추가 (2009.07.30)
			#define YDG_ADD_DOPPELGANGER_SOUND					// 도플갱어 사운드 추가 (2009.08.04)
		#endif	// YDG_ADD_DOPPELGANGER_EVENT

		#define LDS_ADD_EMPIRE_GUARDIAN
		#ifdef LDS_ADD_EMPIRE_GUARDIAN
			#define LDS_ADD_MAP_EMPIREGUARDIAN2					// 제국 수호군 맵 2   (화,  금)
			#define LDS_ADD_MAP_EMPIREGUARDIAN4					// 제국 수호군 맵 2   (일	  )
			#define LDS_ADD_EG_4_MONSTER_WORLDBOSS_GAIONKALEIN	// 제국 수호군 맵 4   (일	  )몬스터 영� 보스 가이온 카레인	(504/164)
			#define LDS_ADD_EG_4_MONSTER_JELINT					// 제국 수호군 맵 4   (일	  )몬스터 가이온 보좌관 제린트		(505/165)
			#define LDS_ADD_EG_3_4_MONSTER_RAYMOND				// 제국 수호군 맵 3,4 (수토,일)몬스터 부사령관 레이몬드			(506/166)
			#define LDS_ADD_EG_2_4_MONSTER_ERCANNE				// 제국 수호군 맵 2,4 (화금,일)몬스터 지휘관 에르칸느			(507/167)
			#define LDS_ADD_EG_2_MONSTER_2NDCORP_VERMONT		// 제국 수호군 맵 2   (화,  금)몬스터 2군단장 버몬트			(509/169)
			#define LDS_ADD_EG_2_MONSTER_ARTICLECAPTAIN			// 제국 수호군 맵 2   (화,  금)몬스터 기사단장					(514/174)
			#define LDS_ADD_EG_2_MONSTER_GRANDWIZARD			// 제국 수호군 맵 2   (화,  금)몬스터 대마법사					(515/176)

			#define LDK_ADD_EG_MONSTER_DEASULER					// 제국 수호군 1군단장 데슬러									(508/168)
			#define LDK_ADD_EG_MONSTER_DRILLMASTER				// 제국 수호군 제국수호군전투교관
			#define LDK_ADD_EG_MONSTER_QUARTERMASTER			// 제국 수호군 병참장교
			#define LDK_ADD_EG_MONSTER_CATO						// 제국 수호군 2군단장 카토
			#define LDK_ADD_EG_MONSTER_ASSASSINMASTER			// 제국 수호군 암살장교
			#define LDK_ADD_EG_MONSTER_RIDERMASTER				// 제국 수호군 기마단장
			#define LDK_ADD_EG_MONSTER_GALLIA					// 제국 수호군 4군단장 갈리아

			#define LDK_FIX_EG_DOOR_ROTATION_FIXED				// 제국 수호군 성문 악령에 의한 회전수정(2009.07.21)
			#define LDK_ADD_EG_DOOR_EFFECT						// 제국 수호군 맵 성문 파괴 이펙트
			#define LDK_ADD_EG_STATUE_EFFECT					// 제국 수호군 맵 석상 파괴 이펙트

			#define	LDK_ADD_EG_MONSTER_RAYMOND					// 제국 수호군 부사령관 레이몬드 (수, 일)
			#define LDK_ADD_EG_MONSTER_KNIGHTS					// 제국 수호군 기사단	Imperial Guardian Knights	520 - 181	
			#define LDK_ADD_EG_MONSTER_GUARD					// 제국 수호군 호위병	Imperial Guardian guard		521 - 182
			#define ASG_ADD_EG_MONSTER_GUARD_EFFECT				// 제국 수호군 호위병 (검기 이펙트)
			#define LDS_ADD_EG_MONSTER_GUARDIANDEFENDER			// 제국 수호군 맵 1234(모든요일)몬스터 수호군 방패병			(518/178)
			#define LDS_ADD_EG_MONSTER_GUARDIANPRIEST			// 제국 수호군 맵 1234(모든요일)몬스터 수호군 치유병			(519/179)

			#define LDK_ADD_MAPPROCESS_RENDERBASESMOKE_FUNC		// MapProcess에 RenderBaseSmoke 처리 함수 추가(09.07.31)
			#define	LDK_ADD_MAP_EMPIREGUARDIAN1					// 제국 수호군 맵 1 (�, 목)
			#define	LDK_ADD_MAP_EMPIREGUARDIAN3					// 제국 수호군 맵 3 (수, 토)

			#define LDK_ADD_EMPIRE_GUARDIAN_DOOR_ATTACK			// 제국 수호군 성문은 맵속성무기하고 공격가능하도록함 (09.08.06)

			#define LDK_ADD_EMPIREGUARDIAN_UI					// 제국 수호군 ui
			#define LDK_ADD_EMPIREGUARDIAN_PROTOCOLS			// 제국 수호군 프로토콜
			#define LDK_ADD_EMPIREGUARDIAN_ITEM					// 제국 수호군 아이템(4종:명령서, 종이쪽지, 세크로미콘, 조각)

			#define LDS_ADD_RESOURCE_FLARERED					// FLARE_RED.jpg 효과 추가

			#define LDS_ADD_MODEL_ATTACH_SPECIFIC_NODE_			// 특정 모델의 특정 노드에 뉨� 특정 모델을 ATTACH 하는 함수를 추가합니�. (09.06.12)
			#define LDS_ADD_INTERPOLATION_VECTOR3				// vec3_t의 보간 함수를 zzzmathlib.h에 추가. (09.06.24)
			#define LDS_MOD_INCREASE_BITMAPIDXBLURNUMBERS		// BITMAP_BLUR 인덱스 수를 기존4개 에서 실사용갯수인 10개로 늘립니�. (09.07.02)
			#define LDS_ADD_EFFECT_FIRESCREAM_FOR_MONSTER		// 늚㈆琯揚� 파이어스크림 스킬에 특정 몬스터(에르칸느)의 파이어스크림을 추가합니�. (09.07.07)
			#define LDS_MOD_EFFECTBLURSPARK_FORCEOFSWORD		// EffectBlurSpark 의 검기들의 갯수 제한에 문제로 검기가 간혹 깨지는 현상으로 부분 수정. (09.07.28)
			#define LDS_ADD_MAP_EMPIREGUARDIAN4_MAPEFFECT		// 주말맵의 맵 Effect에 추가되는 파티클, EFFECT들.. 
			#define LDS_FIX_MEMORYLEAK_DESTRUCTORFORBMD			// BMD의 소멸자로 인한 기존 BMD에서 발생한 memoryleak FIXED.. (2009.08.13)

			#define PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT	// (레이몬드)(치유병)몬스터 이펙트 작업(09.07.02)

			#define KJH_ADD_EG_MONSTER_KATO_EFFECT					// 3군단장 카토 이팩트 (09.07.20)
			#define KJH_ADD_EG_MONSTER_GUARDIANDEFENDER_EFFECT		// 수호군 방패병 이팩트 (09.07.31)
		#endif //LDS_ADD_EMPIRE_GUARDIAN

		#define ASG_ADD_NEW_QUEST_SYSTEM						// 뉴 캭뵈� 시스템(2009.05.20)
		#ifdef ASG_ADD_NEW_QUEST_SYSTEM
			#define ASG_ADD_UI_QUEST_PROGRESS					// 캭뵈� 진행 창(NPC용)(2009.05.27)
		#ifndef ASG_ADD_UI_NPC_DIALOGUE								// #ifndef 정리시 ASG_ADD_UI_NPC_MENU 디파인 모두 삭제.
			#define ASG_ADD_UI_NPC_MENU							// NPC 메뉴창(2009.06.17)
		#endif	// ASG_ADD_UI_NPC_DIALOGUE
			#define ASG_ADD_UI_QUEST_PROGRESS_ETC				// 캭뵈� 진행 창(기타용)(2009.06.24)
			#define ASG_MOD_UI_QUEST_INFO						// 캭뵈� 정보 창(2009.07.06)
			#define ASG_MOD_3D_CHAR_EXCLUSION_UI				// 3D 캐릭터 표현이 없는 UI로 묾�.(2009.08.03)
			//(!주의!) UI에 3D캐릭터 표현이 추가 되면 원래대로 되돌려야 되므로 정리하지 말 것.
		#endif	// ASG_ADD_NEW_QUEST_SYSTEM


		// Season 5					
		#define KJH_PBG_ADD_SEVEN_EVENT_2008					// 국내 상용화 7주년 이벤트	(달토끼)(2008.10.30) 
		#define LJH_MOD_POSITION_OF_REGISTERED_LUCKY_COIN		// 행운의 동전 등록 제한 수가 2^31이 됨에 따라 동전이미지와 겹치는 현상 막기위해 수정(2010.02.16)							
		#define YDG_MOD_SEPARATE_EFFECT_SKILLS					// 스킬 검사하는 이펙트 분리 (블러드 어택 등) (2009.08.10)
		#define ASG_ADD_NEW_DIVIDE_STRING						// 새로운 문장 나누기 기능.(2009.06.08)
		#define PBG_ADD_DISABLERENDER_BUFF						// 랜더안할 버프 이미지 처리(09.08.10)

		#define LDK_FIX_EMPIREGUARDIAN_UI_HOTKEY				// 제국 수호군npc ui창 열려있을때 캐릭창, 인벤창 안열리도록한�(09.10.28)
		#define LDK_FIX_PETPOSITION_MULTIPLY_OWNERSCALE			// 캐릭터 선택창 에서 캐릭터 크기에 따라 펫위치 수정(09.10.28)
		#define YDG_FIX_DOPPELGANGER_NPC_WINDOW_SCREEN_SIZE		// 도플갱어 NPC창 열렸을떄 파티창과 겹쳐지는 문제(09.10.28)
		#define YDG_FIX_MASTERLEVEL_PARTY_EXP_BONUS_BLOCK		// 마스터레벨이 파티 경험치 증가 아이템을 사지 못하도록 수정(09.10.28)
		#define YDG_FIX_SETITEM_REQUIRED_STATUS_SECRET_POTION	// 비약 사용시 세트 아이템 장착 정보 잘못 나오는 버그 수정 (09.10.29)
		#define LJH_ADD_LOOK_FOR_MOVE_ILLEGALLY_BY_MSG			// 유저가 채팅메세지를 이용 이동할수 없는 맵에 이동하려 하는지 판정(2009.10.29)
		#define PBG_FIX_SETOPTION_CALCULATE_SECRET_POTION		// 비약관련 세트 옵션 적용버그(09.11.04)
				
		// Season 5
		#define LJH_FIX_BUG_BUYING_AG_AURA_WHEN_USING_SD_AURA	// SD증가 오라를 하용하는 중 AG오라를 구입할 수 있는 버그 수정(09.11.16)
		#define PBG_FIX_JELINTNPC_TEXTWIDTH						// 제린트npc ui설정 버그 수정(09.11.10)
		#define PBG_FIX_STOPBGMSOUND							// 로돛京� bgm사운드 종료되지 않는 버그 수정(09.11.10)
		#define PBG_FIX_SDELITE_OVERLAY							// sd엘리트 물약 겹쳐지지 않는 버그 수정(09.11.17)
		#define LJH_FIX_ITEM_CANNOT_BE_EQUIPPED_AFTER_LOGOUT	// (JP_575)재 로그인 시 착용하고 있던 세트 아이템의 옵션 미적용으로 그 아이템을 더이상 착용할수 없는 버그 수정(09.12.10)-> 한국과 동일하게
		#define LJH_FIX_HERO_MOVES_EVEN_NOT_PRESENT				// (국내버그)(JP_524)유저의 캐릭터가 화면에 없을때도 이동할 수 있었던 버그 수정 (예:공성서버으로/에서 이동)(09.12.11)
		#define LJH_FIX_NOT_CALCULATED_BUFF						// 세트계산과 관련되어 버프가 적용되지 않았던 버그 수정(2010.01.15)
	#endif	// SEASON5


	#define ADD_TOTAL_CHARGE_7TH
	#ifdef ADD_TOTAL_CHARGE_7TH
		// - 양대�
		#define YDG_ADD_CS7_CRITICAL_MAGIC_RING		// 치명마법반지
		#define YDG_ADD_CS7_MAX_AG_AURA				// AG증가 오라
		#define YDG_ADD_CS7_MAX_SD_AURA				// SD증가 오라
		#define YDG_ADD_CS7_PARTY_EXP_BONUS_ITEM	// 파티 경험치 증가 아이템
		#define YDG_ADD_CS7_ELITE_SD_POTION			// 엘리트 SD회복 물약
		#define YDG_MOD_AURA_ITEM_EXCLUSIVELY_BUY	// 오라 중복 구입 막기 (09.11.02)

		// - 이동�
		#define LDK_MOD_PETPROCESS_SYSTEM			// 펫프로세스 업데이트 순서 변경(애니메이션 속도 임의 변경 가능)(2009.09.11)
		#define LDK_ADD_CS7_UNICORN_PET				// 유니콘 펫 
		#define LDK_FIX_CS7_UNICORN_PET_INFO		// 유니콘 펫 캐릭터 정보창 방어력 추가

		// - 박보�
		#define PBG_ADD_AURA_EFFECT					// AG SD 증가 오라 이펙트
	#endif //ADD_TOTAL_CHARGE_7TH

	#define KJH_FIX_GET_ZEN_SYSTEM_TEXT						// 겜블상점에서 아이템구입시 젠증가 메세지가 나오는 문제. (09.03.18) [09.03.19 테섭]
	#define KJH_FIX_WOPS_K33695_EQUIPABLE_DARKLOAD_PET_ITEM	// 늚㈆琯弱� 인벤에 펫을 소유하고 있을때, 툴팁에 착용불가로 나오는 버그수정 (09.04.27)
	#define KJH_FIX_WOPS_K33479_SELECT_CHARACTER_TO_HEAL	// 캐릭터에게 둘러쌓였을때, 요정의 치료스킬강화이후 캐릭터 선택이 잘 안되어지는 버그수정 (09.04.27)
	#define KJH_FIX_CHAOTIC_ANIMATION_ON_RIDE_PET			// 펫을타고 늚㈆琯� 카오틱디세이어 스킬시 애니메이션수정 (08.12.18)

	#define CSK_FIX_UI_FUNCTIONNAME							// UI관련 함수명 변경(2009.01.22) [2009.03.26 테섭]
	#define CSK_FIX_ANIMATION_BLENDING						// 애니메이션 블렌돠� 블렌드 안되게 옵션 주게 수정(2009.01.29) [2009.03.26 테섭]
	#define CSK_FIX_ADD_EXEPTION							// dmp파일 분석해보니 getTargetCharacterKey 함수에서 튕기는걸로 예측되서 예외처리 추가(2009.01.29) [2009.03.26 테섭]

	#define PBG_FIX_PKFIELD_ATTACK							// PKFIELD에서 길드원끼리 공격되는 현상(09.04.02) [2009.04.06 테섭]
	#define PBG_FIX_PKFIELD_CAOTIC							// 카오틱 디세이어 탈 것에서 버그 수정(09.04.07) [2009.04.13 테섭]
	#define PBG_FIX_GUILDWAR_PK								// PKFIELD에서 길드워 중에 일반인 공격안받는 버그 수정(09.04.07) [2009.04.13 테섭]
	#define PBG_FIX_CHAOTIC_ANIMATION						// 카오틱 디세이어 애니메이션 수정(09.06.11)
	#define PBG_FIX_DARK_FIRESCREAM_HACKCHECK				// 늚� 파이어스크림 (서버)플셔ŉ晥� 버그 수정(09.06.22)
	#define PBG_MOD_INVENTORY_REPAIR_COST					// 자동수리금액 하향조정(09.06.08)
	#define PBG_MOD_LUCKYCOINEVENT							// 행운의동전 255개 이상 등록되지 않도록 이벤트 수정(09.07.15)(뉨쩤I와의버그,열고이동버그)

	#define LDK_FIX_INVENTORY_SPEAR_SCALE					// 인벤토리 무기-spear 크기 처리 if문 수정 [09.03.19 테섭]

	#define YDG_FIX_INVALID_TERRAIN_LIGHT					// 메모리 침범 버그 수정(맵툴 관련) (2009.03.30) [2009.04.13 테섭]
	#define YDG_FIX_MEMORY_LEAK_0905						// 메모리 누수 제거 (2009.05.11)
	#define YDG_FIX_INVALID_SET_DEFENCE_RATE_BONUS			// 방어구세트 추가 방어력표시 방어력의 10%가 아니라 방어율의 10%임 (2009.04.15) [패치안됨] wops_32937
	#define YDG_FIX_STAFF_FLAMESTRIKE_IN_CHAOSCASLE			// 카오스캐슬에서 마검사 지팡이 착용시 플레임스트라이크와 블러드어택 아이콘색 문제 (2009.04.15) [패치안됨] wops_34747
	#define YDG_FIX_LEFTHAND_MAGICDAMAGE					// 마검사가 지팡이나 룬뭣뵀링躍� 왼손에 찼을때 마력이 올라가는 문제 (2009.04.15) [패치안됨] wops_32641
	#define YDG_FIX_BLOCK_STAFF_WHEEL						// 마검사 지팡이, 맨손 회오리베기 막기 (2009.05.18)
	#define YDG_FIX_MEMORY_LEAK_0905_2ND					// 메모리 누수 제거 2차 (2009.05.19)
	#define YDG_FIX_CLIENT_SKILL_EFFECT_SIZE				// 이펙트 많을때 블러드어택등 클라스킬 안먹는 버그 (2009.07.13)

	#define ASG_FIX_PICK_ITEM_FROM_INVEN					// 인벤창 특정 칸에서 아이템을 집어들었을 때 캐릭정보창에서 능력치가 변동되는 버그(2009.04.15) wops_33567
	#define ASG_FIX_MOVE_WIN_MURDERER1_BUG					// 무법자(카오) 레벨1일 때 맵 이동창 표시 버그.(2009.04.20) wops_34498

	#define PJH_FIX_4_BUGFIX_33								// wops_34066

	#define LDS_FIX_MASTERSKILLKEY_DISABLE_OVER_LIMIT_MAGICIAN		// 마스터 스킬 강화 된 스킬들에 대해 요구치 미달시에 이용 불가. (09.04.22) no_wops
	#define LDS_FIX_SETITEM_WRONG_CALCULATION_IMPROVEATTACKVALUE	// 세트아이템착용 이후 사랑의 묘약을 먹으면, 케릭터 정보창에 힘증가 스탯수치가 뉨Η恥�. (09.04.23) wops_35131
	#define LDS_FIX_MEMORYLEAK_PHYSICSMANAGER_RELEASE				// 메모리 누수 제거, Physicsmanager 힙영역 메모리 반환 처리. (늚㈆琯� 케릭 로돛京� 종료 시 릭 발생)(09.05.25)
#endif // UPDATE_100527


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// [2010.03.25 1.03v]

#define LDS_FIX_MEMORYLEAK_0910_LOGINWIN						// 메모리릭 FIXED. Logwin.cpp의 아이디, 패스워드 context가 재로그인 이나 서버선택등으로 재호출시에 메모리 미반환으로 릭발생. (09.11.30)
#define LDS_FIX_MEMORYLEAK_DUPLICATEDITEMS_INVENTORY_SAMEPOS	// 메모리릭 FIXED. 인벤토리상에 아이템을 집은후 같은 위치에 놓을때만 횟수 만큼 메모리 릭 발생. (09.11.09)
#define LDS_FIX_MEMORYLEAK_WHEN_MATCHEVENT_TERMINATE			// 매치이벤트(도플갱어,블러드캐슬,카오스캐슬,환영의사원) 종료시마� 메모리릭 발생 FIX. (10.01.29)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << 버그수정 패치 >>
//----------------------------------------------------------------------------------------------
// [2010.03.25 글로벌 1.03s] - 이동석

#define LDS_MOD_URL_GLOBAL_TO_DOTCOM				// 글로벌 기획 요청 사항 // 글로벌 뮤인터넷 서버 주소가 기존 webzen.net 에서 webzen.com으로 일괄 변경 (10.03.25)
#define LDS_FIX_GLPARAM_SWAPMODE_BITMAP				// System 안정화 (OPENGL ERROR) // Wrong OpenGL Texture Parameter SWAPMode  (10.02.19)
#define LDS_FIX_NONINIT_TEXTBOLDTABLE				// 게임 버그 FIXED // 마스터스킬창의 TOOLTIP 렌덤 볼드 문제. 볼드 텍스트TABLE이 초기화가 되지 않아 이전 TEXT에서 사용되었던 항목별 BOLD 여부 값이 그대로 적용되는 오�. (10.02.12)



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << 버그수정 패치 >>
//----------------------------------------------------------------------------------------------
// [2010.03.11 글로벌 1.03r] - 이동석

#define LDS_MOD_EVENTCHERRYBLOSSOM_FORENG				// 벚꽃 이벤트를 글로벌에 맞춰 변경(10.03.10)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------
// << 버그수정 패치 >>
//----------------------------------------------------------------------------------------------
// [2010.03.03 글로벌 1.03q] - 이동석

#define KJH_ADD_SERVER_LIST_SYSTEM						// 서버리스트 시스템 변경 (09.10.19) - 국내의 내용을 미리 당겨 사용.
#define ASG_ADD_SERVER_LIST_SCRIPTS						// ServerList.txt 스크립트 추가.(2009.10.29) - 국내의 내용을 미리 당겨 사용.
#ifdef ASG_ADD_SERVER_LIST_SCRIPTS
	#define ASG_ADD_SERVER_LIST_SCRIPTS_GLOBAL_TEMP		// 미리 ASG_ADD_SERVER_LIST_SCRIPTS 추가로 인한 버그 수정.(10.03.02) 
															//Season5 이후 삭제해도 됨.(BuxConvert() 함수 위치 문제) // Season5 업데이트시에 삭제해도 되는것인지 확인 늄� 할것.
	#define ASG_MOD_SERVER_LIST_ADD_CHARGED_CHANNEL		// 서버리스트에 유료 채널 추가.(10.02.26) - 현재 글로벌만 적용.
#endif	//ASG_ADD_SERVER_LIST_SCRIPTS


//-----------------------------------------------------------------------------
// [ Season 4.5 ] 
#define SEASON4_5										
#ifdef SEASON4_5

	#define KJH_ADD_09SUMMER_EVENT					// 09년 여름이벤트		(09.06.23)

	#define YDG_ADD_NEW_DUEL_SYSTEM					// 새로운 결투 시스템 (2009.01.05) [09.03.19 테섭]
	#ifdef YDG_ADD_NEW_DUEL_SYSTEM
		#define YDG_ADD_NEW_DUEL_UI					// 새로운 결투 관련 UI 추가 (2009.01.05) [09.03.19 테섭]
		#define YDG_ADD_NEW_DUEL_PROTOCOL			// 새로운 결투 관련 프로토콜 추가 (2009.01.08) [09.03.19 테섭]
		#define YDG_ADD_NEW_DUEL_NPC				// 새로운 결투 관련 NPC 타이투스 추가 (2009.01.19) [09.03.19 테섭]
		#define YDG_ADD_NEW_DUEL_WATCH_BUFF			// 새로운 결투 관전 버프 추가 (2009.01.20) [09.03.19 테섭]
		#define YDG_ADD_MAP_DUEL_ARENA				// 새로운 결투장 맵 추가 (2009.02.04) [09.03.19 테섭]
	#endif	// YDG_ADD_PVP_SYSTEM

	#define PBG_ADD_PKFIELD							// PK필드 추가(2008.12.29) [09.03.19 테섭]
	#define PBG_ADD_HONOROFGLADIATORBUFFTIME		// 검투사의 명예 버프 시간 툴팁 추가(2009.03.19) [09.03.19 테섭]

	#define LDK_ADD_GAMBLE_SYSTEM					// 젠소모 무기 뽑기 상점 (09.01.05) [09.03.19 테섭]
	#ifdef LDK_ADD_GAMBLE_SYSTEM
		#define LDK_ADD_GAMBLE_NPC_MOSS				// 겜블 상인 모스 [09.03.19 테섭]
		#define LDK_ADD_GAMBLE_RANDOM_ICON			// 겜블용 랜덤무기 아이콘 [09.03.19 테섭]
		#define LDK_ADD_GAMBLERS_WEAPONS			// 겜블전용 레어 무기들 [09.03.19 테섭]
	#endif //LDK_ADD_GAMBLE_SYSTEM

	#define PJH_ADD_PANDA_PET
	#define PJH_ADD_PANDA_CHANGERING

#endif // SEASON4_5


#define ASG_FIX_LENA_REGISTRATION

#define ASG_ADD_CHARGED_CHANNEL_TICKET					// 유료 채널 입장권.(2010.02.05) - 글로벌전용

#define ADD_TOTAL_CHARGE_6TH
#ifdef ADD_TOTAL_CHARGE_6TH

	#define ADD_CASH_SHOP_6TH
		#ifdef ADD_CASH_SHOP_6TH
		#define ASG_ADD_CS6_GUARD_CHARM				// 수호의부적(2009.02.09)
		#define ASG_ADD_CS6_ITEM_GUARD_CHARM		// 아이템보호부적(2009.02.09)
		#define ASG_ADD_CS6_ASCENSION_SEAL_MASTER 	// 상승의인장마스터(2009.02.24)
		#define ASG_ADD_CS6_WEALTH_SEAL_MASTER 		// 풍요의인장마스터(2009.02.24)
		#define LDS_ADD_CS6_CHARM_MIX_ITEM_WING
	#endif	// ADD_CASH_SHOP_6TH

	#define CSK_ADD_GOLDCORPS_EVENT					// 황금군단이벤트(2009.03.13)
	#define LDS_ADD_GOLDCORPS_EVENT_MOD_GREATDRAGON // 황금 그레이트 드레곤 비주얼 재작업. 비주얼 이펙트 추가. 기존 동일한 몹 존재. (2009.04.06) (BITMAP_FIRE_HIK3_MONO 효과 참조.)
#endif // ADD_TOTAL_CHARGE_6TH


#define PBG_MOD_NONPVPSERVER
#define LDS_FIX_PETDESTRUCTOR_TERMINATE_EFFECTOWNER_ADD_TYPE
#define LDS_FIX_AFTER_PETDESTRUCTOR_ATTHESAMETIME_TERMINATE_EFFECTOWNER

// (2009.04.23)
#define PJH_CHARACTER_RENAME
#define LDK_MOD_GLOBAL_PORTAL_LOGO

//#define LDK_MOD_GLOBAL_PORTAL_CASHSHOP_BUTTON_DENY	// (09.04.07)
#define LDK_FIX_MOVEWINDOW_SCROLL_BUG				// (2009.04.22)
#define LDK_MOD_PASSWORD_LENGTH_20					// (2009.04.24)
#define LDK_MOD_GLOBAL_STORAGELOCK_CHANGE			// (2009.04.27)

#define ADD_CASH_SHOP_5TH

#ifdef ADD_CASH_SHOP_5TH
	#define LDK_FIX_CS5_HIDE_SEEDLEVEL
	#define YDG_ADD_CS5_REVIVAL_CHARM
	#define YDG_ADD_CS5_PORTAL_CHARM
#endif	// YDG_ADD_CASH_SHOP_5TH

#define PBG_WOPS_CURSEDTEMPLEBASKET_MOVING			//(2008.12.18)

#define PSW_PARTCHARGE_ITEM4

#ifdef PSW_PARTCHARGE_ITEM4
	#define PSW_ADD_PC4_SEALITEM
	#define PSW_ADD_PC4_SCROLLITEM
	#define PSW_ADD_PC4_CHAOSCHARMITEM
	#define LDK_ADD_PC4_GUARDIAN
	#define	LDK_FIX_GUARDIAN_CHANGE_LIFEWORD			//(2009.01.14)
	#define LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE
#endif //PSW_PARTCHARGE_ITEM4


#define PSW_ADD_FOREIGN_HELPWINDOW

#define PSW_PARTCHARGE_ITEM3

#ifdef PSW_PARTCHARGE_ITEM3
	#define PSW_NEW_CHAOS_CARD
	#define PSW_NEW_ELITE_ITEM
#endif //PSW_PARTCHARGE_ITEM3


#define PSW_PARTCHARGE_ITEM2

#ifdef PSW_PARTCHARGE_ITEM2
	#define PSW_ELITE_ITEM
	#define PSW_SCROLL_ITEM
	#define PSW_SEAL_ITEM
	#define PSW_FRUIT_ITEM
	#define PSW_SECRET_ITEM
	#define PSW_INDULGENCE_ITEM
	#define PSW_RARE_ITEM
	#define PSW_CURSEDTEMPLE_FREE_TICKET
#endif //PSW_PARTCHARGE_ITEM2


#define PSW_PARTCHARGE_ITEM1
				
#ifdef PSW_PARTCHARGE_ITEM1
	#define CSK_FREE_TICKET						// (2007.02.06)
	#define CSK_CHAOS_CARD						// (2007.02.07)
	#define CSK_RARE_ITEM						// (2006.02.15)
	#define CSK_LUCKY_CHARM						// ( 2007.02.22 )
	#define CSK_LUCKY_SEAL						// ( 2007.02.22 )	
#endif //PSW_PARTCHARGE_ITEM1

#define LEM_ADD_SEASON5_PART5_MINIUPDATE_JEWELMIX


