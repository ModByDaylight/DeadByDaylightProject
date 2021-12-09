#include "DedicatedServerHandlerComponent.h"

class AActor;

void UDedicatedServerHandlerComponent::ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target) {
}

void UDedicatedServerHandlerComponent::OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UDedicatedServerHandlerComponent::UDedicatedServerHandlerComponent() {
}

