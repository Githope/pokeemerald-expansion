SafariZone_Orangerie_MapScripts::
	.byte 0


SafariZone_Orangerie_Eventscript_BikersBEGONE::
	lockall
	msgbox SafariZone_Orangerie_Eventscript_BikersBEGONE_Text_0
	waitmessage
	msgbox SafariZone_Orangerie_Eventscript_BikersBEGONE_Text_1
	waitmessage
	setflag FLAG_UNUSED_0x020
	msgbox SafariZone_Orangerie_Eventscript_BikersBEGONE_Text_2
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_PIN
	call SafariZone_Orangerie_Eventscript_BikersBEGONEClear
	fadescreen FADE_FROM_BLACK
	releaseall
	setvar VAR_UNUSED_0x40F7, 1
	return


SafariZone_Orangerie_Eventscript_Kevin::
	lockall
	msgbox SafariZone_Orangerie_Eventscript_Kevin_Text_0
	waitmessage
	closemessage
	releaseall
	return


SafariZone_Orangerie_Eventscript_Oranguru::
	lockall
	msgbox SafariZone_Orangerie_Eventscript_Oranguru_Text_0
	waitmessage
	msgbox SafariZone_Orangerie_Eventscript_Oranguru_Text_1
	waitmessage
	closemessage
	releaseall
	return


SafariZone_Orangerie_Eventscript_BikersBEGONEClear::
	removeobject 10
	removeobject 6
	removeobject 2
	removeobject 1
	return


SafariZone_Orangerie_Eventscript_BikerTalking::
	lockall
	msgbox SafariZone_Orangerie_Eventscript_BikerTalking_Text_0
	waitmessage
	closemessage
	applymovement 4, Biker_Safari_Leave
	waitmovement 4
	removeobject 4
	releaseall
	return


Biker_Safari_Leave:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SafariZone_Orangerie_Eventscript_BikersBEGONE_Text_0:
	.string "Bikers: Let's just take the ape.$"

SafariZone_Orangerie_Eventscript_BikersBEGONE_Text_1:
	.string "Kevin: You will not hurt any of the\n"
	.string "Pokémon in this Zoo. Now leave before I\l"
	.string "call the Police!$"

SafariZone_Orangerie_Eventscript_BikersBEGONE_Text_2:
	.string "???: Grrr, You win this time.$"

SafariZone_Orangerie_Eventscript_Kevin_Text_0:
	.string "Kevin: Those Bikers want to hurt\n"
	.string "innocent Pokémon. But I won't let them!$"

SafariZone_Orangerie_Eventscript_Oranguru_Text_0:
	.string "Oook ook.$"

SafariZone_Orangerie_Eventscript_Oranguru_Text_1:
	.string "The baby Oranguru seems happy.$"

SafariZone_Orangerie_Eventscript_BikerTalking_Text_0:
	.string "Grrrrr.... I hate having to deal with\n"
	.string "people like you. You will see all\l"
	.string "Pokémon will have to face their true\l"
	.string "future just as all People will. When the\l"
	.string "machines come they will spare no one.$"
