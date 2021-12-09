#include "FireHarpoonRifleInteraction.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UFireHarpoonRifleInteraction::Server_SetAimingSubstate_Implementation(EFireHarpoonRifleAimingInteractionSubState newState) {
}

void UFireHarpoonRifleInteraction::Server_HandleMissShotScores_Implementation(const TArray<ADBDPlayer*>& nearMissedPlayers) {
}
bool UFireHarpoonRifleInteraction::Server_HandleMissShotScores_Validate(const TArray<ADBDPlayer*>& nearMissedPlayers) {
    return true;
}

void UFireHarpoonRifleInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFireHarpoonRifleInteraction, _aimingSubState);
}

UFireHarpoonRifleInteraction::UFireHarpoonRifleInteraction() {
    this->_aimingSubState = EFireHarpoonRifleAimingInteractionSubState::None;
    this->_harpoon = NULL;
    this->_collector = NULL;
    this->_aimDownSightGamepadPitchCurve = NULL;
    this->_aimDownSightGamepadYawCurve = NULL;
}

