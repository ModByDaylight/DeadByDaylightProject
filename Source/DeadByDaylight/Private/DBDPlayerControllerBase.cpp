#include "DBDPlayerControllerBase.h"
#include "Net/UnrealNetwork.h"

void ADBDPlayerControllerBase::Server_UpdateReplicatedPips_Implementation(int32 pipsToAdd) {
}
bool ADBDPlayerControllerBase::Server_UpdateReplicatedPips_Validate(int32 pipsToAdd) {
    return true;
}

void ADBDPlayerControllerBase::Server_SendMessage_Implementation(const FString& message) {
}
bool ADBDPlayerControllerBase::Server_SendMessage_Validate(const FString& message) {
    return true;
}

void ADBDPlayerControllerBase::Server_SendClientAuthentication_Implementation(const FString& authClientTicket, uint64 steamID, uint32 ticketLength) {
}
bool ADBDPlayerControllerBase::Server_SendClientAuthentication_Validate(const FString& authClientTicket, uint64 steamID, uint32 ticketLength) {
    return true;
}

void ADBDPlayerControllerBase::Server_ReceivePlayerProfile_Implementation(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout) {
}
bool ADBDPlayerControllerBase::Server_ReceivePlayerProfile_Validate(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout) {
    return true;
}

void ADBDPlayerControllerBase::Server_EACMessageFromClient_Implementation(const TArray<uint8>& message, uint32 messageLength) {
}
bool ADBDPlayerControllerBase::Server_EACMessageFromClient_Validate(const TArray<uint8>& message, uint32 messageLength) {
    return true;
}

void ADBDPlayerControllerBase::Server(const FString& commandLine) {
}

void ADBDPlayerControllerBase::DBD_UpdateLocalStats() {
}

void ADBDPlayerControllerBase::DBD_SetCurrentCharacterPrestigeDatesPast() {
}

void ADBDPlayerControllerBase::DBD_SetCurrentCharacterPrestigeDatesNow() {
}

void ADBDPlayerControllerBase::DBD_SetCurrentCharacterPrestigeDatesFuture() {
}

void ADBDPlayerControllerBase::DBD_FireTestScore(int32 category, float value) {
}

void ADBDPlayerControllerBase::DBD_FillScoreCategory(int32 category) {
}

void ADBDPlayerControllerBase::DBD_FillAllScoreCategories() {
}

void ADBDPlayerControllerBase::DBD_DebugSendChatMessage(const FString& msg) {
}

void ADBDPlayerControllerBase::DBD_BuildFromTile(int32 matrixX, int32 matrixY, int32 rotation, const FString& name) {
}

void ADBDPlayerControllerBase::DBD_BuildFromSeed(int32 seed) {
}

void ADBDPlayerControllerBase::DBD_BuildFromPremadeMap(const FString& map) {
}

void ADBDPlayerControllerBase::DBD_BuildFromPlayerCount(int32 count) {
}

void ADBDPlayerControllerBase::DBD_BuildFromMap(const FString& map) {
}

void ADBDPlayerControllerBase::Client_ValidateServer_Implementation() {
}

void ADBDPlayerControllerBase::Client_SendWarning_Implementation(bool penaltyStarts, float seconds) {
}

void ADBDPlayerControllerBase::Client_SendServerAuthentication_Implementation(const FString& authServerTicket, uint64 steamID, uint32 ticketLength) {
}
bool ADBDPlayerControllerBase::Client_SendServerAuthentication_Validate(const FString& authServerTicket, uint64 steamID, uint32 ticketLength) {
    return true;
}

void ADBDPlayerControllerBase::Client_SendLogs_Implementation(const TArray<FString>& ensures) {
}

void ADBDPlayerControllerBase::Client_RequestPlayerProfile_Implementation() {
}

void ADBDPlayerControllerBase::Client_GameEnded_Implementation() {
}

void ADBDPlayerControllerBase::Client_FinishedPlaying_Implementation() {
}

void ADBDPlayerControllerBase::Client_EACMessageFromServer_Implementation(const TArray<uint8>& message, uint32 messageLength) {
}

void ADBDPlayerControllerBase::CallConsoleCmdOnServer_Server_Implementation(const FString& commandLine) {
}
bool ADBDPlayerControllerBase::CallConsoleCmdOnServer_Server_Validate(const FString& commandLine) {
    return true;
}

void ADBDPlayerControllerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADBDPlayerControllerBase, _mainCharacter);
}

ADBDPlayerControllerBase::ADBDPlayerControllerBase() {
    this->_mainCharacter = NULL;
}

