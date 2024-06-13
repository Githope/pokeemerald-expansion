Schwechport_MapScripts::
	.byte 0


Schwechport_EventScript_WelcomeSign::
	lockall
	msgbox Schwechport_EventScript_WelcomeSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_FlyBarSign::
	lockall
	msgbox Schwechport_EventScript_FlyBarSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_GymSign::
	lockall
	msgbox Schwechport_EventScript_GymSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_GymSign2::
	lockall
	msgbox Schwechport_EventScript_GymSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_CasinoSign::
	lockall
	msgbox Schwechport_EventScript_CasinoSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_HerbShopSign::
	lockall
	msgbox Schwechport_EventScript_HerbShopSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_OldGuy::
	lockall
	faceplayer
	msgbox Schwechport_EventScript_OldGuy_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_Worker1::
	lockall
	faceplayer
	msgbox Schwechport_EventScript_Worker1_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_FancyGuy::
	lockall
	faceplayer
	msgbox Schwechport_EventScript_FancyGuy_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_Worker2::
	lockall
	msgbox Schwechport_EventScript_Worker2_Text_0
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_Worker3::
	lockall
	msgbox Schwechport_EventScript_Worker3_Text_0
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_Worker3_Text_1
	waitmessage
	closemessage
	releaseall
	return


Schwechport_EventScript_PowerPlantGuysInc::
	lockall
	playse MUS_AQUA_MAGMA_HIDEOUT
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_0
	waitmessage
	closemessage
	applymovement 12, Schwechport_PowerPlantGuysEnter
	applymovement 13, Schwechport_PowerPlantGuysEnter2
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 4
	waitmovement 13
	playse SE_SLIDING_DOOR
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	addobject 14
	applymovement 14, Schwechport_LukasEnter
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_1
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_2
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_3
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_4
	waitmessage
	closemessage
	applymovement 12, Schwechport_PowerPlantGuysLeave
	applymovement 13, Schwechport_PowerPlantGuysLeave2
	applymovement 14, Schwechport_LukasLeave
	waitmovement 14
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	removeobject 13
	removeobject 12
	removeobject 14
	playse MUS_SLATEPORT
	releaseall
	return


Schwechport_EventScript_PowerPlantGuysInc2::
	lockall
	playse MUS_AQUA_MAGMA_HIDEOUT
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_0
	waitmessage
	closemessage
	applymovement 12, Schwechport_PowerPlantGuysEnter
	applymovement 13, Schwechport_PowerPlantGuysEnter2
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 4
	waitmovement 13
	playse SE_SLIDING_DOOR
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	addobject 14
	applymovement 14, Schwechport_LukasEnter
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_1
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_2
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_3
	waitmessage
	closemessage
	msgbox Schwechport_EventScript_PowerPlantGuysInc_Text_4
	waitmessage
	closemessage
	applymovement 12, Schwechport_PowerPlantGuysLeave
	applymovement 13, Schwechport_PowerPlantGuysLeave2
	applymovement 14, Schwechport_LukasLeave
	waitmovement 14
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	removeobject 13
	removeobject 12
	removeobject 14
	playse MUS_SLATEPORT
	releaseall
	return


Schwechport_PowerPlantGuysEnter:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	step_end

Schwechport_PowerPlantGuysLeave:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Schwechport_PowerPlantGuysEnter2:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

Schwechport_PowerPlantGuysLeave2:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Schwechport_LukasEnter:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Schwechport_LukasEnter2:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Schwechport_LukasLeave:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Schwechport_EventScript_WelcomeSign_Text_0:
	.string "Welcome to Schwechport. The windy city.$"

Schwechport_EventScript_FlyBarSign_Text_0:
	.string "The Little Black Box. Pilot Bar.$"

Schwechport_EventScript_GymSign_Text_0:
	.string "Schwechport Gym. Type: Electric, Ace:\n"
	.string "Level 25$"

Schwechport_EventScript_CasinoSign_Text_0:
	.string "Monty Casino. Out here everything is\n"
	.string "legal.$"

Schwechport_EventScript_HerbShopSign_Text_0:
	.string "Stoner's Pot Palace. Freshest herbs and\n"
	.string "spices in Schwechport!$"

Schwechport_EventScript_OldGuy_Text_0:
	.string "Yo, If you ever wanna take a break from\n"
	.string "your travels you can hang out here in\l"
	.string "The Little Black Box. Pilots and\l"
	.string "Commuters from the big cities meet up\l"
	.string "here to relax and battle their Pokémon.$"

Schwechport_EventScript_Worker1_Text_0:
	.string "Most trade goods come into this\n"
	.string "country through this airport.$"

Schwechport_EventScript_FancyGuy_Text_0:
	.string "I love looking at the planes coming in.\n"
	.string "Always something interesting every\l"
	.string "day! Yesterday I even saw the famous\l"
	.string "Spruce Moose land here.$"

Schwechport_EventScript_Worker2_Text_0:
	.string "Way back when I used to work for Crazy\n"
	.string "Clown Airlines... Never. Again.$"

Schwechport_EventScript_Worker3_Text_0:
	.string "I got a feeling some weird stuff is\n"
	.string "happening at the power plant. All the\l"
	.string "Pokémon in the area seem to feel it\l"
	.string "too.$"

Schwechport_EventScript_Worker3_Text_1:
	.string "Man I am not getting paid enough to\n"
	.string "deal with this.$"

Schwechport_EventScript_PowerPlantGuysInc_Text_0:
	.string "Yo, Boss! Another one broke down!$"

Schwechport_EventScript_PowerPlantGuysInc_Text_1:
	.string "Lukas: What is it this time?$"

Schwechport_EventScript_PowerPlantGuysInc_Text_2:
	.string "Sir, Another Truck broke down near the\n"
	.string "power plant.$"

Schwechport_EventScript_PowerPlantGuysInc_Text_3:
	.string "Lukas: This is bad... someone has to go\n"
	.string "check it out. You, {PLAYER}! Can you\l"
	.string "go to the power plant? After what I\l"
	.string "have seen in our Gym Battle you seem\l"
	.string "like just the right person for a job\l"
	.string "like this. I will make sure our town grid\l"
	.string "won't shut down. Meet me at the Little\l"
	.string "Black Box once you know more. I'm\l"
	.string "counting on ya! Good Luck and see you\l"
	.string "soon. And you two. Stop standing\l"
	.string "around we got work to do!$"

Schwechport_EventScript_PowerPlantGuysInc_Text_4:
	.string "Yes, Sir!$"
