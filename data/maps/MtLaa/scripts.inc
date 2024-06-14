MtLaa_MapScripts::
	.byte 0


MtLaa_EventScript_FirstBlizzardGrunt::
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, MtLaa_EventScript_FirstBlizzardGrunt_Intro, MtLaa_EventScript_FirstBlizzardGrunt_Defeat
	msgbox MtLaa_EventScript_FirstBlizzardGrunt_Text_0
	waitmessage
	closemessage
	return


MtLaa_EventScript_SecondBlizzardGrunt::
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, MtLaa_EventScript_SecondBlizzardGrunt_Intro, MtLaa_EventScript_SecondBlizzardGrunt_Defeat
	msgbox MtLaa_EventScript_SecondBlizzardGrunt_Text_0
	waitmessage
	closemessage
	return


MtLaa_EventScript_Trigger::
	lockall
	message MtLaa_EventScript_Trigger_Text_0
	playse SE_PIN
	waitmessage
	closemessage
	applymovement 1, MtLaaBlizzardGrunttoFireTrainer
	waitmovement 1
	message MtLaa_EventScript_Trigger_Text_1
	message MtLaa_EventScript_Trigger_Text_2
	message MtLaa_EventScript_Trigger_Text_3
	message MtLaa_EventScript_Trigger_Text_4
	waitmessage
	playse SE_PIN
	message MtLaa_EventScript_Trigger_Text_5
	message MtLaa_EventScript_Trigger_Text_6
	waitmessage
	closemessage
	applymovement 1, MtLaaBlizzardGruntLeaves
	waitmovement 1
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
	removeobject 1
	removeobject 5
	removeobject 4
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	fadescreen FADE_FROM_BLACK
	releaseall
	return


MtLaaBlizzardGrunttoFireTrainer:
	face_up
	face_down
	walk_right
	step_end

MtLaaBlizzardGruntLeaves:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MtLaa_EventScript_FireTrainer::
	lockall
	msgbox MtLaa_EventScript_FireTrainer_Text_0
	waitmessage
	closemessage
	releaseall
	return


MtLaa_EventScript_FirstBlizzardGrunt_Text_0:
	.string "You still shouldn't be here...$"

MtLaa_EventScript_SecondBlizzardGrunt_Text_0:
	.string "This heat is too much for me!$"

MtLaa_EventScript_Trigger_Text_0:
	.string "HEY YOU! What are you doing up here?$"

MtLaa_EventScript_Trigger_Text_1:
	.string "Who are you?$"

MtLaa_EventScript_Trigger_Text_2:
	.string "I am a member of Team Blizzard!$"

MtLaa_EventScript_Trigger_Text_3:
	.string "And why I'm here is none of $"

MtLaa_EventScript_Trigger_Text_4:
	.string "your business, sweetie!$"

MtLaa_EventScript_Trigger_Text_5:
	.string "This place is getting too crowded.$"

MtLaa_EventScript_Trigger_Text_6:
	.string "We'll come back later...$"

MtLaa_EventScript_FireTrainer_Text_0:
	.string "This does not look good. What does Team\n"
	.string "Blizzard want from the Volcano.\l"
	.string "Normally they really hate the heat...\l"
	.string "and what is all this equipment. At least\l"
	.string "they are gone for now.$"

MtLaa_EventScript_FirstBlizzardGrunt_Intro::
	.string "Hey you are not supposed to be here!\n"
	.string "I'll make you go away then!$"

MtLaa_EventScript_FirstBlizzardGrunt_Defeat::
	.string "Ooof... I need to tell the others.$"

MtLaa_EventScript_SecondBlizzardGrunt_Intro::
	.string "Why wasn't someone guarding the entrance?$"

MtLaa_EventScript_SecondBlizzardGrunt_Defeat::
	.string "That was a chilly defeat!$"
