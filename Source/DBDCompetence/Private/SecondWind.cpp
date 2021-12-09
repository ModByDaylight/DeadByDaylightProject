#include "SecondWind.h"
#include "Net/UnrealNetwork.h"

void USecondWind::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USecondWind, _currentState);
    DOREPLIFETIME(USecondWind, _amountHealed);
}

USecondWind::USecondWind() {
    this->_currentState = ESecondWindState::Loading;
    this->_amountHealed = 0.00f;
    this->_numberOfHealStateToHealToActivate[0] = 0.00f;
    this->_numberOfHealStateToHealToActivate[1] = 0.00f;
    this->_numberOfHealStateToHealToActivate[2] = 0.00f;
    this->_durationOfHeal[0] = 0.00f;
    this->_durationOfHeal[1] = 0.00f;
    this->_durationOfHeal[2] = 0.00f;
    this->_applyBrokenEffect = true;
}

