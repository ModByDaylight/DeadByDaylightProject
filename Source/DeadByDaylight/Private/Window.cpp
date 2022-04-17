#include "Window.h"
#include "Net/UnrealNetwork.h"
#include "BlockableComponent.h"
#include "LocalPlayerTrackerComponent.h"
#include "DBDNavEvadeLoopComponent.h"

class UChildActorComponent;
class ADBDPlayer;
class UInteractionDefinition;
class UMaterialHelper;
class UAkComponent;

void AWindow::OnRep_blockedByLevel() {
}

void AWindow::OnLocallyObservedChanged() {
}


void AWindow::NotifyOnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction) {
}

bool AWindow::IsWindowVaultBlockedForAnyPlayer() const {
    return false;
}

bool AWindow::IsWindowVaultBlockedFor(const ADBDPlayer* player) const {
    return false;
}

UMaterialHelper* AWindow::GetMaterialHelper_Implementation() const {
    return NULL;
}

UChildActorComponent* AWindow::GetEntityAssets_Implementation() const {
    return NULL;
}

bool AWindow::GetBlockedByLevel() const {
    return false;
}

UAkComponent* AWindow::GetAudioComponent_Implementation() const {
    return NULL;
}

void AWindow::ForceBlockLocalWindowInteraction(bool blockInteraction) {
}

void AWindow::Authority_SetBlockedByLevel(bool isBlockedByLevel) {
}

void AWindow::Authority_OnVaultInternal(ADBDPlayer* player, bool canBlockVault) {
}

void AWindow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWindow, _isBlockedByLevel);
}

AWindow::AWindow() {
    this->_isBlockedByLevel = false;
    this->_entityAssets = NULL;
    this->_materialHelper = NULL;
    this->_akAudioWindow = NULL;
    this->akAudioEventWindowsBlocStart = NULL;
    this->akAudioEventWindowsBlocStop = NULL;
    this->_localPlayerTracker = CreateDefaultSubobject<ULocalPlayerTrackerComponent>(TEXT("LocalPlayerTracker"));
    this->_blockableComponent = CreateDefaultSubobject<UBlockableComponent>(TEXT("BlockableComponent"));
    this->_navEvadeLoopComponent = CreateDefaultSubobject<UDBDNavEvadeLoopComponent>(TEXT("NavEvadeLoopComponent"));
}

