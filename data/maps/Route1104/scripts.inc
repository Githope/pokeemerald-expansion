Route1104_MapScripts::
	.byte 0


Biker_SafariZone_EventScript::
	lockall
	msgbox Biker_SafariZone_EventScript_Text_0
	waitmessage
	releaseall
	return


Route1104_EventsScript_BugGuy::
	lockall
	msgbox Route1104_EventsScript_BugGuy_Text_0
	waitmessage
	releaseall
	return


Route1104_EventsScript_SchwechportTrucker2::
	lockall
	msgbox Route1104_EventsScript_SchwechportTrucker2_Text_0
	waitmessage
	releaseall
	return


Route1104_EventsScript_SchwechportTrucker::
	lockall
	msgbox Route1104_EventsScript_SchwechportTrucker_Text_0
	waitmessage
	releaseall
	return


Biker_SafariZone_EventScript_Text_0:
	.string "FACK OFF!$"

Route1104_EventsScript_BugGuy_Text_0:
	.string "The Bikers are trying to hurt the\n"
	.string "Orangutans in the Zoo! Someone has to\l"
	.string "help!$"

Route1104_EventsScript_SchwechportTrucker2_Text_0:
	.string "Aww, Crap! We were supposed to get this\n"
	.string "delivery from Schwechport straight to\l"
	.string "Auhof Station. The boss is gonna be\l"
	.string "angry...$"

Route1104_EventsScript_SchwechportTrucker_Text_0:
	.string "Why do we always buy those cheap\n"
	.string "trucks that break down every other\l"
	.string "week...$"
