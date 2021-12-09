#include "ChainLinkableComponent.h"
#include "Net/UnrealNetwork.h"
#include "BaseCameraTargetingStrategy.h"

void UChainLinkableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChainLinkableComponent, _isLinkedLingering);
    DOREPLIFETIME(UChainLinkableComponent, _movementStatusEffect);
}

UChainLinkableComponent::UChainLinkableComponent() {
    this->_cameraTargetingStrategyClass = UBaseCameraTargetingStrategy::StaticClass();
    this->_inputAccelerationStrategy = NULL;
    this->_chainLink = NULL;
    this->_movementStatusEffect = NULL;
    this->_cameraStrategy = NULL;
}

