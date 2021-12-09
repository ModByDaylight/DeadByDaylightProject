#include "BTService_FindInteractor_Pallet.h"

UBTService_FindInteractor_Pallet::UBTService_FindInteractor_Pallet() {
    this->IntentionFilter = EFindInteractablePalletIntentions::Fall;
    this->RaisePalletPerkId = TEXT("AnyMeansNecessary");
    this->DreamPaletteClass = NULL;
}

