IndoorDrachenberg_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndoorDrachenberg_Gym_OnTransition
	.byte 0

IndoorDrachenberg_Gym_OnTransition:
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	end

IndoorDrachenberg_Gym_EventScript_SetFlashLevel::
	goto_if_defeated TRAINER_BRAWLY_1, IndoorDrachenberg_Gym_EventScript_SetLightsOn
	call IndoorDrachenberg_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 0, IndoorDrachenberg_Gym_EventScript_SetFlashLevel7
	goto_if_eq VAR_0x8000, 1, IndoorDrachenberg_Gym_EventScript_SetFlashLevel6
	goto_if_eq VAR_0x8000, 2, IndoorDrachenberg_Gym_EventScript_SetFlashLevel5
	goto_if_eq VAR_0x8000, 3, IndoorDrachenberg_Gym_EventScript_SetFlashLevel4
	goto_if_eq VAR_0x8000, 4, IndoorDrachenberg_Gym_EventScript_SetFlashLevel3
	goto_if_eq VAR_0x8000, 5, IndoorDrachenberg_Gym_EventScript_SetFlashLevel2
	goto IndoorDrachenberg_Gym_EventScript_SetFlashLevel1

IndoorDrachenberg_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
IndoorDrachenberg_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

IndoorDrachenberg_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

IndoorDrachenberg_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

IndoorDrachenberg_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

IndoorDrachenberg_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

IndoorDrachenberg_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
IndoorDrachenberg_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

IndoorDrachenberg_Gym_EventScript_BrightenRoom::
	call IndoorDrachenberg_Gym_EventScript_CountTrainersDefeated
	nop1
	goto_if_eq VAR_0x8000, VAR_0x8001, IndoorDrachenberg_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 1, IndoorDrachenberg_Gym_EventScript_AnimateFlash1Trainer
	goto_if_eq VAR_0x8000, 2, IndoorDrachenberg_Gym_EventScript_AnimateFlash2Trainers
	goto_if_eq VAR_0x8000, 3, IndoorDrachenberg_Gym_EventScript_AnimateFlash3Trainers
	goto_if_eq VAR_0x8000, 4, IndoorDrachenberg_Gym_EventScript_AnimateFlash4Trainers
	goto_if_eq VAR_0x8000, 5, IndoorDrachenberg_Gym_EventScript_AnimateFlash5Trainers
	goto_if_eq VAR_0x8000, 6, IndoorDrachenberg_Gym_EventScript_AnimateFlash6Trainers

IndoorDrachenberg_Gym_EventScript_NoLightChange::
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
IndoorDrachenberg_Gym_EventScript_AnimateFlash1Trainer::
	playse SE_SWITCH
	animateflash 6
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_AnimateFlash2Trainers::
	playse SE_SWITCH
	animateflash 5
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_AnimateFlash3Trainers::
	playse SE_SWITCH
	animateflash 4
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_AnimateFlash4Trainers::
	playse SE_SWITCH
	animateflash 3
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_AnimateFlash5Trainers::
	playse SE_SWITCH
	animateflash 2
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_AnimateFlash6Trainers::
	playse SE_SWITCH
	animateflash 1
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call IndoorDrachenberg_Gym_EventScript_SetFlashLevel
	return

IndoorDrachenberg_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, IndoorDrachenberg_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
IndoorDrachenberg_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JOCELYN, IndoorDrachenberg_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
IndoorDrachenberg_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_LAURA, IndoorDrachenberg_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
IndoorDrachenberg_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, IndoorDrachenberg_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
IndoorDrachenberg_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_CRISTIAN, IndoorDrachenberg_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
IndoorDrachenberg_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, IndoorDrachenberg_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1

IndoorDrachenberg_Gym_EventScript_StopCountingTrainers::
	return




