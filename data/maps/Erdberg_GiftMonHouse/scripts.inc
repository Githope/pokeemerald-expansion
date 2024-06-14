Erdberg_GiftMonHouse_MapScripts::
	.byte 0


ErdbergGiftMonHouse_EventScript_MunchlaxGift::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, ErdbergGiftMonHouse_EventScript_MunchlaxGift_1
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_1
	waitmessage
	closemessage
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_2, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq ErdbergGiftMonHouse_EventScript_MunchlaxGift_4
	givemon SPECIES_MUNCHLAX, 15
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ErdbergGiftMonHouse_EventScript_MunchlaxGift_7
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ErdbergGiftMonHouse_EventScript_MunchlaxGift_8
	return

ErdbergGiftMonHouse_EventScript_MunchlaxGift_1:
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_0
	waitmessage
	closemessage
	return

ErdbergGiftMonHouse_EventScript_MunchlaxGift_4:
	closemessage
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_3
	waitmessage
	closemessage
	release
	end

ErdbergGiftMonHouse_EventScript_MunchlaxGift_7:
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_4
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_5
	waitfanfare
	release
	end

ErdbergGiftMonHouse_EventScript_MunchlaxGift_8:
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_6
	waitmessage
	closemessage
	msgbox ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_7
	waitmessage
	closemessage
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	release
	end


ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_0:
	.string "Take care of my little Munchlax.$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_1:
	.string "You seem like a nice trainer.$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_2:
	.string "Can you take care of my Munchlax for me?$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_3:
	.string "Oh... ok.$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_4:
	.string "I know you will be a great trainer for my Munchlax!$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_5:
	.string "You received a Munchlax.$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_6:
	.string "Oh you don't have any space.$"

ErdbergGiftMonHouse_EventScript_MunchlaxGift_Text_7:
	.string "The Pokémon was transfered to your PC.$"
