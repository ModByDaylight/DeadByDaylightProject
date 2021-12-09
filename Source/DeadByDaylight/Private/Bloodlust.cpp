#include "Bloodlust.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UBloodlust::OnRep_BloodlustTime(float oldBloodlustTime) {
}

void UBloodlust::OnChaseStartedEvent(ADBDPlayer* chasedPlayer) {
}

void UBloodlust::OnAllChaseEndedEvent() {
}

void UBloodlust::Multicast_ResetBloodlust_Implementation() {
}

float UBloodlust::GetBloodlustTime() const {
    return 0.0f;
}

void UBloodlust::DBD_SetBloodlust(const int32 amount, const bool enableDecay) {
}

void UBloodlust::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBloodlust, _bloodlustTime);
}

UBloodlust::UBloodlust() {
    this->BloodlustCurve = NULL;
    this->_bloodlustTime = 0.00f;
    this->_owningKiller = NULL;
}

