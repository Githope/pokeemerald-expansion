FeueritenTown_MapScripts::
	.byte 0


FeueritenTown_EventScript_BlockedCave::
	lockall
	msgbox FeueritenTown_EventScript_BlockedCave_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_Wanderer::
	lockall
	faceplayer
	msgbox FeueritenTown_EventScript_Wanderer_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_Wanderer2::
	lockall
	compare VAR_TEMP_7, 1
	goto_if_eq FeueritenTown_EventScript_Wanderer2_1
	faceplayer
	msgbox FeueritenTown_EventScript_Wanderer2_Text_1
	waitmessage
	closemessage
	giveitem ITEM_LAVA_COOKIE
	msgbox FeueritenTown_EventScript_Wanderer2_Text_2
	waitmessage
	closemessage
	setvar VAR_TEMP_7, 1
	releaseall
	return

FeueritenTown_EventScript_Wanderer2_1:
	faceplayer
	msgbox FeueritenTown_EventScript_Wanderer2_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_Biker1::
	lockall
	faceplayer
	msgbox FeueritenTown_EventScript_Biker1_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_Biker2::
	lockall
	faceplayer
	msgbox FeueritenTown_EventScript_Biker2_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_Kid::
	lockall
	faceplayer
	msgbox FeueritenTown_EventScript_Kid_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_OldLady::
	lockall
	faceplayer
	msgbox FeueritenTown_EventScript_OldLady_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_Fisherman::
	lockall
	faceplayer
	msgbox FeueritenTown_EventScript_Fisherman_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_GymSign::
	lockall
	msgbox FeueritenTown_EventScript_GymSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_WelcomeSign::
	lockall
	msgbox FeueritenTown_EventScript_WelcomeSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_BikePathSign::
	lockall
	msgbox FeueritenTown_EventScript_BikePathSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_MeteorCaveSign::
	lockall
	msgbox FeueritenTown_EventScript_MeteorCaveSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


FeueritenTown_EventScript_BlockedCave_Text_0:
	.string "This Cave is blocked until Dave comes\n"
	.string "back from his bath.$"

FeueritenTown_EventScript_Wanderer_Text_0:
	.string "Phew. After hiking over the Fiery\n"
	.string "Mountain I am glad that I can finally\l"
	.string "rest in this little village. If only it\l"
	.string "wasn't so hot here...$"

FeueritenTown_EventScript_Wanderer2_Text_0:
	.string "I think the air up here even improves\n"
	.string "the taste of the cookies. I might even\l"
	.string "have another cookie for you if we meet\l"
	.string "again.$"

FeueritenTown_EventScript_Wanderer2_Text_1:
	.string "The air up here is much nicer than down\n"
	.string "in the village. I like having a picnic\l"
	.string "here from time to time. You should try\l"
	.string "it too. Here have a cookie.$"

FeueritenTown_EventScript_Wanderer2_Text_2:
	.string "You recieve one Lava Cookie.$"

FeueritenTown_EventScript_Biker1_Text_0:
	.string "Beat it kid! We ain't moving.$"

FeueritenTown_EventScript_Biker2_Text_0:
	.string "Yeah this biking road is for team Turbo\n"
	.string "members only!$"

FeueritenTown_EventScript_Kid_Text_0:
	.string "It's so hot here, I can't even enjoy the\n"
	.string "water.$"

FeueritenTown_EventScript_OldLady_Text_0:
	.string "Aaaaaah. My old bones needed this.$"

FeueritenTown_EventScript_Fisherman_Text_0:
	.string "Man, I have been fishing here for 2\n"
	.string "weeks now and still have nothing to\l"
	.string "show for it. But that's ok. For us\l"
	.string "Fishermen it is all about patience.$"

FeueritenTown_EventScript_GymSign_Text_0:
	.string "Feueriten Gym.$"

FeueritenTown_EventScript_WelcomeSign_Text_0:
	.string "Feueriten. So hot it stabs you like a\n"
	.string "knife through your chest.$"

FeueritenTown_EventScript_BikePathSign_Text_0:
	.string "Underground Biking Path.$"

FeueritenTown_EventScript_MeteorCaveSign_Text_0:
	.string "Meteor Cave. Danger: Meteor showers\n"
	.string "occur heavily over this area.$"
