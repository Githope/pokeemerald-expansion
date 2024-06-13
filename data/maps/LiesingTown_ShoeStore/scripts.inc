LiesingTown_ShoeStore_MapScripts::
	.byte 0


IndoorLiesingTown_ShoeStore_EventScript_BackdoorSign::
	lockall
	msgbox IndoorLiesingTown_ShoeStore_EventScript_BackdoorSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorLiesingTown_ShoeStore_EventScript_CounterListSign::
	lockall
	msgbox IndoorLiesingTown_ShoeStore_EventScript_CounterListSign_Text_0
	waitmessage
	closemessage
	releaseall
	return


IndoorLiesingTown_ShoeStore_EventScript_ShoeGirl::
	lockall
	msgbox IndoorLiesingTown_ShoeStore_EventScript_ShoeGirl_Text_0
	waitmessage
	closemessage
	releaseall
	return


LiesingTown_ShoeStore_Mart_EventScript_Clerk::
	lockall
	faceplayer
	msgbox LiesingTown_ShoeStore_Mart_EventScript_Clerk_Text_0
	waitmessage
	pokemart LiesingTown_ShoeStore_Mart
	msgbox LiesingTown_ShoeStore_Mart_EventScript_Clerk_Text_1
	releaseall
	return


	.align 2
LiesingTown_ShoeStore_Mart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_REPEL
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

LiesingTown_ShoeStore_Mart_EventScript_Clerk2::
	lockall
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, LiesingTown_ShoeStore_Mart_EventScript_Clerk2_2
	msgbox LiesingTown_ShoeStore_Mart_EventScript_Clerk2_Text_1
	waitmessage
	closemessage
	giveitem ITEM_POTION
	setflag FLAG_RECEIVED_POTION_OLDALE
	msgbox LiesingTown_ShoeStore_Mart_EventScript_Clerk2_Text_2
	waitmessage
	closemessage
LiesingTown_ShoeStore_Mart_EventScript_Clerk2_1:
	waitmessage
	closemessage
	releaseall
	return

LiesingTown_ShoeStore_Mart_EventScript_Clerk2_2:
	msgbox LiesingTown_ShoeStore_Mart_EventScript_Clerk2_Text_0
	goto LiesingTown_ShoeStore_Mart_EventScript_Clerk2_1


IndoorLiesingTown_ShoeStore_EventScript_BackdoorSign_Text_0:
	.string "This looks like the backdoor leading to\n"
	.string "the garbage bins out back.$"

IndoorLiesingTown_ShoeStore_EventScript_CounterListSign_Text_0:
	.string "Just a flyer with some their new shoes\n"
	.string "on it.$"

IndoorLiesingTown_ShoeStore_EventScript_ShoeGirl_Text_0:
	.string "Wow, what they said is true. They really\n"
	.string "have the largest selection of shoes\l"
	.string "here! A dream come true.$"

LiesingTown_ShoeStore_Mart_EventScript_Clerk_Text_0:
	.string "Hello, and welcome to the Liesing Shoe\n"
	.string "Store. We also sell goods other than\l"
	.string "shoes. How can I help you?$"

LiesingTown_ShoeStore_Mart_EventScript_Clerk_Text_1:
	.string "Thank you for shopping with us. Come\n"
	.string "again!$"

LiesingTown_ShoeStore_Mart_EventScript_Clerk2_Text_0:
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON\l"
	.string "CENTER in certain situations.$"

LiesingTown_ShoeStore_Mart_EventScript_Clerk2_Text_1:
	.string "Hello, you look like you are already\n"
	.string "wearing our newest fashion shoes! Wow,\l"
	.string "so cool. You know what, since you are\l"
	.string "sooo cool. I'm gonna give you a potion\l"
	.string "on the house as a promotional gift!$"

LiesingTown_ShoeStore_Mart_EventScript_Clerk2_Text_2:
	.string "Enjoy, Kiddo!$"
