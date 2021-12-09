#include "UmgKillerHud.h"

class ACollectable;
class UInteractionDefinition;

void UUmgKillerHud::UpdatePowerButtonTier(int32 previousTier, int32 currentTier, bool isFirstTime) {
}

bool UUmgKillerHud::ShouldShowInteractionHighlight(EInputInteractionType interactionType) const {
    return false;
}

void UUmgKillerHud::SetPowerIconFromItem(ACollectable* item, EInventoryType inventoryType) {
}

void UUmgKillerHud::SetPowerAttackJoystickThumbImage(bool pressed) {
}

void UUmgKillerHud::SetPowerAttackJoystickPosition(FVector2D& position) {
}

void UUmgKillerHud::RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed) {
}

void UUmgKillerHud::OnSecondAbilityButtonPressed() {
}

void UUmgKillerHud::OnSecondAbilityButtonLongPressed() {
}

void UUmgKillerHud::OnPowerButtonReleased() {
}

void UUmgKillerHud::OnPowerButtonPressed() {
}

void UUmgKillerHud::OnCancelButtonReleased() {
}

void UUmgKillerHud::OnCancelButtonPressed() {
}

void UUmgKillerHud::OnAttackButtonReleased() {
}

void UUmgKillerHud::OnAttackButtonPressed() {
}

void UUmgKillerHud::OnActionButtonReleased() {
}

void UUmgKillerHud::OnActionButtonPressed() {
}

bool UUmgKillerHud::IsPowerButtonAvailable() const {
    return false;
}

bool UUmgKillerHud::IsCancelPowerButtonAvailable() const {
    return false;
}

bool UUmgKillerHud::IsAttackButtonVisible() const {
    return false;
}




UInteractionDefinition* UUmgKillerHud::GetCurrentPowerUseInteraction() const {
    return NULL;
}

UUmgKillerHud::UUmgKillerHud() {
    this->PowerButton = NULL;
    this->PowerButtonContainer = NULL;
    this->SecondAbilityButton = NULL;
    this->SecondAbilityButtonContainer = NULL;
    this->AttackButton = NULL;
    this->AttackButtonContainer = NULL;
    this->DropSurvivorButton = NULL;
    this->DropSurvivorButtonContainer = NULL;
    this->CancelButton = NULL;
    this->GhostfaceSpecific = NULL;
    this->SecondAttackButtonContainer = NULL;
    this->HudPowerAttackJoystick = NULL;
    this->Killer = NULL;
    this->_isCancelButtonPressed = false;
    this->_isAttackButtonPressed = false;
    this->_isAttackJoystickActivated = false;
    this->_isPowerAttackJoystickActivated = false;
}

