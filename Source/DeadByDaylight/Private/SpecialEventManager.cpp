#include "SpecialEventManager.h"

class UObject;

ESpecialEventStatus USpecialEventManager::GetStatus(const FCombinedSpecialEventData& specialEventData) {
    return ESpecialEventStatus::Inactive;
}

bool USpecialEventManager::GetSpecialEvent(UObject* worldContextObject, const FName eventId, FCombinedSpecialEventData& outSpecialEventData) {
    return false;
}

bool USpecialEventManager::GetCurrentSpecialEvent(const UObject* worldContextObject, FCombinedSpecialEventData& outSpecialEventData) {
    return false;
}

USpecialEventManager::USpecialEventManager() {
}

