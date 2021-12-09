#include "GhostKillerAnalyticsComponent.h"
#include "Net/UnrealNetwork.h"

class UChargeableComponent;

void UGhostKillerAnalyticsComponent::Local_OnStalkModeChanged(bool isInStalkMode) {
}

void UGhostKillerAnalyticsComponent::Local_OnLeanStateChanged(ELeanState leanState) {
}

void UGhostKillerAnalyticsComponent::Local_OnIsStealthChanged(bool isStealth) {
}

void UGhostKillerAnalyticsComponent::Authority_OnStalkChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete) {
}

void UGhostKillerAnalyticsComponent::Authority_OnPreAttackSuccess(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}

void UGhostKillerAnalyticsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGhostKillerAnalyticsComponent, _ghostKillerAnalytics);
}

UGhostKillerAnalyticsComponent::UGhostKillerAnalyticsComponent() {
}

