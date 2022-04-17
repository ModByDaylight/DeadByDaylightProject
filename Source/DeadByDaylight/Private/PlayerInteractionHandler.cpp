#include "PlayerInteractionHandler.h"

class UInterruptionDefinition;
class ADBDPlayer;
class UInteractionDefinition;
class USkillCheck;
class AActor;

void UPlayerInteractionHandler::UnPauseSkillCheckTimer() {
}

void UPlayerInteractionHandler::StartCustomSkillCheck(ESkillCheckCustomType type, float warningSoundDelay) {
}

void UPlayerInteractionHandler::SetScanForInteractionsEnabled(bool enabled) {
}

void UPlayerInteractionHandler::Server_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition) {
}
bool UPlayerInteractionHandler::Server_StoreInterruption_Interruptor_Validate(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition) {
    return true;
}

void UPlayerInteractionHandler::Server_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction) {
}
bool UPlayerInteractionHandler::Server_SetInteractionToSwapTo_Validate(UInteractionDefinition* interaction) {
    return true;
}

void UPlayerInteractionHandler::Server_RequestInterruption_Interruptor_Implementation() {
}
bool UPlayerInteractionHandler::Server_RequestInterruption_Interruptor_Validate() {
    return true;
}

void UPlayerInteractionHandler::Server_DebugRequestInteraction_Implementation(const FString& interactionName, const FString& interactorName, const FString& interactableName) {
}
bool UPlayerInteractionHandler::Server_DebugRequestInteraction_Validate(const FString& interactionName, const FString& interactorName, const FString& interactableName) {
    return true;
}

void UPlayerInteractionHandler::Server_CancelCurrentInteractionByInput_Implementation() {
}
bool UPlayerInteractionHandler::Server_CancelCurrentInteractionByInput_Validate() {
    return true;
}

void UPlayerInteractionHandler::Server_Broadcast_StoreInteraction_Implementation(FStoredInteraction interactionToStore) {
}
bool UPlayerInteractionHandler::Server_Broadcast_StoreInteraction_Validate(FStoredInteraction interactionToStore) {
    return true;
}

void UPlayerInteractionHandler::Server_Broadcast_ConfirmChargedCompleted_Implementation(bool chargeComplete) {
}
bool UPlayerInteractionHandler::Server_Broadcast_ConfirmChargedCompleted_Validate(bool chargeComplete) {
    return true;
}

void UPlayerInteractionHandler::Server_AnswerInterruption_Interruptee_Implementation(ERequestState state) {
}
bool UPlayerInteractionHandler::Server_AnswerInterruption_Interruptee_Validate(ERequestState state) {
    return true;
}

void UPlayerInteractionHandler::ResetSuccessiveSkillCheckCount() {
}

void UPlayerInteractionHandler::RemoveInteraction(UInteractionDefinition* interaction) {
}

void UPlayerInteractionHandler::PauseSkillCheckTimer() {
}

int32 UPlayerInteractionHandler::NumInteractionsInZone() const {
    return 0;
}

void UPlayerInteractionHandler::Multicast_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition) {
}
bool UPlayerInteractionHandler::Multicast_StoreInterruption_Interruptor_Validate(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition) {
    return true;
}

void UPlayerInteractionHandler::Multicast_StoreInteraction_Implementation(FStoredInteraction interactionToStore) {
}

void UPlayerInteractionHandler::Multicast_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction) {
}

void UPlayerInteractionHandler::Multicast_RequestInterruption_Interruptee_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition) {
}
bool UPlayerInteractionHandler::Multicast_RequestInterruption_Interruptee_Validate(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition) {
    return true;
}

void UPlayerInteractionHandler::Multicast_InterruptionRequestResult_Interruptor_Implementation(ERequestState state, bool grantInterruptScore) {
}
bool UPlayerInteractionHandler::Multicast_InterruptionRequestResult_Interruptor_Validate(ERequestState state, bool grantInterruptScore) {
    return true;
}

void UPlayerInteractionHandler::Multicast_InteractionPredictionValidationResult_Implementation(UInteractionDefinition* interaction, EInteractionValidationState state) {
}

void UPlayerInteractionHandler::Multicast_CancelCurrentInteractionByInput_Implementation() {
}

void UPlayerInteractionHandler::IncrementSuccessiveSkillCheckCount() {
}

bool UPlayerInteractionHandler::HasAvailableInteraction(EInputInteractionType interactionType) {
    return false;
}

bool UPlayerInteractionHandler::HasActiveSkillCheck() const {
    return false;
}

USkillCheck* UPlayerInteractionHandler::GetSkillCheck() const {
    return NULL;
}

float UPlayerInteractionHandler::GetMultiplicativeSkillCheckProbabilityModifier() const {
    return 0.0f;
}

UInteractionDefinition* UPlayerInteractionHandler::GetCurrentInteractionOfType(EInputInteractionType interactionInputType) const {
    return NULL;
}

UInteractionDefinition* UPlayerInteractionHandler::GetCurrentInteraction() const {
    return NULL;
}

void UPlayerInteractionHandler::GetAvailableInteractions(TArray<UInteractionDefinition*>& result) const {
}

UInteractionDefinition* UPlayerInteractionHandler::GetAvailableInteractionByID(const FString& interactionID) const {
    return NULL;
}

UInteractionDefinition* UPlayerInteractionHandler::GetAvailableInteraction(EInputInteractionType interactionType) const {
    return NULL;
}

float UPlayerInteractionHandler::GetAdditiveSkillCheckProbabilityModifier() const {
    return 0.0f;
}

void UPlayerInteractionHandler::Client_StartCustomSkillCheck_Implementation(ESkillCheckCustomType type, float warningSoundDelay) {
}

void UPlayerInteractionHandler::Client_NotifyChargeCompleted_Implementation(const UInteractionDefinition* interaction) {
}
bool UPlayerInteractionHandler::Client_NotifyChargeCompleted_Validate(const UInteractionDefinition* interaction) {
    return true;
}

void UPlayerInteractionHandler::CleanInteractionArray(AActor* DestroyedActor) {
}

bool UPlayerInteractionHandler::CanPerformInteraction(const FString& interactionName) const {
    return false;
}

void UPlayerInteractionHandler::Broadcast_Multicast_ConfirmChargedCompleted_Implementation(bool chargeComplete) {
}
bool UPlayerInteractionHandler::Broadcast_Multicast_ConfirmChargedCompleted_Validate(bool chargeComplete) {
    return true;
}

void UPlayerInteractionHandler::Authority_ClearPlayerDependency(ADBDPlayer* playerDependency) {
}

void UPlayerInteractionHandler::Authority_ClearPlayerDependencies() {
}

void UPlayerInteractionHandler::AddSelfInteractions(const AActor* interactionRoot) {
}

void UPlayerInteractionHandler::AddInteraction(UInteractionDefinition* interaction) {
}

UPlayerInteractionHandler::UPlayerInteractionHandler() {
    this->PriorityConeAngle = 50.00f;
    this->BotPriorityConeAngle = 50.00f;
    this->InteractionLayer = EInteractionLayer::VE_Camper;
    this->_hasInteractionRequest = false;
    this->_hasInteractionRequestInBuffer = false;
    this->_interactionToSwapTo = NULL;
    this->_currentInteraction = NULL;
    this->_currentInteractionType = EInputInteractionType::VE_None;
    this->_skillCheck = NULL;
    this->_requestedInterruptionOtherParty = NULL;
    this->_requestedInterruptionDefinition = NULL;
    this->_requestedInterruptionIsInterruptor = false;
    this->_currentInterruptionOtherParty = NULL;
    this->_currentInterruptionDefinition = NULL;
    this->_currentInterruptionIsInterruptor = false;
    this->_interactionInProgress = false;
}

