#include "DBDTunableUtilities.h"

class UObject;

float UDBDTunableUtilities::GetTunableValue(const UObject* worldContextObject, FName valueName) {
    return 0.0f;
}

float UDBDTunableUtilities::GetTunableRowHandleValue(const FDBDTunableRowHandle& rowHandle) {
    return 0.0f;
}

float UDBDTunableUtilities::GetSlasherTunableValue(UObject* worldContextObject, FName valueName) {
    return 0.0f;
}

float UDBDTunableUtilities::GetEndGameTunableValue(UObject* worldContextObject, FName valueName) {
    return 0.0f;
}

UDBDTunableUtilities::UDBDTunableUtilities() {
}

