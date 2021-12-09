#include "KnivesLauncher.h"
#include "Net/UnrealNetwork.h"

class AThrowingKnives;

AThrowingKnives* UKnivesLauncher::GetPower() const {
    return NULL;
}

int32 UKnivesLauncher::GetLocallyPredictedAmmo() const {
    return 0;
}

void UKnivesLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKnivesLauncher, _isInSuperModeThrow);
}

UKnivesLauncher::UKnivesLauncher() {
    this->_isInSuperModeThrow = false;
}

