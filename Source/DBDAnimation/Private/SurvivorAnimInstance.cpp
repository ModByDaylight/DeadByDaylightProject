#include "SurvivorAnimInstance.h"



bool USurvivorAnimInstance::IsPlayingMontageByName(FName montageId) const {
    return false;
}


USurvivorAnimInstance::USurvivorAnimInstance() {
    this->CamperPlayer = NULL;
    this->IsHooked = false;
    this->IsSacrificeStruggling = false;
    this->MontageMadnessTierUp = NULL;
    this->_isFrightScreaming = false;
    this->IsBeingCarried = false;
    this->IsBeingPutOnHook = false;
    this->IsCrouched = false;
    this->GuidedAction = ECamperGuidedAction::VE_None;
    this->IsTrapped = false;
    this->IsCrawling = false;
    this->IsDead = false;
    this->MaxSpeed = 0.00f;
    this->IsInsideCloset = false;
    this->IsPlayingMadnessTierUpWeight = 0.00f;
    this->IsBeingKilled = false;
    this->IsCarryAttackSucess = false;
    this->IsUsingAimItem = false;
    this->IsHoldingAimItem = false;
    this->AllowLookAt = false;
    this->DropStaggerTimeLeft = 0.00f;
    this->RightArmIKAlpha = 0.00f;
    this->Strafe = false;
    this->IsInteracting = false;
    this->Injured = false;
    this->InteractionType = EInteractionAnimation::VE_None;
    this->PreviousInteractionType = EInteractionAnimation::VE_None;
    this->IsSlasherInFPV = false;
    this->CarriedAlpha = 0.00f;
    this->IsHoldingHandleItem = false;
    this->IsHoldingSmallItem = false;
    this->IsHoldingFirecracker = false;
    this->IsHoldingFlashbang = false;
    this->IsHoldingVaccine = false;
    this->IsHoldingAnyItem = false;
    this->IsHoldingLamentConfiguration = false;
    this->IsHoldingFragileObject = false;
    this->IsArmOverrideDisabled = false;
    this->InAir = false;
    this->_walkAnimSpeed = 0.00f;
    this->Direction = 0.00f;
    this->Pitch = 0.00f;
    this->Yaw = 0.00f;
    this->Idle = false;
    this->MyTime = 0.00f;
    this->HasAnyMontagePlaying = false;
    this->IsBeingCarriedByTheSpirit = false;
    this->IsBeingCarriedByTheNightmare = false;
    this->IsBeingCarriedByThePig = false;
    this->IsBeingCarriedByTheHag = false;
    this->IsBeingCarriedByTheLegion = false;
    this->IsBeingCarriedByTheGhostFace = false;
    this->IsUsingDeadHard = false;
    this->IsPlayingWakeUpOther = false;
    this->IsPlayingFreddyMori = false;
    this->IsHealingKOCamper = false;
    this->HasLinkInput = false;
}

