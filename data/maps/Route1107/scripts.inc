Route1107_MapScripts::
	.byte 0


Route1107_EventScript_HouseSign::
	lockall
	msgbox Route1107_EventScript_HouseSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Route1107_EventScript_HouseDoorSign::
	lockall
	msgbox Route1107_EventScript_HouseDoorSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Route1107_EventScript_DragonCaveSign::
	lockall
	msgbox Route1107_EventScript_DragonCaveSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Route1107_EventScript_TwinniStoneHouse::
	lockall
	faceplayer
	msgbox Route1107_EventScript_TwinniStoneHouse_Text_0
	waitmessage
	closemessage
	releaseall
	return


Route1107_EventScript_YoshiStoneHouse::
	lockall
	msgbox Route1107_EventScript_YoshiStoneHouse_Text_0
	waitmessage
	closemessage
	releaseall
	return


Route1107_EventScript_HouseSign_Text_0:
	.string "Altschauerberg 8, Winkler$"

Route1107_EventScript_HouseDoorSign_Text_0:
	.string "You hear screaming coming from inside\n"
	.string "the house. Best not get near it.$"

Route1107_EventScript_DragonCaveSign_Text_0:
	.string "The Howling Cave$"

Route1107_EventScript_TwinniStoneHouse_Text_0:
	.string "Twinni: Hihihihi. I love throwing rocks\n"
	.string "at this house. The guy inside always\l"
	.string "yells at us but that is part of the fun.$"

Route1107_EventScript_YoshiStoneHouse_Text_0:
	.string "Yoshi: That was a good hit. I think I\n"
	.string "broke another window!$"
