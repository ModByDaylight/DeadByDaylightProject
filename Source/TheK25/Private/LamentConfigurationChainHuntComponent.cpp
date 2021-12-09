#include "LamentConfigurationChainHuntComponent.h"
#include "Net/UnrealNetwork.h"

void ULamentConfigurationChainHuntComponent::OnRep_ChainHuntStateData() {
}

float ULamentConfigurationChainHuntComponent::GetChainHuntProgressPercentage() const {
    return 0.0f;
}

void ULamentConfigurationChainHuntComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULamentConfigurationChainHuntComponent, _chainHuntEffectsComponents);
    DOREPLIFETIME(ULamentConfigurationChainHuntComponent, _chainHuntStateData);
}

ULamentConfigurationChainHuntComponent::ULamentConfigurationChainHuntComponent() {
    this->_floorChainHuntTimeBetweenChainStrikes = 2.00f;
    this->_chainNumberPerChainHuntCluster = NULL;
    this->_timeBetweenChainHuntClusterStrikes = NULL;
    this->_killerChainHuntEffectsComponentClass = NULL;
    this->_survivorChainHuntEffectsComponentClass = NULL;
    this->_killerChainHuntEffectsComponent = NULL;
    this->_cachedAdditiveChainStrikeDelayTime = 0.00f;
    this->_oldChainHuntState = EChainHuntState::Inactive;
}

