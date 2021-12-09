#include "UMGLoadoutBaseWidget.h"

void UUMGLoadoutBaseWidget::SetLoadoutData(const TArray<FInventorySlotData>& loadoutData, bool NewUsingMatchRules, bool NewPerkSlotsLockedByAdmin, ELoadoutSlot loadoutSlot, bool NewIsSlasher, bool isClickable) {
}



UUMGLoadoutBaseWidget::UUMGLoadoutBaseWidget() {
    this->ItemOrPowerButton = NULL;
    this->AddonFirstButton = NULL;
    this->AddonSecondButton = NULL;
    this->OfferingButton = NULL;
    this->PerkFirstButton = NULL;
    this->PerkSecondButton = NULL;
    this->PerkThirdButton = NULL;
    this->PerkFourthButton = NULL;
    this->UsingMatchRules = false;
    this->PerkSlotsLockedByAdmin = false;
    this->IsSlasher = false;
}

