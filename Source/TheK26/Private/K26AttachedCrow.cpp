#include "K26AttachedCrow.h"
#include "Net/UnrealNetwork.h"

class AActor;
class AK26AttachedCrow;
class ASlasherPlayer;
class ACamperPlayer;

void AK26AttachedCrow::OnRep_AttachmentStatus() {
}

void AK26AttachedCrow::Multicast_OnStopDetaching_Implementation() {
}

void AK26AttachedCrow::Multicast_OnStartDetaching_Implementation() {
}

void AK26AttachedCrow::HideOutline() {
}







void AK26AttachedCrow::Authority_OnSurvivorWasUnhooked(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void AK26AttachedCrow::Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow) {
}

void AK26AttachedCrow::Authority_OnSurvivorExitLocker(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void AK26AttachedCrow::Authority_OnSurvivorDroppedEnd() {
}

void AK26AttachedCrow::Authority_OnSurvivorAdded(ACamperPlayer* survivor) {
}

void AK26AttachedCrow::Authority_OnPlayerLeftGame(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void AK26AttachedCrow::Authority_OnOtherSurvivorPerkFlagsChanged(FGameplayTag gameplayTag, bool isAdded) {
}

void AK26AttachedCrow::Authority_OnOtherSurvivorGuidedActionChanged() {
}

void AK26AttachedCrow::Authority_OnOtherSurvivorDamageStateChanged(ECamperDamageState before, ECamperDamageState after) {
}

void AK26AttachedCrow::Authority_OnKillerSet(ASlasherPlayer* killer) {
}

void AK26AttachedCrow::Authority_OnIsWithinOtherSurvivorRangeChanged(AActor* survivorActor, const bool isInRange) {
}

void AK26AttachedCrow::Authority_OnDestroyAttempt(const TArray<AActor*>& instigatorsForCompletion) {
}

void AK26AttachedCrow::Authority_DeactivateInfection() {
}

void AK26AttachedCrow::Authority_ActivateInfection() {
}

void AK26AttachedCrow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK26AttachedCrow, _attachmentStatus);
}

AK26AttachedCrow::AK26AttachedCrow() {
    this->_statusHandler = NULL;
    this->_authority_isInfecting = false;
}

