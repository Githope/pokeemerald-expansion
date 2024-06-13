Route1101_MapScripts::
	.byte 0


Route1101_EventScripts_EntranceSign::
	lockall
	msgbox Route1101_EventScripts_EntranceSign_Text_0
	releaseall
	return


Route1101_EventScripts_EntranceSign_Text_0:
	.string "Entrance to Liesingtown$"
