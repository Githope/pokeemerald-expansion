SafariZone_Lab_MapScripts::
	.byte 0


SafariZone_Lab_EventScript_ProfExpShare::
	lockall
	msgbox SafariZone_Lab_EventScript_ProfExpShare_Text_0
	waitmessage
	closemessage
	msgbox SafariZone_Lab_EventScript_ProfExpShare_Text_1
	waitmessage
	closemessage
	giveitem ITEM_EXP_SHARE
	msgbox SafariZone_Lab_EventScript_ProfExpShare_Text_2
	waitmessage
	closemessage
	msgbox SafariZone_Lab_EventScript_ProfExpShare_Text_3
	waitmessage
	closemessage
	releaseall
	return


SafariZone_Lab_EventScript_ProfExpShare_Text_0:
	.string "We are always working on new\n"
	.string "cutting-edge Pokémon Technologies$"

SafariZone_Lab_EventScript_ProfExpShare_Text_1:
	.string "Here, try this.$"

SafariZone_Lab_EventScript_ProfExpShare_Text_2:
	.string "You received an EXP-Share.$"

SafariZone_Lab_EventScript_ProfExpShare_Text_3:
	.string "The EXP-Share helps your Pokémon to\n"
	.string "grow stronger together by sharing\l"
	.string "their battle EXP.$"
