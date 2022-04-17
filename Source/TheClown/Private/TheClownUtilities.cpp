#include "TheClownUtilities.h"

class ADBDPlayer;
class UGassedStatusEffect;
class UObject;
class UActiveGasCloudTrackerComponent;

bool UTheClownUtilities::IsGassed(const ADBDPlayer* player) {
    return false;
}

bool UTheClownUtilities::IsAffectedByAntidote(const ADBDPlayer* player) {
    return false;
}

UGassedStatusEffect* UTheClownUtilities::GetGassedStatusEffect(const ADBDPlayer* player) {
    return NULL;
}

UActiveGasCloudTrackerComponent* UTheClownUtilities::GetActiveGasCloudTrackerComponent(const UObject* worldContextObject) {
    return NULL;
}

bool UTheClownUtilities::CanBeGassed(const ADBDPlayer* player) {
    return false;
}

UTheClownUtilities::UTheClownUtilities() {
}

