#include "SelfUntrap.h"
#include "Net/UnrealNetwork.h"

void USelfUntrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USelfUntrap, _canEscape);
}

USelfUntrap::USelfUntrap() {
    this->_untrapMontage = NULL;
    this->_canEscape = false;
}

