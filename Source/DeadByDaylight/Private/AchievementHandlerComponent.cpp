#include "AchievementHandlerComponent.h"

class AActor;

void UAchievementHandlerComponent::ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target) {
}

void UAchievementHandlerComponent::OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UAchievementHandlerComponent::UAchievementHandlerComponent() {
}

