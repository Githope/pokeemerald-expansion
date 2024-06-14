PraterTown_MapScripts::
	.byte 0


PraterTown_EventScript_CutGuy::
	msgbox PraterTown_EventScript_CutGuy_Text_0
	fadescreen FADE_TO_BLACK
	clearflag FLAG_HIDE_ROUTE_119_KECLEON_1
	addobject 1
	fadescreen FADE_FROM_BLACK
	waitmessage
	applymovement 1, CutGuyRunsOUT
	waitmovement 0
	msgbox PraterTown_EventScript_CutGuy_Text_1
	waitmessage
	msgbox PraterTown_EventScript_CutGuy_Text_2
	msgbox PraterTown_EventScript_CutGuy_Text_3
	waitmessage
	closemessage
	applymovement 1, CutGuyRunsIN
	waitmovement 0
	fadescreen FADE_TO_BLACK
	setvar VAR_PRATER_TOWN_STATE, 2
	setflag FLAG_HIDE_ROUTE_119_KECLEON_1
	removeobject 1
	clearflag FLAG_UNUSED_0x022
	fadescreen FADE_FROM_BLACK
	addobject 2
	return


CutGuyRunsOUT:
	walk_fast_down
	walk_fast_down
	face_right
	step_end

CutGuyRunsIN:
	walk_slow_up
	walk_slow_up
	step_end

Prater_Town_EventScript_CutHM_Item::
	giveitem ITEM_KATANA
	setflag FLAG_UNUSED_0x022
	removeobject 2
	playfanfare MUS_OBTAIN_ITEM
	msgbox Prater_Town_EventScript_CutHM_Item_Text_0
	waitmessage
	closemessage
	releaseall
	return


PraterTown_EventScript_CutGuy_Text_0:
	.string "Rami: Hey {PLAYER}!$"

PraterTown_EventScript_CutGuy_Text_1:
	.string "Rami: Oh yeah, I forgot this!$"

PraterTown_EventScript_CutGuy_Text_2:
	.string "Cuts you across your back from behind!$"

PraterTown_EventScript_CutGuy_Text_3:
	.string "Rami: Do not wake me up again!$"

Prater_Town_EventScript_CutHM_Item_Text_0:
	.string "You receive Rami's Katana$"
