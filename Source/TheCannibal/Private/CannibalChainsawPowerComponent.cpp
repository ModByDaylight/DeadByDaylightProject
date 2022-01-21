#include "CannibalChainsawPowerComponent.h"
#include "Net/UnrealNetwork.h"
#include "PowerChargeComponent.h"

void UCannibalChainsawPowerComponent::Server_OnTantrumPowerChargeFull_Implementation() {
}
bool UCannibalChainsawPowerComponent::Server_OnTantrumPowerChargeFull_Validate() {
    return true;
}

void UCannibalChainsawPowerComponent::OnRep_NumPowerCharges(int32 previousNumPowerCharges) {
}

void UCannibalChainsawPowerComponent::OnLevelReadyToPlay() {
}

void UCannibalChainsawPowerComponent::Multicast_OnTantrumPowerChargeFull_Implementation() {
}

void UCannibalChainsawPowerComponent::Local_OnTantrumPowerChargeFull() {
}

int32 UCannibalChainsawPowerComponent::GetNumberOfChainsawPowerCharges() const {
    return 0;
}

void UCannibalChainsawPowerComponent::Authority_OnChainsawPowerChargeFull() {
}

void UCannibalChainsawPowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCannibalChainsawPowerComponent, _isInTantrum);
    DOREPLIFETIME(UCannibalChainsawPowerComponent, _numPowerCharges);
    DOREPLIFETIME(UCannibalChainsawPowerComponent, _numPowerChargesConsumed);
}

UCannibalChainsawPowerComponent::UCannibalChainsawPowerComponent() {
    this->_chainsawPowerCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("ChainsawPowerCharge"));
    this->_chainsawPowerDischarge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("ChainsawPowerDischarge"));
    this->_tantrumPowerCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("TantrumPowerCharge"));
    this->_numPowerCharges = 0;
    this->_numPowerChargesConsumed = 0;
}

