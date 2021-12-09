#include "BTTask_Interact.h"

UBTTask_Interact::UBTTask_Interact() {
    this->Input = EPawnInputPressTypes::Interact;
    this->OnFailFocusCooldownDuration = 10.00f;
    this->PropagateCooldownOnInteractable = false;
    this->FailStartInteractTimeLimit = 4.00f;
}

