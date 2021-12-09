#include "DBDPlayerState_Menu.h"

void ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole forRole, int32 id, const TArray<FName>& customizationItemIds) {
}
bool ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomizationMesh_Validate(EPlayerRole forRole, int32 id, const TArray<FName>& customizationItemIds) {
    return true;
}

void ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole forRole, int32 id, const TArray<FCharmIdSlot>& customizationCharms) {
}
bool ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomizationCharms_Validate(EPlayerRole forRole, int32 id, const TArray<FCharmIdSlot>& customizationCharms) {
    return true;
}

void ADBDPlayerState_Menu::Server_SetEquipment_Implementation(ELoadoutSlot slot, FName itemId, bool callOnRep) {
}
bool ADBDPlayerState_Menu::Server_SetEquipment_Validate(ELoadoutSlot slot, FName itemId, bool callOnRep) {
    return true;
}

void ADBDPlayerState_Menu::Multicast_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole forRole, int32 id, const TArray<FName>& customizationItemIds) {
}

void ADBDPlayerState_Menu::Multicast_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole forRole, int32 id, const TArray<FCharmIdSlot>& customizationCharms) {
}

ADBDPlayerState_Menu::ADBDPlayerState_Menu() {
}

