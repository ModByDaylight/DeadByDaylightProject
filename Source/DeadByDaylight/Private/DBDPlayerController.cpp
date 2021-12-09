#include "DBDPlayerController.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayerState;
class ADBDPlayer;
class APawn;

void ADBDPlayerController::SetShouldMoveInputReplicateToServer(bool shouldReplicate) {
}

void ADBDPlayerController::ServerViewPlayer_Implementation(const FString& playerName) {
}
bool ADBDPlayerController::ServerViewPlayer_Validate(const FString& playerName) {
    return true;
}

void ADBDPlayerController::Server_SetSpectatorModeInEditor_Implementation(bool on, ADBDPlayerState* spectatingPlayerState) {
}
bool ADBDPlayerController::Server_SetSpectatorModeInEditor_Validate(bool on, ADBDPlayerState* spectatingPlayerState) {
    return true;
}

void ADBDPlayerController::Server_SetSpectatorMode_Implementation(bool on) {
}
bool ADBDPlayerController::Server_SetSpectatorMode_Validate(bool on) {
    return true;
}

void ADBDPlayerController::Server_SetReadyToTravel_Implementation() {
}
bool ADBDPlayerController::Server_SetReadyToTravel_Validate() {
    return true;
}

void ADBDPlayerController::Server_SetHasMoveInputThisFrame_Implementation(bool hasMoveInputThisFrame) {
}
bool ADBDPlayerController::Server_SetHasMoveInputThisFrame_Validate(bool hasMoveInputThisFrame) {
    return true;
}

void ADBDPlayerController::Server_RequestEndGame_Implementation() {
}
bool ADBDPlayerController::Server_RequestEndGame_Validate() {
    return true;
}

void ADBDPlayerController::Server_LeaveGame_Implementation(bool joiningLobby) {
}
bool ADBDPlayerController::Server_LeaveGame_Validate(bool joiningLobby) {
    return true;
}

void ADBDPlayerController::Server_DebugSend_Implementation(const FString& data) {
}
bool ADBDPlayerController::Server_DebugSend_Validate(const FString& data) {
    return true;
}

void ADBDPlayerController::Server_ActivateAIAll_Implementation(bool activate, int32 playerRank, int8 playerRole) {
}
bool ADBDPlayerController::Server_ActivateAIAll_Validate(bool activate, int32 playerRank, int8 playerRole) {
    return true;
}

void ADBDPlayerController::Server_ActivateAI_Implementation(bool activate, int32 playerRank) {
}
bool ADBDPlayerController::Server_ActivateAI_Validate(bool activate, int32 playerRank) {
    return true;
}

void ADBDPlayerController::OnRep_Fence() {
}

bool ADBDPlayerController::MobileJoystickInput_Pressed(int32 joystickIndex) const {
    return false;
}

bool ADBDPlayerController::IsSpectating() const {
    return false;
}

void ADBDPlayerController::ImplementRunLockMechanic() {
}

ADBDPlayerState* ADBDPlayerController::GetSpectatedPlayerState() const {
    return NULL;
}

ADBDPlayer* ADBDPlayerController::GetSpectatedPlayer() const {
    return NULL;
}

ADBDPlayer* ADBDPlayerController::GetControlledPlayer() const {
    return NULL;
}

APawn* ADBDPlayerController::GetAIPawn() const {
    return NULL;
}

void ADBDPlayerController::Client_SpectateAI_Implementation(APawn* aiPawn) {
}

void ADBDPlayerController::Client_SetSpectatorModeInEditor_Implementation(bool on, ADBDPlayerState* spectatingPlayerState) {
}

void ADBDPlayerController::Client_SetSpectatorMode_Implementation(bool on) {
}

void ADBDPlayerController::ActivateAI(bool activate, int32 playerRank) {
}

void ADBDPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADBDPlayerController, _theFence);
}

ADBDPlayerController::ADBDPlayerController() {
    this->_theFence = NULL;
    this->_inputHandler = NULL;
    this->_aiPawn = NULL;
    this->_controllerGameRole = EPlayerRole::VE_None;
}

