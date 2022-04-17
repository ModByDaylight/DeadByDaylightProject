#include "HarpoonRifle.h"
#include "RifleChain.h"
#include "SurvivorChainLinkableComponent.h"
#include "ChainLinkableComponent.h"
#include "HarpoonLauncher.h"
#include "HarpoonProviderComponent.h"
#include "RiflePlayerLinker.h"
#include "ChargeableComponent.h"
#include "TriggerableActivatorComponent.h"

ARifleChain* AHarpoonRifle::GetChain() const {
    return NULL;
}

void AHarpoonRifle::Authority_OnFireHarpoon() {
}

AHarpoonRifle::AHarpoonRifle() {
    this->_survivorLinkableClass = USurvivorChainLinkableComponent::StaticClass();
    this->_killerLinkableClass = UChainLinkableComponent::StaticClass();
    this->_chainClass = ARifleChain::StaticClass();
    this->_launcher = CreateDefaultSubobject<UHarpoonLauncher>(TEXT("Harpoon Launcher"));
    this->_harpoonProvider = CreateDefaultSubobject<UHarpoonProviderComponent>(TEXT("Harpoon Provider Component"));
    this->_chain = NULL;
    this->_chainTensionComponent = NULL;
    this->_chainTensionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("Chain Tension Chargeable"));
    this->_playerLinker = CreateDefaultSubobject<URiflePlayerLinker>(TEXT("Player Linker"));
    this->_harpoonChainPositioner = NULL;
    this->_fireInteraction = NULL;
    this->_crowsActivatorComponent = CreateDefaultSubobject<UTriggerableActivatorComponent>(TEXT("Crows Activator Component"));
}

