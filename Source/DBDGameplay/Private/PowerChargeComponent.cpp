#include "PowerChargeComponent.h"
#include "Net/UnrealNetwork.h"

void UPowerChargeComponent::OnRep_CurrentCharge() {
}

void UPowerChargeComponent::OnCurrentChargeChanged(float value) {
}

void UPowerChargeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPowerChargeComponent, _currentCharge);
    DOREPLIFETIME(UPowerChargeComponent, _forceFullCharge);
}

UPowerChargeComponent::UPowerChargeComponent() {
    this->_forceFullCharge = false;
}

