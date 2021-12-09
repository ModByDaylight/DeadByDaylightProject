#include "BTService_FindInteractor_Generator.h"

UBTService_FindInteractor_Generator::UBTService_FindInteractor_Generator() {
    this->StatusFilter = EFindInteractableGeneratorStatusFilter::NeedRepair;
    this->UsePerceptionToGetRepairRatio = false;
    this->HexRuinPerkId = TEXT("Hex_Ruin");
}

