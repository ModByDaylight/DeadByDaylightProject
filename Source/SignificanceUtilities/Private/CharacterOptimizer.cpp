#include "CharacterOptimizer.h"
#include "Net/UnrealNetwork.h"

void UCharacterOptimizer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterOptimizer, _dependentActorsToCheckSignficance);
}

UCharacterOptimizer::UCharacterOptimizer() {
    this->_characterMovementTickRateWhenInsignificant = 0.10f;
    this->_skeletalMeshTickRateWhenInsignificant = 0.10f;
}

