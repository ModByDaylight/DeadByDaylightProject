#include "DBDHookUtilities.h"

class AMeatHook;
class ACamperPlayer;

bool UDBDHookUtilities::IsWraithHook(AMeatHook* targetHook) {
    return false;
}

bool UDBDHookUtilities::IsPigHook(AMeatHook* targetHook) {
    return false;
}

bool UDBDHookUtilities::IsNurseHook(AMeatHook* targetHook) {
    return false;
}

bool UDBDHookUtilities::IsLegionHook(AMeatHook* targetHook) {
    return false;
}

bool UDBDHookUtilities::IsHuntressHook(AMeatHook* targetHook) {
    return false;
}

bool UDBDHookUtilities::IsHookOf(AMeatHook* targetHook, FGameplayTag hookTag) {
    return false;
}

bool UDBDHookUtilities::IsHagHook(AMeatHook* targetHook) {
    return false;
}

bool UDBDHookUtilities::IsFreddyHook(AMeatHook* targetHook) {
    return false;
}

float UDBDHookUtilities::ComputeHookStrugglePercent(const ACamperPlayer* hookedCamper, float hookStruggleThreshold) {
    return 0.0f;
}

UDBDHookUtilities::UDBDHookUtilities() {
}

