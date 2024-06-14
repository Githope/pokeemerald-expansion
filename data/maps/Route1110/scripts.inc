Route1110_MapScripts::
	.byte 0


Route1110_EventScript_WailmerPailTreeSudowoodo::
	checkitem ITEM_WAILMER_PAIL
	compare VAR_RESULT, YES
	goto_if_eq Route1110_EventScript_WailmerPailTreeSudowoodo_1
	msgbox Route1110_EventScript_WailmerPailTreeSudowoodo_Text_3
	waitmessage
	msgbox Route1110_EventScript_WailmerPailTreeSudowoodo_Text_4
	waitmessage
	closemessage
	releaseall
	return

Route1110_EventScript_WailmerPailTreeSudowoodo_1:
	lockall
	msgbox Route1110_EventScript_WailmerPailTreeSudowoodo_Text_0
	waitmessage
	msgbox Route1110_EventScript_WailmerPailTreeSudowoodo_Text_1, MSGBOX_YESNO
	waitmessage
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq Route1110_EventScript_WailmerPailTreeSudowoodo_4
	msgbox Route1110_EventScript_WailmerPailTreeSudowoodo_Text_2
	waitmessage
	closemessage
	releaseall
	return

Route1110_EventScript_WailmerPailTreeSudowoodo_4:
	waitse
	playse SE_SUDOWOODO_SHAKE
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	setwildbattle SPECIES_SUDOWOODO, 25
	dowildbattle
	removeobject 2
	setflag FLAG_DEFEATED_SUDOWOODO
	goto Common_EventScript_RemoveStaticPokemon
	releaseall
	end


Route1110_EventScript_WailmerPailTreeSudowoodo_Text_0:
	.string "This tree looks weird.$"

Route1110_EventScript_WailmerPailTreeSudowoodo_Text_1:
	.string "Do you want to Water it?$"

Route1110_EventScript_WailmerPailTreeSudowoodo_Text_2:
	.string "You do not want to disturb nature.$"

Route1110_EventScript_WailmerPailTreeSudowoodo_Text_3:
	.string "This tree looks weird...$"

Route1110_EventScript_WailmerPailTreeSudowoodo_Text_4:
	.string "Maybe if I had something to water it with...$"
