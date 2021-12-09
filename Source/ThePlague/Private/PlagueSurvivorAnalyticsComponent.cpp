#include "PlagueSurvivorAnalyticsComponent.h"
#include "Net/UnrealNetwork.h"

void UPlagueSurvivorAnalyticsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlagueSurvivorAnalyticsComponent, _replicatedRegularVomitHits);
}

UPlagueSurvivorAnalyticsComponent::UPlagueSurvivorAnalyticsComponent() {
    this->_replicatedRegularVomitHits = 0;
}

