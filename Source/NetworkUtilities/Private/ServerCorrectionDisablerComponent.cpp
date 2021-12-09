#include "ServerCorrectionDisablerComponent.h"

void UServerCorrectionDisablerComponent::SetServerCorrectionEnabled(const bool enabled, FGameplayTag channel) {
}

void UServerCorrectionDisablerComponent::Multicast_SetServerCorrectionEnabled_Implementation(const bool enabled, FGameplayTag channel) {
}

bool UServerCorrectionDisablerComponent::GetServerCorrectionEnabled() const {
    return false;
}

UServerCorrectionDisablerComponent::UServerCorrectionDisablerComponent() {
}

