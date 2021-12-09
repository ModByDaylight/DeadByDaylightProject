#include "StateTagUtilities.h"

class ADBDPlayer;

void UStateTagUtilities::RemoveStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag) {
}

bool UStateTagUtilities::HasStateTag(const ADBDPlayer* player, FGameplayTag tag) {
    return false;
}

bool UStateTagUtilities::HasAnyStateTag(const ADBDPlayer* player, const FGameplayTagContainer& tag) {
    return false;
}

bool UStateTagUtilities::CurrentInteractionHasStateTag(const ADBDPlayer* player, FGameplayTag tag) {
    return false;
}

bool UStateTagUtilities::CurrentInteractionHasAnyStateTag(const ADBDPlayer* player, const FGameplayTagContainer& tags) {
    return false;
}

void UStateTagUtilities::AddStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag) {
}

UStateTagUtilities::UStateTagUtilities() {
}

