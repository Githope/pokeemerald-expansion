IndoorPraterTown_Gym_MapScripts::
	.byte 0


IndoorPraterTown_Gym_LeaderRami::
	compare VAR_PRATER_TOWN_STATE, 0
	goto_if_eq IndoorPraterTown_Gym_LeaderRami_1
	msgbox IndoorPraterTown_Gym_LeaderRami_Text_5
	closemessage
	releaseall
	return

IndoorPraterTown_Gym_LeaderRami_1:
	message IndoorPraterTown_Gym_LeaderRami_Text_0
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_NORMAN_1, IndoorPraterTown_Gym_LeaderRami_Defeat
	msgbox IndoorPraterTown_Gym_LeaderRami_Text_1
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox IndoorPraterTown_Gym_LeaderRami_Text_2
	waitmessage
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setflag FLAG_BADGE05_GET
	giveitem ITEM_TM19
	setflag FLAG_RECEIVED_TM42
	call LavaridgeTown_Gym_SetGymTrainers
	msgbox IndoorPraterTown_Gym_LeaderRami_Text_3
	waitmessage
	msgbox IndoorPraterTown_Gym_LeaderRami_Text_4
	closemessage
	setvar VAR_PRATER_TOWN_STATE, 1
	end


IndoorPraterTownGym_EvenstScript_GymSign::
	lockall
	msgbox IndoorPraterTownGym_EvenstScript_GymSign_Text_0
	closemessage
	releaseall
	return


IndoorPraterTown_Gym_LeaderRami_Text_0:
	.string "RAMI: Hm … So, what's up? What do you\n"
	.string "want? Oh you want to challenge me?\l"
	.string "Fine, we will have a POKéMON\l"
	.string "battle.{PLAYER} … I am a bit high\l"
	.string "right now. So... Wait who are you again?\l"
	.string "Right! A battle! A battle! {PLAYER},\l"
	.string "you'd better give it your best shot!$"

IndoorPraterTown_Gym_LeaderRami_Text_1:
	.string "{PLAYER} received the GRASS BADGE\n"
	.string "from RAMI!$"

IndoorPraterTown_Gym_LeaderRami_Text_2:
	.string ".RAMI: With that BADGE, the DEFENSE of\n"
	.string "all your POKéMON will increase. POKéMON\l"
	.string "that know the HM move SURF will be able\l"
	.string "to travel over water. This is my gift to\l"
	.string "you. {PLAYER}, I'm sure you can use it\l"
	.string "correctly.$"

IndoorPraterTown_Gym_LeaderRami_Text_3:
	.string "RAMI: TM19 contains GIGA Drain. It\n"
	.string "sucks or something. Did I give you your\l"
	.string "badge already? .... .... .... Rami is asleep.$"

IndoorPraterTown_Gym_LeaderRami_Text_4:
	.string "Rami: ..... .... .... hehe GIGA … draaain..Rami\n"
	.string "is still asleep....It's odd…$"

IndoorPraterTown_Gym_LeaderRami_Text_5:
	.string "...... ...... ......$"

IndoorPraterTownGym_EvenstScript_GymSign_Text_0:
	.string "Prater Town Gym. Type: Grass, Ace\n"
	.string "Level:31$"

IndoorPraterTown_Gym_LeaderRami_Defeat::
	.string "Hold on... Which type is my.. My gym?...$"
