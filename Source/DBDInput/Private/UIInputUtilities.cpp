#include "UIInputUtilities.h"

class UObject;

bool UUIInputUtilities::ShouldUseAtlantaControls(const UObject* worldContextObject) {
    return false;
}

bool UUIInputUtilities::IsInputKeyControlModePairValid(FKey inputKey, EControlMode controlMode) {
    return false;
}

FKey UUIInputUtilities::GetKeyFromUIAction(const EUIActionType actionType, bool isUsingGamepad) {
    return FKey{};
}

UUIInputUtilities::UUIInputUtilities() {
}

