#include "DBDAttackerComponent.h"

void UDBDAttackerComponent::Server_StoreAttack_Implementation(const EAttackType attackType) {
}
bool UDBDAttackerComponent::Server_StoreAttack_Validate(const EAttackType attackType) {
    return true;
}

void UDBDAttackerComponent::Multicast_StoreAttack_Implementation(const EAttackType attackType) {
}

void UDBDAttackerComponent::Local_RequestAttack(const EAttackType attackType) {
}

bool UDBDAttackerComponent::IsAttackTransitionRequested(const EAttackType attackType) const {
    return false;
}

bool UDBDAttackerComponent::IsAttacking() const {
    return false;
}

bool UDBDAttackerComponent::IsAnyAttackTransitionRequested() const {
    return false;
}

UDBDAttackerComponent::UDBDAttackerComponent() {
    this->_requestedAttack = NULL;
    this->_currentAttack = NULL;
}

