#include "LunarEventComponent.h"
#include "Net/UnrealNetwork.h"

class ALanternInteractable;

void ULunarEventComponent::OnRep_lanternCollectedCount() {
}

void ULunarEventComponent::OnLanternHoldTimerEnd() {
}

void ULunarEventComponent::OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Multicast_ResetLanternLight_Implementation(ALanternInteractable* lanternInteractable) {
}
bool ULunarEventComponent::Multicast_ResetLanternLight_Validate(ALanternInteractable* lanternInteractable) {
    return true;
}

void ULunarEventComponent::Local_OnCamperLostLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Local_OnCamperEscape(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnSlasherDestroysLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnPlayerLeaveGame(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnPickupLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnFixGenerator(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnDestroyCamperLightGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnCamperLostLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::Authority_OnCamperEscape(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ULunarEventComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULunarEventComponent, _lanternCollectedCount);
    DOREPLIFETIME(ULunarEventComponent, _additionalEventProgressCount);
}

ULunarEventComponent::ULunarEventComponent() {
    this->_lanternCollectedCount = 0;
    this->_additionalEventProgressCount = 0;
}

