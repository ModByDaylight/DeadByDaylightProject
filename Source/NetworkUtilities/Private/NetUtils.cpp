#include "NetUtils.h"

class UObject;

bool UNetUtils::IsDedicatedServerInstance(const UObject* worldContextObject) {
    return false;
}

UNetUtils::UNetUtils() {
}

