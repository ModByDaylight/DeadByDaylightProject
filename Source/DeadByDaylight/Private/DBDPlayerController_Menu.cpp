#include "DBDPlayerController_Menu.h"

void ADBDPlayerController_Menu::TogglePlayerReadyState() {
}

void ADBDPlayerController_Menu::SetPlayerReady(bool isReady) {
}

void ADBDPlayerController_Menu::Server_SetReadyToTravel_Implementation() {
}
bool ADBDPlayerController_Menu::Server_SetReadyToTravel_Validate() {
    return true;
}

void ADBDPlayerController_Menu::Server_SetPlayerReady_Implementation(bool isReady) {
}
bool ADBDPlayerController_Menu::Server_SetPlayerReady_Validate(bool isReady) {
    return true;
}

void ADBDPlayerController_Menu::Server_SetPlayerLoadout_Implementation(FPlayerLoadoutData desiredLoadout) {
}
bool ADBDPlayerController_Menu::Server_SetPlayerLoadout_Validate(FPlayerLoadoutData desiredLoadout) {
    return true;
}

void ADBDPlayerController_Menu::Server_SetEquipedPerks_Implementation(const TArray<FName>& perkIds, const TArray<int32>& perkLevels, bool callOnRep) {
}
bool ADBDPlayerController_Menu::Server_SetEquipedPerks_Validate(const TArray<FName>& perkIds, const TArray<int32>& perkLevels, bool callOnRep) {
    return true;
}

void ADBDPlayerController_Menu::Server_SetCustomizationMeshes_Implementation(const TArray<FName>& itemIds) {
}
bool ADBDPlayerController_Menu::Server_SetCustomizationMeshes_Validate(const TArray<FName>& itemIds) {
    return true;
}

void ADBDPlayerController_Menu::Server_SetCustomizationCharm_Implementation(FName charmId, int8 slotIndex) {
}
bool ADBDPlayerController_Menu::Server_SetCustomizationCharm_Validate(FName charmId, int8 slotIndex) {
    return true;
}

void ADBDPlayerController_Menu::Server_SetCharacterLevel_Implementation(int32 characterLevel, int32 prestigeLevel, bool callOnRep) {
}
bool ADBDPlayerController_Menu::Server_SetCharacterLevel_Validate(int32 characterLevel, int32 prestigeLevel, bool callOnRep) {
    return true;
}

void ADBDPlayerController_Menu::Server_SetCharacterData_Implementation(int32 characterIndex, const FPlayerDataSync& playerDataSync) {
}
bool ADBDPlayerController_Menu::Server_SetCharacterData_Validate(int32 characterIndex, const FPlayerDataSync& playerDataSync) {
    return true;
}

void ADBDPlayerController_Menu::Server_GamePresetDataFromClient_Implementation(const FGamePresetData& gameState) {
}
bool ADBDPlayerController_Menu::Server_GamePresetDataFromClient_Validate(const FGamePresetData& gameState) {
    return true;
}

void ADBDPlayerController_Menu::Authority_TogglePlayerReadyState() {
}

void ADBDPlayerController_Menu::Authority_SetPlayerReady(bool isReady) {
}

ADBDPlayerController_Menu::ADBDPlayerController_Menu() {
}

