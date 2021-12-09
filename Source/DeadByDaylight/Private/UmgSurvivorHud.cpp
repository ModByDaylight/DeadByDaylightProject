#include "UmgSurvivorHud.h"

class UTexture2D;

void UUmgSurvivorHud::UpdateCancelButton() {
}

bool UUmgSurvivorHud::ShouldUseContextualItemButton() const {
    return false;
}

void UUmgSurvivorHud::SetSkillCheckButtonPosition(bool isInsane) {
}


void UUmgSurvivorHud::SetLookBackJoystickPosition(FVector2D& position) {
}

void UUmgSurvivorHud::SetLookBackJoystickImage(bool pressed) {
}

void UUmgSurvivorHud::RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed) {
}

void UUmgSurvivorHud::OnCancelButtonClicked() {
}


bool UUmgSurvivorHud::HasSecondaryActionAvailable() const {
    return false;
}

FVector2D UUmgSurvivorHud::GetLookBackJoystickNormalizedOffset() {
    return FVector2D{};
}

bool UUmgSurvivorHud::GetLookBackJoystickIsPressed() {
    return false;
}

FText UUmgSurvivorHud::GetCenterItemText() const {
    return FText::GetEmpty();
}

UTexture2D* UUmgSurvivorHud::GetCenterItemIcon() const {
    return NULL;
}

void UUmgSurvivorHud::CenterItemClicked(bool fromCancelRequest) {
}

UUmgSurvivorHud::UUmgSurvivorHud() {
    this->CrouchButton = NULL;
    this->CrouchButtonContainer = NULL;
    this->StruggleWidget = NULL;
    this->StruggleWidgetContainer = NULL;
    this->WiggleWidget = NULL;
    this->WiggleWidgetContainer = NULL;
    this->Survivor = NULL;
    this->CancelButton = NULL;
    this->CenterInteractionButtonContainer = NULL;
    this->LookBackButtonContainer = NULL;
    this->LookBackJoystick = NULL;
    this->SkillCheckButton = NULL;
    this->SkillCheckButtonCanvas = NULL;
    this->InsaneSkillCheckButtonCanvas = NULL;
}

