IndoorFeueriten_Gym_MapScripts::
	.byte 0


IndoorFeueriten_EventScript_Gruntie::
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, Gruntie_Intro, Gruntie_Outro
	msgbox PostBattle_Gruntie, MSGBOX_AUTOCLOSE
	waitmessage
	end


Gruntie_Intro::
	.string "You will never win$"

Gruntie_Outro::
	.string "Doesn't count$"

PostBattle_Gruntie::
	.string "You have no chance against Dave...$"
