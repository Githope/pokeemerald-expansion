PowerPlant_MapScripts::
	.byte 0


PowerPlant_EventScripts_PlantBlockGuy::
	lockall
	checkflag FLAG_RECEIVED_TM34
	goto_if_set FLAG_RECEIVED_TM34, PowerPlant_EventScripts_PlantBlockGuy_1
	msgbox PowerPlant_EventScripts_PlantBlockGuy_Text_1
	waitmessage
	closemessage
	releaseall
	return

PowerPlant_EventScripts_PlantBlockGuy_1:
	trainerbattle_single TRAINER_CLARISSA, PlantBlockGuyIntro, PlantBlockGuyDefeated
	msgbox PowerPlant_EventScripts_PlantBlockGuy_Text_0
	waitmessage
	closemessage
	applymovement 3, PlantBlockGuyLeaves
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x023
	removeobject 3
	fadescreen FADE_FROM_BLACK
	releaseall
	return


PlantBlockGuyLeaves:
	walk_fast_up
	walk_fast_up
	step_end

PowerPlant_EventScripts_PlantBlockGuy_Text_0:
	.string "I guess you know that we are not\n"
	.string "allowed to be here... I guess I should\l"
	.string "tell the others our cover is blown.$"

PowerPlant_EventScripts_PlantBlockGuy_Text_1:
	.string "Go away kid we got the permission of\n"
	.string "Schwechports Gym Leader to be here.\l"
	.string "Now beat it!$"

PlantBlockGuyIntro::
	.string "Hey, this is a restricted area. You\n"
	.string "Cannot be here!$"

PlantBlockGuyDefeated::
	.string "Okay, I guess you figured it out...$"
