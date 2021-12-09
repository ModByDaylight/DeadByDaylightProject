#include "PowerToggleComponent.h"
#include "Net/UnrealNetwork.h"

void UPowerToggleComponent::OnRep_IsInPower() const {
}

void UPowerToggleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPowerToggleComponent, _isInPower);
}

UPowerToggleComponent::UPowerToggleComponent() {
    this->_isInPower = false;
}

