#include "InteractButtonInfo.h"

FInteractButtonInfo::FInteractButtonInfo() {
    this->PlayerRole = EPlayerRole::VE_None;
    this->InteractionInputType = EInputInteractionType::VE_None;
    this->CancelButtonType = EButtonType::None;
    this->SecondaryActionButtonType = EButtonType::None;
}

