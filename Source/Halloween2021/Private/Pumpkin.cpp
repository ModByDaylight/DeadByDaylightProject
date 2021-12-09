#include "Pumpkin.h"
#include "Net/UnrealNetwork.h"






void APumpkin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APumpkin, _pumpkinType);
}

APumpkin::APumpkin() {
    this->_pumpkinType = EPumpkinType::None;
    this->_pumpkinStatusEffect = NULL;
}

