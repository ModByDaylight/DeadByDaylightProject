#include "PlagueUtilities.h"

class ADBDPlayer;
class USurvivorPlagueEffect;

bool UPlagueUtilities::IsPlagueDebugModeActive() {
    return false;
}

bool UPlagueUtilities::IsInfected(const ADBDPlayer* player) {
    return false;
}

bool UPlagueUtilities::HasMaxLevelSickness(const ADBDPlayer* player) {
    return false;
}

USurvivorPlagueEffect* UPlagueUtilities::GetPlagueEffect(const ADBDPlayer* player) {
    return NULL;
}

void UPlagueUtilities::Authority_AddSicknessToPlayer(ADBDPlayer* player, float sicknessToAdd) {
}

UPlagueUtilities::UPlagueUtilities() {
}

