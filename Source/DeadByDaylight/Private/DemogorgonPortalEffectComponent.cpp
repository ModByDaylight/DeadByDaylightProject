#include "DemogorgonPortalEffectComponent.h"

class ADBDPlayer;
class UGameplayModifierContainer;

void UDemogorgonPortalEffectComponent::Authority_Initialize(const FName statusEffect, const float& lingerDuration, ADBDPlayer* originatingPlayer, UGameplayModifierContainer* originatingEffect) {
}

UDemogorgonPortalEffectComponent::UDemogorgonPortalEffectComponent() {
    this->_effectLingerDuration = 0.00f;
}

