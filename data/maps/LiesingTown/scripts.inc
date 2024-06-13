LiesingTown_MapScripts::
	.byte 0


LiesingTown_EventScript_Trigger::
	playse SE_PIN
	playbgm MUS_HELP, TRUE
	lockall
	message LiesingTown_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinni
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox LiesingTown_EventScript_Trigger_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LiesingTown_EventScript_Trigger_1
	msgbox LiesingTown_EventScript_Trigger_Text_3
	applymovement 3, TwinniDog_Escort
	applymovement 7, YoshiDog_Escort
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinniAgain
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	setvar VAR_Liesingtown_State, 0
	end

LiesingTown_EventScript_Trigger_1:
	message LiesingTown_EventScript_Trigger_Text_2
	waitmessage
	closemessage
	applymovement 3, TwinniDog_Escort
	applymovement 7, YoshiDog_Escort
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinniAgain
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	setvar VAR_Liesingtown_State, 0
	end


LiesingTown_EventScript_Trigger1::
	playse SE_PIN
	playbgm MUS_HELP, TRUE
	lockall
	message LiesingTown_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinni1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox LiesingTown_EventScript_Trigger_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LiesingTown_EventScript_Trigger1_1
	msgbox LiesingTown_EventScript_Trigger_Text_3
	applymovement 3, TwinniDog_Escort
	applymovement 7, YoshiDog_Escort
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinniAgain
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	setvar VAR_Liesingtown_State, 0
	end

LiesingTown_EventScript_Trigger1_1:
	message LiesingTown_EventScript_Trigger_Text_2
	waitmessage
	closemessage
	applymovement 3, TwinniDog_Escort
	applymovement 7, YoshiDog_Escort
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinniAgain
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	setvar VAR_Liesingtown_State, 0
	end


LiesingTown_EventScript_Trigger2::
	playse SE_PIN
	playbgm MUS_HELP, TRUE
	lockall
	message LiesingTown_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinni2
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox LiesingTown_EventScript_Trigger_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LiesingTown_EventScript_Trigger2_1
	msgbox LiesingTown_EventScript_Trigger_Text_3
	applymovement 3, TwinniDog_Escort
	applymovement 7, YoshiDog_Escort
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinniAgain
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	setvar VAR_Liesingtown_State, 0
	end

LiesingTown_EventScript_Trigger2_1:
	message LiesingTown_EventScript_Trigger_Text_2
	waitmessage
	closemessage
	applymovement 3, TwinniDog_Escort
	applymovement 7, YoshiDog_Escort
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTwinniAgain
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	setvar VAR_Liesingtown_State, 0
	end


PlayerToTwinni:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PlayerToTwinni1:
	walk_right
	step_end

PlayerToTwinni2:
	walk_up
	walk_right
	step_end

TwinniDog_Escort:
	face_down
	delay_8
	face_up
	delay_4
	face_right
	walk_right
	walk_right
	face_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

YoshiDog_Escort:
	face_up
	delay_4
	face_left
	delay_8
	face_right
	walk_right
	walk_right
	face_up
	walk_up
	walk_up
	step_end

PlayerToTwinniAgain:
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	walk_up
	walk_up
	face_left
	walk_left
	walk_left
	step_end

LiesingTown_EventScript_TriggerDontGo::
	playse SE_PIN
	lockall
	msgbox LiesingTown_EventScript_TriggerDontGo_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBlockedByTwinni
	waitmovement OBJ_EVENT_ID_PLAYER
	closemessage
	releaseall
	return


PlayerBlockedByTwinni:
	walk_left
	step_end

BagChooseStarterLiesingtown_EventScript::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	removeobject 6
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	special ChooseStarter
	special HealPlayerParty
	setvar VAR_Liesingtown_State, 1
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_LIESING_TOWN, 26, 11
	waitstate
	releaseall
	end


LiesingTown_EventScript_YouSavedTheKittens::
	lockall
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_0
	waitmessage
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_1
	waitmessage
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_2
	waitmessage
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_3
	waitmessage
	closemessage
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_4
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_5
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_6
	setvar VAR_Liesingtown_State, 2
	applymovement 3, TwinniGiveRewardStarter
	giveitem ITEM_POKE_BALL, 5
	msgbox LiesingTown_EventScript_YouSavedTheKittens_Text_7
	setflag FLAG_UNUSED_0x025
	waitmessage
	closemessage
	releaseall
	end


TwinniGiveRewardStarter:
	walk_down
	face_right
	step_end

LiesingTown_EventScript_EntrySign::
	lockall
	msgbox LiesingTown_EventScript_EntrySign_Text_0
	releaseall
	return


LiesingTown_EventScript_TwinniHouse::
	lockall
	msgbox LiesingTown_EventScript_TwinniHouse_Text_0
	releaseall
	return


LiesingTown_EventScript_YoshiHouse::
	lockall
	msgbox LiesingTown_EventScript_YoshiHouse_Text_0
	releaseall
	return


LiesingTown_EventScript_OldWomanHouse::
	lockall
	msgbox LiesingTown_EventScript_OldWomanHouse_Text_0
	releaseall
	return


LiesingTown_EventScript_SomeoneHouse::
	lockall
	msgbox LiesingTown_EventScript_SomeoneHouse_Text_0
	releaseall
	return


LiesingTown_EventScript_ShoeStore::
	lockall
	msgbox LiesingTown_EventScript_ShoeStore_Text_0
	releaseall
	return


LiesingTown_EventScript_OldWoman::
	lockall
	msgbox LiesingTown_EventScript_OldWoman_Text_0
	releaseall
	return


LiesingTown_EventScript_WanderingGuy::
	lockall
	msgbox LiesingTown_EventScript_WanderingGuy_Text_0
	releaseall
	return


LiesingTown_EventScript_Shoes::
	lockall
	msgbox LiesingTown_EventScript_Shoes_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LiesingTown_EventScript_Shoes_1
	msgbox LiesingTown_EventScript_Shoes_Text_2
	releaseall
	return

LiesingTown_EventScript_Shoes_1:
	setflag FLAG_SYS_B_DASH
	playfanfare MUS_OBTAIN_ITEM
	msgbox LiesingTown_EventScript_Shoes_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x8E5
	releaseall
	return


LiesingTown_EventScript_ShoeGuyIntro::
	lockall
	playse SE_PIN
	playbgm MUS_BIRCH_LAB, TRUE
	applymovement 4, ShoeGuyIntroFacePlayer
	waitmovement 4
	msgbox LiesingTown_EventScript_ShoeGuyIntro_Text_0
	waitmessage
	closemessage
	setvar VAR_Liesingtown_State, 1
	applymovement 4, ShoeGuyIntroToStore
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntroToStore
	waitmovement 0
	msgbox LiesingTown_EventScript_ShoeGuyIntro_Text_1
	waitmessage
	applymovement 4, ShoeGuyIntroFacePlayer
	closemessage
	setvar VAR_Liesingtown_State, 0
	releaseall
	return


ShoeGuyIntroFacePlayer:
	face_player
	step_end

ShoeGuyIntroToStore:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

PlayerIntroToStore:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

LiesingTown_EventScript_Whatarethose::
	lockall
	playse SE_PIN
	applymovement 5, WhatarethoseLady
	msgbox LiesingTown_EventScript_Whatarethose_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Whatarethose
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	return


Whatarethose:
	walk_down
	walk_down
	step_end

WhatarethoseLady:
	face_player
	step_end

LiesingTown_EventScript_ZigzagoonGrowl::
	lockall
	msgbox LiesingTown_EventScript_ZigzagoonGrowl_Text_0
	releaseall
	return


LiesingTown_EventScript_Trigger_Text_0:
	.string "HEY YOU! You gotta help us! QUICK!$"

LiesingTown_EventScript_Trigger_Text_1:
	.string "Will you help please?$"

LiesingTown_EventScript_Trigger_Text_2:
	.string "OK! Follow us!$"

LiesingTown_EventScript_Trigger_Text_3:
	.string "This is not funny.... Follow us! NOW!$"

LiesingTown_EventScript_TriggerDontGo_Text_0:
	.string "YOU CANT JUST GO!$"

LiesingTown_EventScript_YouSavedTheKittens_Text_0:
	.string "We heard something in the alley when we\n"
	.string "saw those kittens being attacked.$"

LiesingTown_EventScript_YouSavedTheKittens_Text_1:
	.string "But you saved those kittens.Thanks a\n"
	.string "lot!$"

LiesingTown_EventScript_YouSavedTheKittens_Text_2:
	.string "So what is your name?$"

LiesingTown_EventScript_YouSavedTheKittens_Text_3:
	.string "This is my Sister Twinni and I am Yoshi.\n"
	.string "Nice to meet you!$"

LiesingTown_EventScript_YouSavedTheKittens_Text_4:
	.string "Yoshi: Thank you for helping us!$"

LiesingTown_EventScript_YouSavedTheKittens_Text_5:
	.string "Twinni: And those kittens!$"

LiesingTown_EventScript_YouSavedTheKittens_Text_6:
	.string "Yoshi: Here is a little reward for your\n"
	.string "heroic deed.$"

LiesingTown_EventScript_YouSavedTheKittens_Text_7:
	.string "My Sister and I will take care of the\n"
	.string "other two Kittens. See you around!$"

LiesingTown_EventScript_EntrySign_Text_0:
	.string "Welcome to Liesingtown$"

LiesingTown_EventScript_TwinniHouse_Text_0:
	.string "This is Twinnis House$"

LiesingTown_EventScript_YoshiHouse_Text_0:
	.string "This is Yoshis House$"

LiesingTown_EventScript_OldWomanHouse_Text_0:
	.string "This is the Old womans House$"

LiesingTown_EventScript_SomeoneHouse_Text_0:
	.string "This is someones House$"

LiesingTown_EventScript_ShoeStore_Text_0:
	.string "Liesingtown Shoe Store$"

LiesingTown_EventScript_OldWoman_Text_0:
	.string "Back in my day....$"

LiesingTown_EventScript_WanderingGuy_Text_0:
	.string "Hey, don't talk to me!$"

LiesingTown_EventScript_Shoes_Text_0:
	.string "Do you want to pick up the dirty shoes?$"

LiesingTown_EventScript_Shoes_Text_1:
	.string "Recieved Running Shoes.$"

LiesingTown_EventScript_Shoes_Text_2:
	.string "Nah I don't need Running Shoes.$"

LiesingTown_EventScript_ShoeGuyIntro_Text_0:
	.string "Yo, you must be new in town because\n"
	.string "with those shoes you certainly ain't\l"
	.string "one of us. Here let me show you where\l"
	.string "you can get some nice sneakers.$"

LiesingTown_EventScript_ShoeGuyIntro_Text_1:
	.string "This is it. The best shoe store in\n"
	.string "Liesingtown! Here you can buy th---\l"
	.string "Did you hear that? It sounded like it\l"
	.string "was coming from over there by those\l"
	.string "children. It is better to ignore them...\l"
	.string "just go and buy some new shoes!$"

LiesingTown_EventScript_Whatarethose_Text_0:
	.string "Old Lady: Yo, What are THOOOOOSE!! You\n"
	.string "can't be serious, get some real shoes\l"
	.string "before leaving or you will make this\l"
	.string "whole town look bad.$"

LiesingTown_EventScript_ZigzagoonGrowl_Text_0:
	.string "Grrrrr.$"
