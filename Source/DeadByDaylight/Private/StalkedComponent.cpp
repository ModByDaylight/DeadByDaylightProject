#include "StalkedComponent.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"

void UStalkedComponent::OnRep_MaxStalkPoints() {
}

void UStalkedComponent::OnRep_IsBeingStalked() {
}

bool UStalkedComponent::HasStalkPoints() const {
    return false;
}

void UStalkedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStalkedComponent, _maxStalkPoints);
    DOREPLIFETIME(UStalkedComponent, _isBeingStalked);
}

UStalkedComponent::UStalkedComponent() {
    this->_maxStalkPoints = 0.00f;
    this->_stalkableWhileSightingStalker = false;
    this->_isBeingStalked = false;
    this->_stalkPointsChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("StalkPoints"));
}

