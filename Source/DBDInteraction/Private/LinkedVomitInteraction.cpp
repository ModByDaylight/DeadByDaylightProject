#include "LinkedVomitInteraction.h"

class UVomitStateComponent;

bool ULinkedVomitInteraction::IsVomiting() const {
    return false;
}

bool ULinkedVomitInteraction::IsChargeComplete() const {
    return false;
}

UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent() const {
    return NULL;
}

ULinkedVomitInteraction::ULinkedVomitInteraction() {
    this->_chargeComplete = false;
}

