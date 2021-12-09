#include "SurvivorChainLinkableComponent.h"
#include "Net/UnrealNetwork.h"
#include "SurvivorReelVelocityAdditiveStrategy.h"

void USurvivorChainLinkableComponent::OnRep_VelocityAdditiveStrategy() {
}

void USurvivorChainLinkableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USurvivorChainLinkableComponent, _linkedMoveInput);
    DOREPLIFETIME(USurvivorChainLinkableComponent, _velocityAdditiveStrategy);
}

USurvivorChainLinkableComponent::USurvivorChainLinkableComponent() {
    this->_velocityAdditiveStrategyClass = USurvivorReelVelocityAdditiveStrategy::StaticClass();
    this->_immobilizationEffect = NULL;
    this->_velocityAdditiveStrategy = NULL;
}

