#include "GeneratorToolboxRepairInteraction.h"

class ADBDPlayer;

bool UGeneratorToolboxRepairInteraction::HasChargedToolBox(const ADBDPlayer* player) const {
    return false;
}

FString UGeneratorToolboxRepairInteraction::GetInteractionTextWhenEmpty() const {
    return TEXT("");
}

UGeneratorToolboxRepairInteraction::UGeneratorToolboxRepairInteraction() {
}

