#include "AISkill_Interaction.h"

UAISkill_Interaction::UAISkill_Interaction() {
    this->InputType = EPawnInputPressTypes::UseItem;
    this->InputMode = EInteractionSkillInputModes::Once;
    this->CancelInputType = EPawnInputPressTypes::None;
    this->CancelInputMode = EInteractionCancelInputModes::PressCancelInput;
    this->AutoLockInput = true;
    this->MinHoldInputTime = 0.00f;
    this->AutoReleaseHoldInputWhenCharged = false;
}

