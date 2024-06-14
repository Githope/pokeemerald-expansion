IndoorCubeTopia_ContestHall_MapScripts::
	.byte 0


IndoorCubeTopia_EventScripts_SpeedGoggles::
	lock
	faceplayer
	msgbox IndoorCubeTopia_EventScripts_SpeedGoggles_Text_0
	waitmessage
	closemessage
	giveitem ITEM_GO_GOGGLES
	msgbox IndoorCubeTopia_EventScripts_SpeedGoggles_Text_1
	waitmessage
	closemessage
	applymovement 1, ViktorToStage
	waitmovement 0
	releaseall
	setvar VAR_CUBETOPIA_TOWN_STATE, 1
	return


ViktorToStage:
	face_player
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_down
	step_end

IndoorCubeTopia_EventScripts_CubeFinals::
	lockall
	msgbox IndoorCubeTopia_EventScripts_CubeFinals_Text_0
	waitmessage
	closemessage
	msgbox IndoorCubeTopia_EventScripts_CubeFinals_Text_1
	msgbox IndoorCubeTopia_EventScripts_CubeFinals_Text_2
	waitmessage
	msgbox IndoorCubeTopia_EventScripts_CubeFinals_Text_3
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x024
	setvar VAR_CUBETOPIA_TOWN_STATE, 2
	removeobject 1
	fadescreen FADE_FROM_BLACK
	releaseall
	return


IndoorCubeTopia_EventScripts_SpeedGoggles_Text_0:
	.string "???: Oh hey I haven't seen you around\n"
	.string "here. Did you hear about the speed\l"
	.string "cubing competition and decide to chech\l"
	.string "it out? Anyway you will need these\l"
	.string "goggles to keep up with the speed of\l"
	.string "our cubers here!$"

IndoorCubeTopia_EventScripts_SpeedGoggles_Text_1:
	.string "Ok I gotta go on stage now to introduce\n"
	.string "our finalists.$"

IndoorCubeTopia_EventScripts_CubeFinals_Text_0:
	.string "???: Welcome everyone to the Finals of\n"
	.string "the Cubetopia Speed Cubing\l"
	.string "Championship! My Name is Viktor the Gym\l"
	.string "Leader of Cubetopia!$"

IndoorCubeTopia_EventScripts_CubeFinals_Text_1:
	.string "Viktor: I wish both finalists the best\n"
	.string "of luck and maybe they will even break\l"
	.string "my national record! Let's begin! ... ... ...\l"
	.string "This is looking like an interesting\l"
	.string "solving technique here!$"

IndoorCubeTopia_EventScripts_CubeFinals_Text_2:
	.string "Ahh and we can already see the solve\n"
	.string "coming to an end! And that's it. Let's\l"
	.string "check the time. ... ... ... ... ... ... And it's a\l"
	.string "7.03! Wow what a quick time. Well those\l"
	.string "were the finals for this event. I hope\l"
	.string "you all enjoyed it as much as I did$"

IndoorCubeTopia_EventScripts_CubeFinals_Text_3:
	.string "Thank you all for coming and I hope to\n"
	.string "see you again next time! If you are\l"
	.string "interested in more speed-cubing stuff\l"
	.string "you can find me in my gym! Have a good\l"
	.string "afternoon and enjoy Cubetopia!$"
