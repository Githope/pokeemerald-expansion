IndoorRoute1116_FireStoneHouse_MapScripts::
	.byte 0


IndoorRoute1116_FireStoneHouse_EventScripts_FireStoneGirl::
	msgbox IndoorRoute1116_FireStoneHouse_EventScripts_FireStoneGirl_Text_0
	waitmessage
	msgbox IndoorRoute1116_FireStoneHouse_EventScripts_FireStoneGirl_Text_1
	waitmessage
	closemessage
	giveitem ITEM_FIRE_STONE
	releaseall
	return


IndoorRoute1116_FireStoneHouse_EventScripts_FireStoneGirl_Text_0:
	.string "Oooooh. I found this really hot stone!$"

IndoorRoute1116_FireStoneHouse_EventScripts_FireStoneGirl_Text_1:
	.string "Here you take it! It is too hot for me.$"
