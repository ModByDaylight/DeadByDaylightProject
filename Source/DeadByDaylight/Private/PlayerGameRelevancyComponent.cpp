#include "PlayerGameRelevancyComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerGameRelevancyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerGameRelevancyComponent, _isRelevantToGameplay);
}

UPlayerGameRelevancyComponent::UPlayerGameRelevancyComponent() {
}

