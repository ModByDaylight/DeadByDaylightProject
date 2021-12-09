#include "CamperAnimInstance.h"

void UCamperAnimInstance::SetIsSacrificeStruggling(bool value) {
}

void UCamperAnimInstance::SetIsGassed(bool value) {
}



bool UCamperAnimInstance::IsPlayingMontageByName(FName montageId) const {
    return false;
}


UCamperAnimInstance::UCamperAnimInstance() {
    this->CamperPlayer = NULL;
    this->MyDeltaTime = 0.00f;
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
    this->IsTotallyInsane = false;
    this->IsBeingKilled = false;
    this->IsCarryAttackSucess = false;
    this->ShouldLookSleepy = false;
    this->IsUsingAimItem = false;
    this->IsHoldingAimItem = false;
    this->AllowLookAt = false;
    this->DropStaggerTimeLeft = 0.00f;
    this->LeftArmIKAlpha = 0.00f;
    this->RightArmIKAlpha = 0.00f;
    this->LeftForeArmIKAlpha = 0.00f;
    this->RightForeArmIKAlpha = 0.00f;
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
    this->Turning = 0.00f;
    this->InAir = false;
    this->Speed = 0.00f;
    this->Direction = 0.00f;
    this->Pitch = 0.00f;
    this->Yaw = 0.00f;
    this->Idle = false;
    this->MyTime = 0.00f;
    this->SkillCheckFailed = false;
    this->IsGassed = false;
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
    this->IsSpooked = false;
    this->IsHealingKOCamper = false;
    this->IsChainLinked = false;
    this->IsBeingReeled = false;
    this->TriggerHarpoonHitAnim = false;
    this->WasRecentlyHitByVomit = false;
    this->HarpoonHitTurnAnimNormalizedStartTime = 0.00f;
    this->HarpoonHitAnimTurnRight = false;
    this->ChainBreakTrigger = false;
    this->HasLinkInput = false;
    this->LinkInputX = 0.00f;
    this->LinkInputY = 0.00f;
    this->LinkedMaxSpeed = 220.00f;
    this->_cachedSurvivorPlagueEffect = NULL;
}

