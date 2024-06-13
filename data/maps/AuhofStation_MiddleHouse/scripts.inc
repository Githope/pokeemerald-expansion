AuhofStation_MiddleHouse_MapScripts::
	.byte 0


EventScript_MiddleHouse_Girl::
	lockall
	faceplayer
	msgbox EventScript_MiddleHouse_Girl_Text_0
	waitmessage
	closemessage
	releaseall
	return


EventScript_MiddleHouse_Girl_Text_0:
	.string "Oh... My neighbours house is so scary. I\n"
	.string "tried to go over there once, but I got\l"
	.string "spooked by the shadow of a huge Rat! I\l"
	.string "even dropped my new Pokéblock Case.$"
