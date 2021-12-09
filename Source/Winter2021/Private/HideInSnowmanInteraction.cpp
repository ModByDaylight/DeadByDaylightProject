#include "HideInSnowmanInteraction.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UHideInSnowmanInteraction::Multicast_StopControllingSnowman_Implementation(ACamperPlayer* survivor) {
}

void UHideInSnowmanInteraction::Multicast_StartControllingSnowman_Implementation(ACamperPlayer* survivor) {
}

void UHideInSnowmanInteraction::Multicast_OnAbleToRunAndExitSnowmanStart_Implementation() {
}

void UHideInSnowmanInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHideInSnowmanInteraction, _shouldRunOutOfSnowman);
    DOREPLIFETIME(UHideInSnowmanInteraction, _isSnowmanShieldDamaged);
}

UHideInSnowmanInteraction::UHideInSnowmanInteraction() {
    this->_shouldRunOutOfSnowman = false;
    this->_isSnowmanShieldDamaged = false;
}

