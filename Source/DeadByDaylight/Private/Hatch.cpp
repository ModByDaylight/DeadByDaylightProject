#include "Hatch.h"
#include "Net/UnrealNetwork.h"

void AHatch::SetIsSurvivorEscaping(bool escaping) {
}

void AHatch::SetForceIsOpen(bool forceIsOpen) {
}

void AHatch::ResetTimer(float duration) {
}

void AHatch::OnSurvivorsLeftChanged(int32 survivorRemaining) {
}

void AHatch::OnSurvivorEscaping() {
}

void AHatch::OnSurvivorEscapeInterrupted() {
}

void AHatch::OnSurvivorEscaped() {
}

void AHatch::OnRep_HatchState(EHatchState oldState) {
}

void AHatch::OnHatchVisibilityChanged(bool isVisible) {
}


void AHatch::OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void AHatch::Local_SetHatchState(bool open) {
}

bool AHatch::IsSurvivorEscaping() const {
    return false;
}

bool AHatch::IsOpen() const {
    return false;
}

EHatchState AHatch::GetHatchState() const {
    return EHatchState::Hidden;
}







void AHatch::Authority_SetIsForceOpen(bool isForcedOpen) {
}

void AHatch::Authority_SetHatchState(EHatchState newState) {
}

void AHatch::Authority_OnCloseTimerComplete() {
}

void AHatch::Authority_CheckedOpenHatch() {
}

void AHatch::Authority_CheckedOpenForceClosedHatch() {
}

void AHatch::Authority_CheckedCloseHatch() {
}

void AHatch::Authority_CheckedChangeActiveState() {
}

void AHatch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHatch, _hatchState);
}

AHatch::AHatch() {
    this->_hatchState = EHatchState::Hidden;
    this->_isSurvivorEscaping = false;
    this->_isEndGameOver = false;
    this->_isForceOpen = false;
    this->_attemptToCloseHatchOnNextEscape = false;
    this->_baseCollision = NULL;
}

