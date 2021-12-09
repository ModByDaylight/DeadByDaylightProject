#include "OfferingUtilities.h"

class ADBDPlayer;
class UObject;

bool UOfferingUtilities::IsPlayerEquippedWithOfferingWithTag(const ADBDPlayer* player, const FName offeringTag) {
    return false;
}

bool UOfferingUtilities::HasOfferingOfType(const UObject* worldContextObject, EOfferingEffectType offeringEffectType, int32 playerId) {
    return false;
}

bool UOfferingUtilities::HasItemLossProtection(const ADBDPlayer* player) {
    return false;
}

UOfferingUtilities::UOfferingUtilities() {
}

