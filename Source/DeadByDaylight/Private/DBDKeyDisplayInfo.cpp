#include "DBDKeyDisplayInfo.h"

class UPlayerInput;

bool UDBDKeyDisplayInfo::IsExcludedKey(FKey key) {
    return false;
}

FKeyDisplayInfo UDBDKeyDisplayInfo::GetKeyDisplayInfoForInteractionType(UPlayerInput* playerInput, EPlayerRole playerRole, EInputInteractionType interactionType, bool useGamePad) {
    return FKeyDisplayInfo{};
}

FKeyDisplayInfo UDBDKeyDisplayInfo::GetKeyDisplayInfo(FKey key) {
    return FKeyDisplayInfo{};
}

FKey UDBDKeyDisplayInfo::GetFirstKeyForAction(UPlayerInput* playerInput, FName actionName, bool useGamePad) {
    return FKey{};
}

FName UDBDKeyDisplayInfo::GetActionForInteractionType(EPlayerRole playerRole, EInputInteractionType inputInteractionType, bool useGamePad, bool ignoreInteractMash) {
    return NAME_None;
}

UDBDKeyDisplayInfo::UDBDKeyDisplayInfo() {
}

