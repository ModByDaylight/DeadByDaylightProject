#include "CharacterStatsHandlerComponent.h"

class AActor;

void UCharacterStatsHandlerComponent::ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target) {
}

void UCharacterStatsHandlerComponent::OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void UCharacterStatsHandlerComponent::InitializePreMatchStats() {
}

UCharacterStatsHandlerComponent::UCharacterStatsHandlerComponent() {
}

