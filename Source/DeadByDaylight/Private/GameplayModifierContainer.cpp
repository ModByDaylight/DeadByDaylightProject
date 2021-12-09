#include "GameplayModifierContainer.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class ADBDPlayer;
class UGameplayModifierContainer;
class UBaseModifierCondition;

void UGameplayModifierContainer::UpdateIsApplicable() {
}

void UGameplayModifierContainer::UnlistenToGameEvent(EDBDScoreTypes eventType) {
}

void UGameplayModifierContainer::UnlistenToDispatcherGameEvent(FGameplayTag eventType) {
}

void UGameplayModifierContainer::UnlistenToAllGameEvents() {
}

void UGameplayModifierContainer::UnlistenToAllDispatcherGameEvents() {
}

void UGameplayModifierContainer::SetUseApplyFunction(bool use) {
}

void UGameplayModifierContainer::SetModifierValue(FGameplayTag type, float GameplayModifierValue) {
}

void UGameplayModifierContainer::SetFlag(FGameplayTag flag, bool flagValue) {
}

void UGameplayModifierContainer::RemoveModifier(FGameplayTag type) {
}

void UGameplayModifierContainer::RemoveAllModifiers() {
}

void UGameplayModifierContainer::RemoveAllFlags() {
}

void UGameplayModifierContainer::OnRep_TickableConditionsData() {
}

void UGameplayModifierContainer::OnRep_ActivationTimer() {
}

void UGameplayModifierContainer::OnListenedGameEvent_Implementation(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target) {
}

void UGameplayModifierContainer::OnLevelReadyToPlay_Implementation() {
}

void UGameplayModifierContainer::OnInitialized_Internal() {
}

void UGameplayModifierContainer::OnInitialized_Implementation() {
}

void UGameplayModifierContainer::OnGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target) {
}

void UGameplayModifierContainer::OnGameEventDispatched_Implementation(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}



void UGameplayModifierContainer::ListenToGameEvent(EDBDScoreTypes eventType) {
}

void UGameplayModifierContainer::ListenToDispatcherGameEvent(FGameplayTag eventType) {
}

bool UGameplayModifierContainer::IsStatusViewActive_Implementation() const {
    return false;
}

bool UGameplayModifierContainer::IsActivationTimerDone() const {
    return false;
}

bool UGameplayModifierContainer::IsActivationTimerActive() const {
    return false;
}

bool UGameplayModifierContainer::HasModifierOfType(FGameplayTag type) const {
    return false;
}

bool UGameplayModifierContainer::HasFlag(FGameplayTag flag) const {
    return false;
}

float UGameplayModifierContainer::GetRemainingLifetime_Implementation() const {
    return 0.0f;
}

float UGameplayModifierContainer::GetPercentageFill_Implementation() const {
    return 0.0f;
}

ADBDPlayer* UGameplayModifierContainer::GetOwningPlayer() const {
    return NULL;
}

UGameplayModifierContainer* UGameplayModifierContainer::GetOriginatingEffect_Implementation() const {
    return NULL;
}

float UGameplayModifierContainer::GetModifierValue(FGameplayTag type) const {
    return 0.0f;
}

int32 UGameplayModifierContainer::GetLevelToDisplay() const {
    return 0;
}

EInventoryItemType UGameplayModifierContainer::GetInventoryItemType() const {
    return EInventoryItemType::None;
}

int32 UGameplayModifierContainer::GetIconFilePathIndex_Implementation() const {
    return 0;
}

float UGameplayModifierContainer::GetActivationTimerRemainingTime() const {
    return 0.0f;
}

float UGameplayModifierContainer::GetActivationTimerPercentRemaining() const {
    return 0.0f;
}

float UGameplayModifierContainer::GetActivationTimerElapsedTimePercent() const {
    return 0.0f;
}

float UGameplayModifierContainer::GetActivationTimerElapsedTime() const {
    return 0.0f;
}

float UGameplayModifierContainer::GetActivationTimerDuration() const {
    return 0.0f;
}

void UGameplayModifierContainer::FireActiveStatusViewEvent(FName NewStatusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource) const {
}

void UGameplayModifierContainer::Authority_TriggerActivationTimer(float activationTime) {
}

void UGameplayModifierContainer::Authority_SetActivationTimerPaused(const bool paused) {
}

void UGameplayModifierContainer::Authority_InstantiateGameplayModifierConditions() {
}

void UGameplayModifierContainer::Authority_ClearActivationTimer() {
}


UBaseModifierCondition* UGameplayModifierContainer::AddCondition(TSubclassOf<UBaseModifierCondition> conditionType) {
    return NULL;
}

void UGameplayModifierContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayModifierContainer, _tickableConditionsData);
    DOREPLIFETIME(UGameplayModifierContainer, _activationTimer);
}

UGameplayModifierContainer::UGameplayModifierContainer() {
    this->UseApplyFunction = false;
    this->BroadcastStatusView = false;
    this->_autoInitializeOnBeginPlay = true;
    this->_canOptimizeTickActivation = false;
    this->_activationTimer = NULL;
}

