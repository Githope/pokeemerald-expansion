AuhofStation_RatHouse_MapScripts::
	.byte 0


RatHouse_EventScript_PokeblockCase::
	giveitem ITEM_POKEBLOCK_CASE
	setflag FLAG_RECEIVED_POKEBLOCK_CASE
	removeobject 1
	msgbox RatHouse_EventScript_PokeblockCase_Text_0
	releaseall
	return


RatHouse_EventScript_PokeblockCase_Text_0:
	.string "You put the Pokeblock Case away.$"
