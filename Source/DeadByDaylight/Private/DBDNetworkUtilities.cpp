#include "DBDNetworkUtilities.h"

class UObject;

bool UDBDNetworkUtilities::IsRunningDedicatedServerFlow() {
    return false;
}

bool UDBDNetworkUtilities::IsOnDedicatedServerNetwork(const UObject* worldContextObject) {
    return false;
}

UDBDNetworkUtilities::UDBDNetworkUtilities() {
}

