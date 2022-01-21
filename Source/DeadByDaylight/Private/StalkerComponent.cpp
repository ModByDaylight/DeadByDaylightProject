#include "StalkerComponent.h"
#include "ChargeableComponent.h"

void UStalkerComponent::OnPlayerBeingStalkedChanged(bool isBeingStalked) {
}

bool UStalkerComponent::IsStalkingSomeone() const {
    return false;
}

bool UStalkerComponent::HasMaxStalkPoints() const {
    return false;
}

float UStalkerComponent::GetTotalStalkingPoints() const {
    return 0.0f;
}

float UStalkerComponent::GetScoreMultiplier() const {
    return 0.0f;
}

float UStalkerComponent::GetPercentStalkingPoints() const {
    return 0.0f;
}

float UStalkerComponent::GetMaxStalkingPoints() const {
    return 0.0f;
}

bool UStalkerComponent::CanStalk() const {
    return false;
}

UStalkerComponent::UStalkerComponent() {
    this->_distributeStalkRate = true;
    this->_canStalkWhileInChase = true;
    this->_stalkPointsChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("StalkPoints"));
}

