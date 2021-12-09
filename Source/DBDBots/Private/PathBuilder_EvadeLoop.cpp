#include "PathBuilder_EvadeLoop.h"

UPathBuilder_EvadeLoop::UPathBuilder_EvadeLoop() {
    this->AddDistanceToRequiredEvadeGap = 400.00f;
    this->ForceEvadePointUnderDistance = 600.00f;
    this->ChaserCrossingEvadeTimePenalty = 1.20f;
    this->SwapPathReachTimeBuffer = 1.00f;
    this->BreakPalletInteractionId = TEXT("Destroy");
    this->OnPathRadius = 150.00f;
    this->MaxEvadeInteractableWeightDistance = 6400.00f;
    this->WeightAtMaxDistance = 1.00f;
    this->MaxWeightAtNearestDistanceIfHostileHasRangedAbility = true;
    this->WeightAtMaxSafety = 1.00f;
    this->MaxNearAllyPenaltyPathPointDistance = 1600.00f;
    this->WeightWhenNearAlly = -1.00f;
    this->_originalEvadeLoopWorkPath = NULL;
    this->_querierWorkPathA = NULL;
    this->_querierWorkPathB = NULL;
    this->_chaserWorkPath = NULL;
    this->_pickedEvadeLoopComponent = NULL;
}

