#include "FlurryOfKnives.h"
#include "Net/UnrealNetwork.h"

void UFlurryOfKnives::Server_StartThrowing_Implementation() {
}
bool UFlurryOfKnives::Server_StartThrowing_Validate() {
    return true;
}

void UFlurryOfKnives::Server_DecreaseConsecutiveKnivesStacks_Implementation() {
}
bool UFlurryOfKnives::Server_DecreaseConsecutiveKnivesStacks_Validate() {
    return true;
}

void UFlurryOfKnives::OnRep_NumOfStacksReduction() {
}

void UFlurryOfKnives::Multicast_StartThrowing_Implementation() {
}

void UFlurryOfKnives::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlurryOfKnives, _replicatedNumOfStacksReduction);
    DOREPLIFETIME(UFlurryOfKnives, _isSuperModeThrow);
    DOREPLIFETIME(UFlurryOfKnives, _selfSlowEffect);
}

UFlurryOfKnives::UFlurryOfKnives() {
    this->_replicatedNumOfStacksReduction = 0;
    this->_isSuperModeThrow = false;
    this->_selfSlowEffect = NULL;
    this->_throwRateModifierByKnivesThrown = NULL;
    this->_coneOfFireAngleCurve = NULL;
    this->_movementSpeedByKnivesThrown = NULL;
    this->_recoilIntensityByKnivesThrown = NULL;
    this->_aimingGamepadPitchCurve = NULL;
    this->_aimingGamepadYawCurve = NULL;
    this->_throwingGamepadPitchCurve = NULL;
    this->_throwingGamepadYawCurve = NULL;
}

