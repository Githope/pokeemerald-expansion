IndoorDonauIslands_Gym_MapScripts::
	.byte 0


IndoorDonauIslands_Gym_EventScript_KecleonPuzzle::
	lockall
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle_Text_0
	waitmessage
	closemessage
	applymovement 16, Kecleon_Runs_Into_Gym
	waitmovement 16
	setflag FLAG_UNUSED_0x029
	setflag FLAG_UNUSED_0x02B
	setflag FLAG_UNUSED_0x02C
	setflag FLAG_UNUSED_0x02D
	removeobject 16
	removeobject 10
	removeobject 12
	removeobject 13
	setvar VAR_UNUSED_0x40A1, 1
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1::
	lockall
	faceplayer
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_0
	waitmessage
	closemessage
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_1
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x02A
	removeobject 11
	clearflag FLAG_UNUSED_0x02C
	addobject 10
	fadescreen FADE_FROM_BLACK
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_2
	waitmessage
	closemessage
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_KecleonPuzzle2::
	lockall
	faceplayer
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle2_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x02C
	removeobject 10
	clearflag FLAG_UNUSED_0x02B
	addobject 12
	fadescreen FADE_FROM_BLACK
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_2
	waitmessage
	closemessage
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_KecleonPuzzle3::
	lockall
	faceplayer
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle3_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x02B
	removeobject 12
	clearflag FLAG_UNUSED_0x02D
	addobject 13
	fadescreen FADE_FROM_BLACK
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_2
	waitmessage
	closemessage
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4::
	lockall
	faceplayer
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_0
	waitmessage
	closemessage
	setvar VAR_UNUSED_0x40A1, 2
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_1
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, IndoorDonauIslands_Gym_PlayerDodgesKecleon
	applymovement 13, IndoorDonauIslands_Gym_KecleonCharges
	waitmovement 13
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_2
	waitmessage
	closemessage
	msgbox IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_3
	waitmessage
	closemessage
	applymovement 13, IndoorDonauIslands_Gym_KecleonLeaves
	waitmovement 13
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x02D
	removeobject 13
	fadescreen FADE_FROM_BLACK
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_GymGuide::
	lockall
	faceplayer
	msgbox IndoorDonauIslands_Gym_EventScript_GymGuide_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy::
	goto_if_set FLAG_UNUSED_0x02D, IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy_1
	lockall
	faceplayer
	msgbox IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy_Text_1
	waitmessage
	closemessage
	releaseall
	return

IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy_1:
	msgbox IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorDonauIslands_Gym_EventScript_GoFindKecleon::
	lockall
	msgbox IndoorDonauIslands_Gym_EventScript_GoFindKecleon_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Go_Find_Kecleon
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	return


Kecleon_Runs_Into_Gym:
	face_player
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Go_Find_Kecleon:
	walk_down
	walk_down
	step_end

IndoorDonauIslands_Gym_PlayerDodgesKecleon:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_right
	step_end

IndoorDonauIslands_Gym_KecleonCharges:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_fast_left
	walk_fast_left
	walk_up
	walk_up
	walk_up
	face_left
	step_end

IndoorDonauIslands_Gym_KecleonLeaves:
	face_down
	walk_right
	walk_right
	step_end

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle_Text_0:
	.string "Keeeeeeeeeeek! Leooooooon!$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_0:
	.string "Keeeeeeeeeeek!$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_1:
	.string "The Kecleon appears to hold something\n"
	.string "shiny in its hands!$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle1_Text_2:
	.string "The Kecleon ran to another hiding spot.$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle2_Text_0:
	.string "Kek! Keeeek, Kek, Kek...$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle3_Text_0:
	.string "Eeeeeeek. Kek-ek.$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_0:
	.string "Kek... Kek... Keeeeeeeeek!$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_1:
	.string "The Kecleon looks like it's going to\n"
	.string "charge at you!$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_2:
	.string "Kek.$"

IndoorDonauIslands_Gym_EventScript_KecleonPuzzle4_Text_3:
	.string "The Kecleon hands over the shiny Gym\n"
	.string "Badge.$"

IndoorDonauIslands_Gym_EventScript_GymGuide_Text_0:
	.string "Hey, you must be {PLAYER}, the other\n"
	.string "Gym Guides told me so much about you\l"
	.string "already. The Gym leader of Donau\l"
	.string "Islands really loves nature and the\l"
	.string "well-being of all living things is\l"
	.string "important to him, even BUGS. You might\l"
	.string "have met him before. If you can find\l"
	.string "him, he specializes in Bug Pokémon and\l"
	.string "his Ace is level 28. Good Luck!$"

IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy_Text_0:
	.string "Those pesky Kecleon like causing\n"
	.string "trouble and then camouflaging in the\l"
	.string "tall grass here. For them it's just a\l"
	.string "game. Without your help I'd still be\l"
	.string "looking for the badges. Thanks,\l"
	.string "{PLAYER}!$"

IndoorDonauIslands_Gym_EventScript_GoFindKecleonGuy_Text_1:
	.string "Aww, crap. That damn Kecleon stole our\n"
	.string "Gym badges again. As long as they are\l"
	.string "missing no one can challenge our gym\l"
	.string "leader.$"

IndoorDonauIslands_Gym_EventScript_GoFindKecleon_Text_0:
	.string "Without badges there is no battle. Go\n"
	.string "find that Kecleon, it stole the Gym\l"
	.string "badges!$"
