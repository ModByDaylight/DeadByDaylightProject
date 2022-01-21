#include "MontagePlayer.h"

class USkeletalMeshComponent;
class UAnimMontage;
class UAnimInstance;

void UMontagePlayer::Stop(float blendOutTime) {
}

void UMontagePlayer::SignalAnimInstanceChanged() {
}

void UMontagePlayer::SetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComponent) {
}

void UMontagePlayer::SetPlayRate(float playRate) {
}

UAnimMontage* UMontagePlayer::PlayLoopForDuration(FAnimationMontageDescriptor animMontageID, float duration, float playRate, FName out) {
    return NULL;
}

UAnimMontage* UMontagePlayer::Play(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) {
    return NULL;
}

void UMontagePlayer::OnMontageEndedInternal(FGuid guid, UAnimMontage* montage, bool interrupted) {
}

void UMontagePlayer::OnMontageBlendingOutInternal(FGuid guid, UAnimMontage* montage, bool interrupted) {
}

void UMontagePlayer::JumpToSectionEnd(FName sectionName) {
}

void UMontagePlayer::JumpToSection(FName sectionName) {
}

bool UMontagePlayer::IsPlayingAnyMontage() const {
    return false;
}

bool UMontagePlayer::IsPlaying(FAnimationMontageDescriptor montageDescriptor) const {
    return false;
}

UAnimInstance* UMontagePlayer::GetAnimInstance() const {
    return NULL;
}

UMontagePlayer::UMontagePlayer() {
    this->_animationMappingsTable = NULL;
    this->_playerSpecificMappingsTable = NULL;
    this->_currentlyPlayingMontage = NULL;
    this->_timeBeforeOut = -1.00f;
    this->_skeletalMeshComponent = NULL;
}

