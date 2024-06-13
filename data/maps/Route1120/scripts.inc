Route1120_MapScripts::
	.byte 0


Route1120_EventScript_SurfBoy::
	lockall
	msgbox Route1120_EventScript_SurfBoy_Text_0
	waitmessage
	msgbox Route1120_EventScript_SurfBoy_Text_1
	waitmessage
	msgbox Route1120_EventScript_SurfBoy_Text_2
	waitmessage
	msgbox Route1120_EventScript_SurfBoy_Text_3
	waitmessage
	closemessage
	giveitem ITEM_HM03_SURF
	msgbox Route1120_EventScript_SurfBoy_Text_4
	waitmessage
	msgbox Route1120_EventScript_SurfBoy_Text_5
	waitmessage
	closemessage
	releaseall
	return


Route1120_EventScript_TwoshiBattle::
	lockall
	msgbox Route1120_EventScript_TwoshiBattle_Text_0
	waitmessage
	closemessage
	msgbox Route1120_EventScript_TwoshiBattle_Text_1
	waitmessage
	closemessage
	playse SE_PIN
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement 16, Route1120_Twinni_ComesCloser
	applymovement 17, Route1120_Yoshi_ComesCloser
	waitmovement 0
	msgbox Route1120_EventScript_TwoshiBattle_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route1120_EventScript_TwoshiBattle_2
	msgbox Route1120_EventScript_TwoshiBattle_Text_4
	compare VAR_STARTER_MON, 0
	goto_if_eq Route1120_EventScript_TwoshiBattle_11
	compare VAR_STARTER_MON, 1
	goto_if_eq Route1120_EventScript_TwoshiBattle_12
	compare VAR_STARTER_MON, 2
	goto_if_eq Route1120_EventScript_TwoshiBattle_13
Route1120_EventScript_TwoshiBattle_1:
	waitmessage
	closemessage
	msgbox Route1120_EventScript_TwoshiBattle_Text_5
	waitmessage
	closemessage
	giveitem ITEM_HM03_SURF
	msgbox Route1120_EventScript_TwoshiBattle_Text_6
	waitmessage
	msgbox Route1120_EventScript_TwoshiBattle_Text_7
	waitmessage
	closemessage
	applymovement 16, Route1120_Yoshi_Leaves
	msgbox Route1120_EventScript_TwoshiBattle_Text_8
	applymovement 17, Route1120_Twinni_Leaves
	waitmessage
	closemessage
	waitmovement 17
	waitmovement 16
	removeobject 17
	removeobject 16
	setvar VAR_UNUSED_0x40A8, 1
	setflag FLAG_UNUSED_0x027
	releaseall
	return

Route1120_EventScript_TwoshiBattle_2:
	msgbox Route1120_EventScript_TwoshiBattle_Text_3
	compare VAR_STARTER_MON, 0
	goto_if_eq Route1120_EventScript_TwoshiBattle_5
	compare VAR_STARTER_MON, 1
	goto_if_eq Route1120_EventScript_TwoshiBattle_6
	compare VAR_STARTER_MON, 2
	goto_if_eq Route1120_EventScript_TwoshiBattle_7
	goto Route1120_EventScript_TwoshiBattle_1

Route1120_EventScript_TwoshiBattle_5:
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route1120_Text_TwinniDefeated
	goto Route1120_EventScript_TwoshiBattle_1

Route1120_EventScript_TwoshiBattle_6:
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route1120_Text_TwinniDefeated
	goto Route1120_EventScript_TwoshiBattle_1

Route1120_EventScript_TwoshiBattle_7:
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route1120_Text_TwinniDefeated
	goto Route1120_EventScript_TwoshiBattle_1

Route1120_EventScript_TwoshiBattle_11:
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route1120_Text_YoshiDefeated
	goto Route1120_EventScript_TwoshiBattle_1

Route1120_EventScript_TwoshiBattle_12:
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route1120_Text_YoshiDefeated
	goto Route1120_EventScript_TwoshiBattle_1

Route1120_EventScript_TwoshiBattle_13:
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route1120_Text_YoshiDefeated
	goto Route1120_EventScript_TwoshiBattle_1


Route1120_Twinni_ComesCloser:
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route1120_Yoshi_ComesCloser:
	walk_down
	walk_down
	step_end

Route1120_Yoshi_Leaves:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route1120_Twinni_Leaves:
	walk_up
	walk_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route1120_Text_TwinniDefeated::
	msgbox Route1120_Text_TwinniDefeated_Text_0
	waitmessage
	closemessage
	return


Route1120_Text_YoshiDefeated::
	msgbox Route1120_Text_YoshiDefeated_Text_0
	waitmessage
	closemessage
	return


Route1120_EventScript_SurfBoy_Text_0:
	.string "I can't swim yet so my Mum won't$"

Route1120_EventScript_SurfBoy_Text_1:
	.string "let me go into the Pool without my$"

Route1120_EventScript_SurfBoy_Text_2:
	.string "Pokémon. Do your Pokémon know how to swim?$"

Route1120_EventScript_SurfBoy_Text_3:
	.string "Here this can teach them!$"

Route1120_EventScript_SurfBoy_Text_4:
	.string "RECEIVED HM03 SURF$"

Route1120_EventScript_SurfBoy_Text_5:
	.string "Now you can enjoy the water too!$"

Route1120_EventScript_TwoshiBattle_Text_0:
	.string "Yoshi: Come on, let's go enjoy the\n"
	.string "water.$"

Route1120_EventScript_TwoshiBattle_Text_1:
	.string "Twinni: I can't swim yet. You know that,\n"
	.string "Yoshi!$"

Route1120_EventScript_TwoshiBattle_Text_2:
	.string "Twinni: Oh! Hey {PLAYER}, do you know how to swim?$"

Route1120_EventScript_TwoshiBattle_Text_3:
	.string "Twinni: Oh, wow. You are just like me.\n"
	.string "Haha. I bet your Pokémon don't know\l"
	.string "how to swim either then. We can show\l"
	.string "them how to Surf if you beat me in a\l"
	.string "Pokémon Battle.$"

Route1120_EventScript_TwoshiBattle_Text_4:
	.string "Yoshi: Oh, wow. You are just like me.\n"
	.string "Haha. But I bet your Pokémon don't\l"
	.string "know how to swim. We can show them how\l"
	.string "to Surf if you beat me in a Pokémon\l"
	.string "Battle.$"

Route1120_EventScript_TwoshiBattle_Text_5:
	.string "Yoshi: What a hot battle! Ok now time to\n"
	.string "cool down. Oh, I almost forgot.$"

Route1120_EventScript_TwoshiBattle_Text_6:
	.string "RECEIVED HM03 SURF.$"

Route1120_EventScript_TwoshiBattle_Text_7:
	.string "Twinni: Now you and your Pokémon can\n"
	.string "enjoy the water too! Yoshi, let's go\l"
	.string "they are gonna close the pool soon.$"

Route1120_EventScript_TwoshiBattle_Text_8:
	.string "Yoshi: Ok, quick! Bye.$"

Route1120_Text_TwinniDefeated_Text_0:
	.string "Twinni: Not again! Waaaaaaaah!$"

Route1120_Text_YoshiDefeated_Text_0:
	.string "Yoshi: Not again! Waaaaaaaah!$"
