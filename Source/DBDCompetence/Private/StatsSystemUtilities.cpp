#include "StatsSystemUtilities.h"

class UModifierProvider;
class IModifierProvider;

void UStatsSystemUtilities::InitStatBP(FTunableStat& theStat, TScriptInterface<IModifierProvider> modifierProvider) {
}

float UStatsSystemUtilities::GetStatValueBP(const FTunableStat& theStat) {
    return 0.0f;
}

UStatsSystemUtilities::UStatsSystemUtilities() {
}

