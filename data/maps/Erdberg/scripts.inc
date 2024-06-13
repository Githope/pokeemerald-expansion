Erdberg_MapScripts::
	.byte 0


Erdberg_Eventscript_ClashTTandS::
	playse MUS_VS_AQUA_MAGMA
	msgbox Erdberg_Eventscript_ClashTTandS_Text_0
	waitmessage
	msgbox Erdberg_Eventscript_ClashTTandS_Text_1
	waitmessage
	closemessage
	msgbox Erdberg_Eventscript_ClashTTandS_Text_2
	waitmessage
	closemessage
	applymovement 5, Erdberg_BikersLeave
	applymovement 6, Erdberg_BikersLeave
	applymovement 7, Erdberg_BikersLeave
	applymovement 1, Erdberg_SachidsLeave
	applymovement 2, Erdberg_SachidsLeave
	applymovement 4, Erdberg_SachidsLeave
	waitmovement 0
	setflag FLAG_UNUSED_0x021
	setvar VAR_ERDBERG_STATE, 1
	removeobject 5
	removeobject 4
	removeobject 2
	removeobject 1
	removeobject 7
	removeobject 6
	playbgm MUS_MT_CHIMNEY, TRUE
	releaseall
	return


Erdberg_BikersLeave:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Erdberg_SachidsLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

Erdberg_EventScript_YoungsterBlock::
	lockall
	faceplayer
	msgbox Erdberg_EventScript_YoungsterBlock_Text_0
	waitmessage
	closemessage
	releaseall
	return


Erdberg_EventScript_Chef::
	lockall
	faceplayer
	msgbox Erdberg_EventScript_Chef_Text_0
	waitmessage
	closemessage
	releaseall
	return


Erdberg_EventScript_KitchenSign::
	lockall
	msgbox Erdberg_EventScript_KitchenSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Erdberg_EventScript_Kid::
	lockall
	faceplayer
	msgbox Erdberg_EventScript_Kid_Text_0
	waitmessage
	closemessage
	releaseall
	return


Erdberg_EventScript_WelcomeSign::
	lockall
	msgbox Erdberg_EventScript_WelcomeSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


Erdberg_Eventscript_ClashTTandS_Text_0:
	.string "???:This Cave is off-limits to you Bikers!$"

Erdberg_Eventscript_ClashTTandS_Text_1:
	.string "That's ok, we will find a quicker way\n"
	.string "with our machines anyway... Let's Ride!$"

Erdberg_Eventscript_ClashTTandS_Text_2:
	.string "???: Just stay out of our way.$"

Erdberg_EventScript_YoungsterBlock_Text_0:
	.string "My boss told me I can't let anyone in\n"
	.string "here until we broke through the caves\l"
	.string "inner wall. That includes nosey people\l"
	.string "like you.$"

Erdberg_EventScript_Chef_Text_0:
	.string "I keep telling them. We need more\n"
	.string "breaks. It's not like the guy can eat\l"
	.string "without a break either.$"

Erdberg_EventScript_KitchenSign_Text_0:
	.string "Erdberg Food Services. We cook, you\n"
	.string "eat!$"

Erdberg_EventScript_Kid_Text_0:
	.string "I heard an earthshattering roar coming\n"
	.string "from the Cave to the south. I would\l"
	.string "check it out but it is too dark in there\l"
	.string "for me and I get scared quickly.$"

Erdberg_EventScript_WelcomeSign_Text_0:
	.string "Welcome to Erdberg. A quiet town\n"
	.string "amongst the grand canyons.$"
