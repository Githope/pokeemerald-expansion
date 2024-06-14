Arcadia_MapScripts::
	.byte 0


Arcadia_EventScript_CylistSteelTm::
	lockall
	checkitem ITEM_BICYCLE
	compare VAR_RESULT, 1
	goto_if_ne Arcadia_EventScript_CylistSteelTm_2
Arcadia_EventScript_CylistSteelTm_1:
	msgbox Arcadia_EventScript_CylistSteelTm_Text_2
	waitmessage
	closemessage
	releaseall
	return

Arcadia_EventScript_CylistSteelTm_2:
	goto_if_set FLAG_UNUSED_0x026, Arcadia_EventScript_CylistSteelTm_4
	msgbox Arcadia_EventScript_CylistSteelTm_Text_1
	waitmessage
	closemessage
	giveitem ITEM_TM47_STEEL_WING
	setflag FLAG_UNUSED_0x026
	msgbox Arcadia_EventScript_CylistSteelTm_Text_0
	waitmessage
	closemessage
	releaseall
	goto Arcadia_EventScript_CylistSteelTm_1

Arcadia_EventScript_CylistSteelTm_4:
	msgbox Arcadia_EventScript_CylistSteelTm_Text_0
	waitmessage
	closemessage
	goto Arcadia_EventScript_CylistSteelTm_1


Arcadia_EventScript_ChangeBike::
	lockall
	msgbox Arcadia_EventScript_ChangeBike_Text_0
	checkflag FLAG_RECEIVED_BIKE
	compare VAR_RESULT, 1
	goto_if_eq Arcadia_EventScript_ChangeBike_1
	msgbox Arcadia_EventScript_ChangeBike_Text_1
	waitmessage
	closemessage
	releaseall
	return

Arcadia_EventScript_ChangeBike_1:
	call MauvilleCity_BikeShop_EventScript_AskSwitchBikes
	return


Arcadia_EventScript_CylistSteelTm_Text_0:
	.string "This TM contains a steel move! I don't\n"
	.string "know which one though.$"

Arcadia_EventScript_CylistSteelTm_Text_1:
	.string "Wow what a rad bike! You a fellow\n"
	.string "cyclist like me? You should take this.$"

Arcadia_EventScript_CylistSteelTm_Text_2:
	.string "I found this littered in the\n"
	.string "Underground Bike Path. If you find\l"
	.string "something down there you should pick\l"
	.string "it up too. Us cyclists could get hurt if\l"
	.string "our wheels get stuck.$"

Arcadia_EventScript_ChangeBike_Text_0:
	.string "This rental bike looks great.$"

Arcadia_EventScript_ChangeBike_Text_1:
	.string "If I had a bike I could swap mine for\n"
	.string "this one.$"
