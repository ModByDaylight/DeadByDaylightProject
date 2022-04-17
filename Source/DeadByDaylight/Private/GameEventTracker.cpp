#include "GameEventTracker.h"

class AActor;
class ADBDPlayerState;

void UGameEventTracker::FireGameflowEvent(EDBDScoreTypes eventType, float amount, const ADBDPlayerState* instigator, FName data) {
}

void UGameEventTracker::FireGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target) {
}

UGameEventTracker::UGameEventTracker() {
}

