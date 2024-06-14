AncientTomb_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
	.byte 0

AncientTomb_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_EventScript_TryRemoveRegisteel
	end

AncientTomb_EventScript_TryRemoveRegisteel::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AncientTomb_OnTransition:
	setflag FLAG_LANDMARK_ANCIENT_TOMB
	call_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_EventScript_ShowRegisteel
	end

AncientTomb_EventScript_ShowRegisteel::
	clearflag FLAG_HIDE_REGISTEEL
	return

AncientTomb_OnLoad:
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_HideRegiEntrance
	end

AncientTomb_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

AncientTomb_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_BigHoleInWall
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
	releaseall
	end

AncientTomb_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

AncientTomb_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
	releaseall
	end

AncientTomb_EventScript_Registeel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGISTEEL, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedRegisteel
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromRegisteel
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromRegisteel
	setflag FLAG_DEFEATED_REGISTEEL
	release
	end

AncientTomb_EventScript_DefeatedRegisteel::
	setflag FLAG_DEFEATED_REGISTEEL
	goto Common_EventScript_RemoveStaticPokemon
	end

AncientTomb_EventScript_RanFromRegisteel::
	setvar VAR_0x8004, SPECIES_REGISTEEL
	goto Common_EventScript_LegendaryFlewAway
	end

AncientTomb_EventScript_TomTurbo::
	lockall
	playse MUS_ENCOUNTER_MAGMA
	msgbox AncientTomb_EventScript_TomTurbo_Text_0
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	msgbox AncientTomb_EventScript_TomTurbo_Text_1
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, AncientTomb_EventScript_TomTurboDefeat
	msgbox AncientTomb_EventScript_TomTurbo_Text_2
	closemessage
	delay 30
	fadescreen FADE_TO_BLACK
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	fadescreen FADE_FROM_BLACK
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	releaseall
	end


AncientTomb_EventScript_TomTurboDefeat::
	msgbox AncientTomb_EventScript_TomTurboDefeat_Text_0
	return


AncientTomb_EventScript_TomTurbo_Text_0:
	.string "Hey Hey Hey Tom Turbo PREINTRO$"

AncientTomb_EventScript_TomTurbo_Text_1:
	.string "Hey Hey Hey Tom Turbo INTRO$"

AncientTomb_EventScript_TomTurbo_Text_2:
	.string "Hey Hey Hey Tom Turbo LEAVES$"

AncientTomb_EventScript_TomTurboDefeat_Text_0:
	.string "Hey Hey Hey Tom Turbo DEFEAT$"
