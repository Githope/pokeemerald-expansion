AuhofStation_MapScripts::
	.byte 0


AuhofStation_EventScript_TravelHouse_Sign::
	msgbox AuhofStation_EventScript_TravelHouse_Sign_Text_0
	waitmessage
	closemessage
	return


AuhofStation_EventScript_SmallHouse_Sign::
	msgbox AuhofStation_EventScript_SmallHouse_Sign_Text_0
	waitmessage
	closemessage
	return


AuhofStation_EventScript_Welcome_Sign::
	msgbox AuhofStation_EventScript_Welcome_Sign_Text_0
	waitmessage
	closemessage
	return


AuhofStation_EventScript_RatHouse_Sign::
	msgbox AuhofStation_EventScript_RatHouse_Sign_Text_0
	waitmessage
	closemessage
	return


AuhofStation_EventScript_Reporter_Sign::
	msgbox AuhofStation_EventScript_Reporter_Sign_Text_0
	waitmessage
	closemessage
	return


AuhofStation_EventScript_CameraMan_Sign::
	msgbox AuhofStation_EventScript_CameraMan_Sign_Text_0
	waitmessage
	closemessage
	return


Auhofstation_EventScript_TwinniBattle::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement 4, AuhofStation_Twinni_ComesCloser
	waitmovement 0
	msgbox Auhofstation_EventScript_TwinniBattle_Text_0
	waitmessage
	closemessage
	compare VAR_STARTER_MON, 0
	goto_if_eq Auhofstation_EventScript_TwinniBattle_2
	compare VAR_STARTER_MON, 1
	goto_if_eq Auhofstation_EventScript_TwinniBattle_3
	compare VAR_STARTER_MON, 2
	goto_if_eq Auhofstation_EventScript_TwinniBattle_4
Auhofstation_EventScript_TwinniBattle_1:
	fadedefaultbgm
	setvar VAR_AUHOFSTATION_STATE, 1
	end

Auhofstation_EventScript_TwinniBattle_2:
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, AuhofStation_Text_MayDefeated
	goto Auhofstation_EventScript_TwinniBattle_1

Auhofstation_EventScript_TwinniBattle_3:
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, AuhofStation_Text_MayDefeated
	goto Auhofstation_EventScript_TwinniBattle_1

Auhofstation_EventScript_TwinniBattle_4:
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, May_Intro, AuhofStation_Text_MayDefeated
	goto Auhofstation_EventScript_TwinniBattle_1


AuhofStation_Twinni_ComesCloser:
	walk_down
	walk_down
	step_end

Auhofstation_EventScript_YoshiBattle::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	msgbox Auhofstation_EventScript_YoshiBattle_Text_0
	compare VAR_STARTER_MON, 0
	goto_if_eq Auhofstation_EventScript_YoshiBattle_2
	compare VAR_STARTER_MON, 1
	goto_if_eq Auhofstation_EventScript_YoshiBattle_3
	compare VAR_STARTER_MON, 2
	goto_if_eq Auhofstation_EventScript_YoshiBattle_4
Auhofstation_EventScript_YoshiBattle_1:
	closemessage
	setvar VAR_AUHOFSTATION_STATE, 2
	delay 30
	fadescreen FADE_TO_BLACK
	removeobject 4
	removeobject 3
	setflag FLAG_HIDE_ROUTE_103_RIVAL
	fadescreen FADE_FROM_BLACK
	releaseall
	end

Auhofstation_EventScript_YoshiBattle_2:
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, AuhofStation_Text_YoshiDefeated
	goto Auhofstation_EventScript_YoshiBattle_1

Auhofstation_EventScript_YoshiBattle_3:
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, AuhofStation_Text_YoshiDefeated
	goto Auhofstation_EventScript_YoshiBattle_1

Auhofstation_EventScript_YoshiBattle_4:
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, AuhofStation_Text_YoshiDefeated
	goto Auhofstation_EventScript_YoshiBattle_1


Auhofstation_Twinni_LostCrying::
	msgbox Auhofstation_Twinni_LostCrying_Text_0
	waitmessage
	closemessage
	return


Auhofstation_Yoshi_LostCrying::
	msgbox Auhofstation_Yoshi_LostCrying_Text_0
	waitmessage
	closemessage
	return


Route1103_Rocksmasher_Hyah::
	lockall
	msgbox Route1103_Rocksmasher_Hyah_Text_0
	playse SE_PIN
	setvar VAR_TEMP_0, 1
	waitmessage
	closemessage
	releaseall
	return


AuhofStation_EventScript_TravelHouse_Sign_Text_0:
	.string "Auhof Station Martial Arts$"

AuhofStation_EventScript_SmallHouse_Sign_Text_0:
	.string "Rock Smashers House$"

AuhofStation_EventScript_Welcome_Sign_Text_0:
	.string "Welcome to Auhof Station. We hope you\n"
	.string "don't stay.$"

AuhofStation_EventScript_RatHouse_Sign_Text_0:
	.string "Abandoned House$"

AuhofStation_EventScript_Reporter_Sign_Text_0:
	.string "This is gonna be a good story.$"

AuhofStation_EventScript_CameraMan_Sign_Text_0:
	.string "Hey Kid, Stay out of the shot!$"

Auhofstation_EventScript_TwinniBattle_Text_0:
	.string "Twinni: Let's see how your Kitten is doing!$"

Auhofstation_EventScript_YoshiBattle_Text_0:
	.string "Yoshi: You made her cry!$"

Auhofstation_Twinni_LostCrying_Text_0:
	.string "Twinni: Waaaaaaaaaaaaaaaaah!$"

Auhofstation_Yoshi_LostCrying_Text_0:
	.string "Yoshi: Waaaaaaaaaaaaaaaaah!$"

Route1103_Rocksmasher_Hyah_Text_0:
	.string "Rocksmasher: Hyaaaa!$"

May_Intro::
	.string "Twinni: You'll never win!$"

AuhofStation_Text_MayDefeated::
	.string "Twinni: Poop...$"

AuhofStation_Text_YoshiDefeated::
	.string "Yoshi: Now you are going to make me cry too.$"
