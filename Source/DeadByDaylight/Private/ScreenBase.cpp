#include "ScreenBase.h"

void UScreenBase::SetFadesOut(bool fadesOut) const {
}

void UScreenBase::OnTextInputMouseClicked(bool isPassword) {
}

void UScreenBase::OnStart() {
}

void UScreenBase::OnNavKey(const FString& navKey) {
}

void UScreenBase::OnHideVirtualKeyboardRequested() {
}

void UScreenBase::OnEscape() {
}

void UScreenBase::OnBack() {
}

void UScreenBase::OnAnyKey(float code) {
}

void UScreenBase::OnAnimationUpdate(int32 NewIsAnimationDone) {
}

void UScreenBase::BroadcastOnHighlightedElementClickedEvent(const FName onBoardingID) {
}

UScreenBase::UScreenBase() {
    this->IsAnimationDone = true;
    this->ScreenObject = NULL;
    this->_screenController = NULL;
}

