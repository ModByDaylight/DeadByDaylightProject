#include "DBDGameState.h"
#include "Net/UnrealNetwork.h"
#include "ActorPairQueryEvaluatorComponent.h"
#include "SpecialEventGameplaySpawnerComponent.h"
#include "CharacterCollection.h"
#include "EndGameStateComponent.h"
#include "CollectableCollection.h"
#include "ScourgeHookManagerComponent.h"
#include "RenderingFeaturesSequencer.h"
#include "ServerTimeProviderComponent.h"
#include "InGameAssetPreloaderComponent.h"

class UAkAudioBank;
class ADBDPlayerState_Menu;
class ATotem;
class AInteractable;
class ACamperPlayer;
class APallet;
class ADBDPlayerState;
class ADBDPlayer;
class APawn;
class ASlasherPlayer;
class AWindow;
class ASearchable;
class AReverseBearTrapRemover;
class AMeatHook;
class AHatch;
class AGenerator;
class AEscapeDoor;
class ABaseTrap;

void ADBDGameState::SortOfferings() {
}

void ADBDGameState::SetPlayersReadyToStart(bool playersReadyToStart) {
}

void ADBDGameState::SetKillerIntroCompletedNormalized(float completedAmount) {
}

void ADBDGameState::SetGameLevelEnded(EEndGameReason endGameReason) {
}

void ADBDGameState::SetDisplayMapName(bool display) {
}

void ADBDGameState::SetBuiltLevelData(const FName& themeName, const FName& themeWeather, const FName& audioStateThemes, const FName& audioStateWeather, const FName& audioThemeEvent, const TSoftObjectPtr<UAkAudioBank>& audioThemeSoundBank, const FString& mapName, int32 tileCount, const TArray<FDependency>& levelDependencies, const FName& specialEventId) {
}

void ADBDGameState::Server_UpdateGameRole() {
}

void ADBDGameState::ResetGameLevelStatus() {
}

void ADBDGameState::RemoveTrap(AInteractable* toRemove) {
}

void ADBDGameState::OnRep_SurvivorLeft(int32 oldValue) {
}

void ADBDGameState::OnRep_SessionId() {
}

void ADBDGameState::OnRep_SecondsLeftInLobby(const int32 oldValue) {
}

void ADBDGameState::OnRep_RequiredActivatedGeneratorCount(int32 oldRequiredActivatedGeneratorCount) {
}

void ADBDGameState::OnRep_PlayersReadyToStart(bool oldValue) {
}

void ADBDGameState::OnRep_OnLevelReadyToPlay(bool oldValue) {
}

void ADBDGameState::OnRep_OnGameLevelCreated() {
}

void ADBDGameState::OnRep_ObsessionTarget(ACamperPlayer* previousObsessionTarget) {
}

void ADBDGameState::OnRep_LobbyId() {
}

void ADBDGameState::OnRep_HatchOpened(bool oldValue) {
}

void ADBDGameState::OnRep_GamePresetData() {
}

void ADBDGameState::OnRep_EscapeDoorActivated(bool oldValue) {
}

void ADBDGameState::OnRep_BuildLevelData() {
}

void ADBDGameState::OnRep_ActivatedGeneratorCount(int32 oldValue) {
}

void ADBDGameState::Multicast_UpdateCharacterFromGamePreset_Implementation(ADBDPlayerState_Menu* playerState_Menu, const FGamePresetData& gamePresetData) {
}

void ADBDGameState::Multicast_SetServerLeftGame_Implementation(bool hasServerLeftGame) {
}

void ADBDGameState::Multicast_SetLostServerConnection_Implementation(bool hasLostServerConnection) {
}

void ADBDGameState::Multicast_SetGameLevelLoaded_Implementation(bool gameLevelLoaded) {
}

void ADBDGameState::Multicast_SetGameLevelEnded_Implementation(EEndGameReason endGameReason) {
}

void ADBDGameState::Multicast_SetGameEnded_Implementation(bool hasServerLeftGame) {
}

void ADBDGameState::Multicast_SetBuiltLevelData_Implementation(const FName& themeName, const FName& themeWeather, const FName& audioStateThemes, const FName& audioStateWeather, const FName& audioThemeEvent, const TSoftObjectPtr<UAkAudioBank>& audioThemeSoundBank, const FString& mapName, int32 tileCount, const TArray<FDependency>& levelDependencies, const FName& specialEventId) {
}

void ADBDGameState::Multicast_SendHVSPlusState_Implementation(bool enabled) {
}

void ADBDGameState::Multicast_SendEnsureToClients_Implementation(const FString& ensure) {
}

void ADBDGameState::Multicast_OnGameStarted_Implementation() {
}

bool ADBDGameState::IsPlayerDistributionReady() const {
    return false;
}

bool ADBDGameState::IsOnePlayerLeft() const {
    return false;
}

bool ADBDGameState::IsOfferingReceived() const {
    return false;
}

bool ADBDGameState::IsObsessionTargetAliveInLevel() {
    return false;
}

bool ADBDGameState::IsObsessionTargetAlive() {
    return false;
}

bool ADBDGameState::IsLightingGenerated() const {
    return false;
}

bool ADBDGameState::IsLevelSetupDone() const {
    return false;
}

bool ADBDGameState::IsLevelReadyToPlay() const {
    return false;
}

bool ADBDGameState::IsIntroCompleted() const {
    return false;
}

bool ADBDGameState::IsHatchVisible() const {
    return false;
}

bool ADBDGameState::IsEscapeRequirementCompleted() const {
    return false;
}

bool ADBDGameState::IsEscapeDoorOpen() const {
    return false;
}

bool ADBDGameState::IsEscapeDoorActivated() const {
    return false;
}

void ADBDGameState::IntroCompleted() {
}

TArray<AInteractable*> ADBDGameState::GetTraps() const {
    return TArray<AInteractable*>();
}

TArray<ATotem*> ADBDGameState::GetTotems() const {
    return TArray<ATotem*>();
}

int32 ADBDGameState::GetSurvivorLeft() const {
    return 0;
}

USpecialEventGameplaySpawnerComponent* ADBDGameState::GetSpecialEventGameplaySpawnerComponent() const {
    return NULL;
}

TArray<FSelectedOffering> ADBDGameState::GetSelectedOfferings() const {
    return TArray<FSelectedOffering>();
}

bool ADBDGameState::GetSelectedOffering(int32 index, FSelectedOffering& selectedOffering) const {
    return false;
}

int32 ADBDGameState::GetRequiredActivatedGeneratorCount() const {
    return 0;
}

int32 ADBDGameState::GetRemainingGeneratorsNeeded() const {
    return 0;
}

ADBDPlayerState* ADBDGameState::GetPlayerStateByMirrorsID(const FString& id) const {
    return NULL;
}

ADBDPlayerState* ADBDGameState::GetPlayerStateByIDString(const FString& id) const {
    return NULL;
}

bool ADBDGameState::GetPlayersReadyToStart() const {
    return false;
}

void ADBDGameState::GetPlayerRoleCounts(int32& survivorCount, int32& killerCount, int32& spectatorCount) const {
}

ACamperPlayer* ADBDGameState::GetObsessionTarget() const {
    return NULL;
}

int32 ADBDGameState::GetNumberOfOtherActiveSurvivors(ADBDPlayer* exception) const {
    return 0;
}

int32 ADBDGameState::GetNumberOfActiveSurvivors() const {
    return 0;
}

FName ADBDGameState::GetMapThemeName() const {
    return NAME_None;
}

ADBDPlayerState* ADBDGameState::GetLocalPlayerState() const {
    return NULL;
}

ADBDPlayer* ADBDGameState::GetLocalPlayerPawn() const {
    return NULL;
}

APawn* ADBDGameState::GetLocalPlayerBasePawn() const {
    return NULL;
}

TSoftObjectPtr<UAkAudioBank> ADBDGameState::GetLevelThemeAudioSoundBankAssetPtr() const {
    return NULL;
}

FBuiltLevelData ADBDGameState::GetLevelData() const {
    return FBuiltLevelData{};
}

float ADBDGameState::GetKillerIntroCompletedNormalized() const {
    return 0.0f;
}

ASlasherPlayer* ADBDGameState::GetKiller() const {
    return NULL;
}

bool ADBDGameState::GetIsGameEnded() const {
    return false;
}

TArray<AWindow*> ADBDGameState::GetInGameWindows() const {
    return TArray<AWindow*>();
}

TArray<ASearchable*> ADBDGameState::GetInGameSearchables() const {
    return TArray<ASearchable*>();
}

TArray<AReverseBearTrapRemover*> ADBDGameState::GetInGameReverseBearTrapRemovers() const {
    return TArray<AReverseBearTrapRemover*>();
}

TArray<APallet*> ADBDGameState::GetInGamePallets() const {
    return TArray<APallet*>();
}

TArray<AMeatHook*> ADBDGameState::GetInGameMeatHooks() const {
    return TArray<AMeatHook*>();
}

TArray<AHatch*> ADBDGameState::GetInGameHatches() const {
    return TArray<AHatch*>();
}

TArray<AGenerator*> ADBDGameState::GetInGameGenerators() const {
    return TArray<AGenerator*>();
}

TArray<AEscapeDoor*> ADBDGameState::GetInGameEscapeDoors() const {
    return TArray<AEscapeDoor*>();
}

TArray<ABaseTrap*> ADBDGameState::GetInGameBaseTraps() const {
    return TArray<ABaseTrap*>();
}

bool ADBDGameState::GetGameLevelLoaded() const {
    return false;
}

UEndGameStateComponent* ADBDGameState::GetEndGameStateComponent() const {
    return NULL;
}

UCollectableCollection* ADBDGameState::GetCollectableCollection() const {
    return NULL;
}

UCharacterCollection* ADBDGameState::GetCharacterCollection() const {
    return NULL;
}

void ADBDGameState::CallOnSlasherSet(FOnSlasherSetDelegate callback) {
}

void ADBDGameState::CallOnLevelReadyToPlay(ADBDGameState::FOnLevelReadyToPlayDelegate callback) {
}

void ADBDGameState::CallOnIntroComplete(ADBDGameState::FOnIntroCompleteDelegate callback) {
}

void ADBDGameState::BroadcastOnSetBuildLevelData() {
}

void ADBDGameState::Authority_SetSurvivorLeft(int32 survivorRemaining) {
}

void ADBDGameState::Authority_SetLevelReadyToPlay() {
}

void ADBDGameState::Authority_SetHatchOpen(bool opened) {
}

void ADBDGameState::Authority_SetGameSelectedOffering(const TArray<FSelectedOffering>& offerings) {
}

void ADBDGameState::Authority_SetGameLevelLoaded() {
}

void ADBDGameState::Authority_SetGameLevelEnded(EEndGameReason endGameReason) {
}

void ADBDGameState::Authority_SetGameLevelCreated() {
}

void ADBDGameState::Authority_SetEscapeDoorOpened(bool opened) {
}

void ADBDGameState::Authority_SetAllPlayerLoaded() {
}

void ADBDGameState::Authority_EvaluateObsessionTarget(ADBDPlayer* potentialTarget) {
}

void ADBDGameState::Authority_EscapeThroughHatch() {
}

void ADBDGameState::Authority_EnableObsession() {
}

void ADBDGameState::Authority_DeactivateAI() {
}

void ADBDGameState::AddTrap(AInteractable* toAdd) {
}

void ADBDGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADBDGameState, CamperDeadCount);
    DOREPLIFETIME(ADBDGameState, CamperInMeatLockerCount);
    DOREPLIFETIME(ADBDGameState, CamperEscaped);
    DOREPLIFETIME(ADBDGameState, WaitingForEscape);
    DOREPLIFETIME(ADBDGameState, CamperCount);
    DOREPLIFETIME(ADBDGameState, LeaveSpectateRequested);
    DOREPLIFETIME(ADBDGameState, SecondsLeftInLobby);
    DOREPLIFETIME(ADBDGameState, _playersReadyToStart);
    DOREPLIFETIME(ADBDGameState, _builtLevelData);
    DOREPLIFETIME(ADBDGameState, _levelOfferings);
    DOREPLIFETIME(ADBDGameState, _sessionId);
    DOREPLIFETIME(ADBDGameState, _lobbyId);
    DOREPLIFETIME(ADBDGameState, _activatedGeneratorCount);
    DOREPLIFETIME(ADBDGameState, _requiredActivatedGeneratorCount);
    DOREPLIFETIME(ADBDGameState, _escapeDoorActivated);
    DOREPLIFETIME(ADBDGameState, _escapeDoorOpened);
    DOREPLIFETIME(ADBDGameState, _isHatchOpen);
    DOREPLIFETIME(ADBDGameState, _levelReadyToPlay);
    DOREPLIFETIME(ADBDGameState, _playerDistributionReady);
    DOREPLIFETIME(ADBDGameState, _usingWeakenedMechanic);
    DOREPLIFETIME(ADBDGameState, _survivorLeft);
    DOREPLIFETIME(ADBDGameState, _obsessionTarget);
    DOREPLIFETIME(ADBDGameState, _gamePresetData);
    DOREPLIFETIME(ADBDGameState, _gameLevelCreated);
    DOREPLIFETIME(ADBDGameState, _matchStartTime);
    DOREPLIFETIME(ADBDGameState, _isServerDedicated);
    DOREPLIFETIME(ADBDGameState, _maxSurvivorCount);
    DOREPLIFETIME(ADBDGameState, _serverBuildVersion);
}

ADBDGameState::ADBDGameState() {
    this->_specialEventGameplaySpawnerComponent = CreateDefaultSubobject<USpecialEventGameplaySpawnerComponent>(TEXT("SpecialEventSpawnerComponent"));
    this->CamperDeadCount = 0;
    this->CamperInMeatLockerCount = 0;
    this->CamperEscaped = 0;
    this->WaitingForEscape = 0;
    this->CamperCount = 0;
    this->LeaveSpectateRequested = false;
    this->SecondsLeftInLobby = -1;
    this->Slasher = NULL;
    this->_renderingSequencer = CreateDefaultSubobject<URenderingFeaturesSequencer>(TEXT("RenderingSequencer"));
    this->_camperHookedInBasementCount = 0;
    this->_playersReadyToStart = false;
    this->_clipManager = NULL;
    this->_activatedGeneratorCount = 0;
    this->_requiredActivatedGeneratorCount = -1;
    this->_escapeDoorActivated = false;
    this->_escapeDoorOpened = false;
    this->_isHatchOpen = false;
    this->_levelReadyToPlay = false;
    this->_playerDistributionReady = false;
    this->_usingWeakenedMechanic = false;
    this->_survivorLeft = 0;
    this->_camperEscapedThroughHatch = 0;
    this->_obsessionTarget = NULL;
    this->_cachedObsessionEscaped = false;
    this->_gameLevelLoaded = false;
    this->_gameLevelCreated = false;
    this->_gameLevelEnded = false;
    this->_gameEndedReason = EEndGameReason::None;
    this->_endGameState = CreateDefaultSubobject<UEndGameStateComponent>(TEXT("EndGameState"));
    this->_scourgeHookManager = CreateDefaultSubobject<UScourgeHookManagerComponent>(TEXT("ScourgeHookManager"));
    this->_actorPairQueryEvaluatorComponent = CreateDefaultSubobject<UActorPairQueryEvaluatorComponent>(TEXT("distanceTracker"));
    this->_characterCollection = CreateDefaultSubobject<UCharacterCollection>(TEXT("CharacterCollection"));
    this->_collectableCollection = CreateDefaultSubobject<UCollectableCollection>(TEXT("CollectableCollection"));
    this->_serverTimeProvider = CreateDefaultSubobject<UServerTimeProviderComponent>(TEXT("ServerTimerProvider"));
    this->_inGameAssetPreloaderComponent = CreateDefaultSubobject<UInGameAssetPreloaderComponent>(TEXT("In Game Asset Pre Loader"));
    this->_isServerDedicated = false;
    this->_maxSurvivorCount = 4;
}

