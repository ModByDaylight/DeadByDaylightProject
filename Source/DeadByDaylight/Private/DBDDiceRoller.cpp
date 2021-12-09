#include "DBDDiceRoller.h"

class AActor;
class ADBDPlayer;
class UInteractionDefinition;

bool UDBDDiceRoller::GetRollResultByTunableValue(const AActor* RollingActor, FName TunableValueName, float MultiplicativeModifier, float AdditiveModifier) {
    return false;
}

bool UDBDDiceRoller::GetRollResultByDiceRollType(const ADBDPlayer* RollingPlayer, EDiceRollType DiceRollType) {
    return false;
}

float UDBDDiceRoller::GetInteractionRollSuccessPercentageByDiceRollType(const UInteractionDefinition* interaction, const ADBDPlayer* RollingPlayer, EDiceRollType DiceRollType) {
    return 0.0f;
}

bool UDBDDiceRoller::CalculateTickedRollResult(const AActor* RollingActor, float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier) {
    return false;
}

bool UDBDDiceRoller::CalculateRollResult(const AActor* RollingActor, float BaseProbability, float MultiplicativeModifier, float AdditiveModifier) {
    return false;
}

bool UDBDDiceRoller::CalculateOverTimeRollResult(const AActor* RollingActor, float BaseProbability, float DeltaTime, float ExpectedTime, float MultiplicativeModifier, float AdditiveModifier) {
    return false;
}

UDBDDiceRoller::UDBDDiceRoller() {
}

