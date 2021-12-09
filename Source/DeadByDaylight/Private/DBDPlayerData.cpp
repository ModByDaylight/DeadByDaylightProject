#include "DBDPlayerData.h"
#include "Net/UnrealNetwork.h"

void UDBDPlayerData::SetRenderingFeaturesCompleted() {
}

void UDBDPlayerData::SetLoadoutSpawned() {
}

void UDBDPlayerData::SetIntroCompleted() {
}

void UDBDPlayerData::SetCampaignDataSynced() {
}

void UDBDPlayerData::Server_SetIntroCompleted_Implementation() {
}
bool UDBDPlayerData::Server_SetIntroCompleted_Validate() {
    return true;
}

void UDBDPlayerData::Server_RenderingFeaturesCompleted_Implementation() {
}
bool UDBDPlayerData::Server_RenderingFeaturesCompleted_Validate() {
    return true;
}

void UDBDPlayerData::Server_LoadoutSpawned_Implementation() {
}
bool UDBDPlayerData::Server_LoadoutSpawned_Validate() {
    return true;
}

void UDBDPlayerData::Server_CampaignDataSynced_Implementation() {
}
bool UDBDPlayerData::Server_CampaignDataSynced_Validate() {
    return true;
}

bool UDBDPlayerData::IsLoadoutSpawned() const {
    return false;
}

bool UDBDPlayerData::IsIntroCompleted() {
    return false;
}

bool UDBDPlayerData::IsCampaignDataSynced() const {
    return false;
}

bool UDBDPlayerData::GetUseInputPressed() const {
    return false;
}

bool UDBDPlayerData::GetLeftRightInputMashed() const {
    return false;
}

bool UDBDPlayerData::GetInteractionInputMashed() const {
    return false;
}

FRotator UDBDPlayerData::GetControlRotation() const {
    return FRotator{};
}

bool UDBDPlayerData::DidRenderingFeaturesComplete() const {
    return false;
}

void UDBDPlayerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDBDPlayerData, _controlRotation);
}

UDBDPlayerData::UDBDPlayerData() {
}

