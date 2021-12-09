#include "HarpoonRifle.h"
#include "SurvivorChainLinkableComponent.h"
#include "ChainLinkableComponent.h"
#include "RifleChain.h"

class ARifleChain;

ARifleChain* AHarpoonRifle::GetChain() const {
    return NULL;
}

void AHarpoonRifle::Authority_OnFireHarpoon() {
}

AHarpoonRifle::AHarpoonRifle() {
    this->_survivorLinkableClass = USurvivorChainLinkableComponent::StaticClass();
    this->_killerLinkableClass = UChainLinkableComponent::StaticClass();
    this->_chainClass = ARifleChain::StaticClass();
    this->_chain = NULL;
    this->_chainTensionComponent = NULL;
    this->_harpoonChainPositioner = NULL;
    this->_fireInteraction = NULL;
}

