IndoorSchwchPort_FlyBar_MapScripts::
	.byte 0


IndoorSchwchPort_FlyBar_EventScript_Bartender::
	lockall
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_0
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_1
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_2
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_3
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_4
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_5
	waitmessage
	closemessage
	releaseall
	return


IndoorSchwchPort_FlyBar_EventScript_Bartender2::
	lockall
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_0
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_1
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_2
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_3
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_4
	waitmessage
	closemessage
	releaseall
	return


IndoorSchwchPort_FlyBar_EventScript_Bartender3::
	lockall
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender3_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorSchwchPort_FlyBar_EventScript_Lukas::
	lockall
	goto_if_set FLAG_RECEIVED_HM02, IndoorSchwchPort_FlyBar_EventScript_Lukas_1
	msgbox IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_1
	waitmessage
	closemessage
	msgbox IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_2
	waitmessage
	closemessage
	giveitem ITEM_HM02_FLY
	setflag FLAG_RECEIVED_HM02
	msgbox IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_3
	waitmessage
	closemessage
	releaseall
	return

IndoorSchwchPort_FlyBar_EventScript_Lukas_1:
	msgbox IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorSchwchPort_FlyBar_EventScript_Bartender4::
	lockall
	faceplayer
	msgbox IndoorSchwchPort_FlyBar_EventScript_Bartender3_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorSchwchPort_FlyBar_OldGuy::
	lockall
	faceplayer
	goto_if_set FLAG_RECEIVED_TM40, IndoorSchwchPort_FlyBar_OldGuy_1
	goto_if_set FLAG_UNUSED_0x028, IndoorSchwchPort_FlyBar_OldGuy_5
	msgbox IndoorSchwchPort_FlyBar_OldGuy_Text_3
IndoorSchwchPort_FlyBar_OldGuy_4:
	waitmessage
	closemessage
	releaseall
	return

IndoorSchwchPort_FlyBar_OldGuy_1:
	msgbox IndoorSchwchPort_FlyBar_OldGuy_Text_0
	waitmessage
	closemessage
	releaseall
	return

IndoorSchwchPort_FlyBar_OldGuy_5:
	msgbox IndoorSchwchPort_FlyBar_OldGuy_Text_1
	waitmessage
	closemessage
	giveitem ITEM_TM40
	setflag FLAG_RECEIVED_TM40
	msgbox IndoorSchwchPort_FlyBar_OldGuy_Text_2
	goto IndoorSchwchPort_FlyBar_OldGuy_4


IndoorSchwchPort_FlyBar_CheckBarBattles::
	checktrainerflag TRAINER_KARA
	goto_if 0, IndoorSchwchPort_FlyBar_CheckBarBattles_1
	checktrainerflag TRAINER_RICHARD
	goto_if 0, IndoorSchwchPort_FlyBar_CheckBarBattles_4
	checktrainerflag TRAINER_HERMAN
	goto_if 0, IndoorSchwchPort_FlyBar_CheckBarBattles_7
	checktrainerflag TRAINER_SUSIE
	goto_if 0, IndoorSchwchPort_FlyBar_CheckBarBattles_10
	setflag FLAG_UNUSED_0x028
	releaseall
	return

IndoorSchwchPort_FlyBar_CheckBarBattles_1:
	releaseall
	return

IndoorSchwchPort_FlyBar_CheckBarBattles_4:
	releaseall
	return

IndoorSchwchPort_FlyBar_CheckBarBattles_7:
	releaseall
	return

IndoorSchwchPort_FlyBar_CheckBarBattles_10:
	releaseall
	return


IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_0:
	.string "Sailor: I'd like a beer please.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_1:
	.string "Bartender: Sorry you gotta be a pilot\n"
	.string "to drink in here.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_2:
	.string "Sailor: Uhhh... but I am a pilot.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_3:
	.string "Bartender: Where is you uniform?$"

IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_4:
	.string "Sailor: Ummm... I stowed it safely in the\n"
	.string "overhead compartment.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender_Text_5:
	.string "Bartender: Well. You talk the talk.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_0:
	.string "Bartender: You're not just\n"
	.string "impersonating a pilot so you can drink\l"
	.string "here are you?$"

IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_1:
	.string "Sailor: Yeah... that's exactly why I'm\n"
	.string "here.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_2:
	.string "Bartender: Hahaha. You Fly Boys. You\n"
	.string "crack me up.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_3:
	.string "Sailor: But I keep telling you I am not a\n"
	.string "pilot.$"

IndoorSchwchPort_FlyBar_EventScript_Bartender2_Text_4:
	.string "Bartender: And I keep telling you. You\n"
	.string "Fly Boys crack me up!$"

IndoorSchwchPort_FlyBar_EventScript_Bartender3_Text_0:
	.string "Yo. I'm on a smoke break don't disturb\n"
	.string "me. Kitchen staff usually takes a\l"
	.string "break until all the fighting is done\l"
	.string "here. After everyone's done fighting\l"
	.string "I'll go back to the kitchen and then\l"
	.string "I'll start making some food.$"

IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_0:
	.string "Never liked this place anyway.$"

IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_1:
	.string "What! Team Blizzard tried to cause a\n"
	.string "overload the entire power grid? What\l"
	.string "would be their reasoning for this\l"
	.string "madness? Good thing you were there to\l"
	.string "intervene!$"

IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_2:
	.string "Thank you, {PLAYER}! You really did\n"
	.string "something truly heroic today. And you\l"
	.string "deserve this.$"

IndoorSchwchPort_FlyBar_EventScript_Lukas_Text_3:
	.string "This HM contains the move Fly! Take it\n"
	.string "and make your Pokémon soar through\l"
	.string "the sky like the planes here in\l"
	.string "Schwechport. And you know what. I\l"
	.string "think this whole thing inspired me to\l"
	.string "quit my job at the Gym and become an\l"
	.string "artist. Never liked this place anyway.$"

IndoorSchwchPort_FlyBar_OldGuy_Text_0:
	.string "Hey, Ace! What a spectacular round of\n"
	.string "battles that was. Now for some food.$"

IndoorSchwchPort_FlyBar_OldGuy_Text_1:
	.string "Every winner of the Little Black Box\n"
	.string "Brawls is known as an Ace. And as a new\l"
	.string "Ace you should also get this.$"

IndoorSchwchPort_FlyBar_OldGuy_Text_2:
	.string "This TM contains the move Aerial Ace.\n"
	.string "You are now an honorary Pilot in this\l"
	.string "Bar and with this TM your Pokémon can\l"
	.string "also show it! After this grand show I\l"
	.string "need something to eat now.$"

IndoorSchwchPort_FlyBar_OldGuy_Text_3:
	.string "Welcome to The Little Black Box. This is\n"
	.string "a Pilot Bar where people from all over\l"
	.string "the world come by to relax and have\l"
	.string "exciting Pokémon battles. If you love\l"
	.string "to battle show the other trainers in\l"
	.string "here what you can do and maybe I'll\l"
	.string "even give you a prize.$"
