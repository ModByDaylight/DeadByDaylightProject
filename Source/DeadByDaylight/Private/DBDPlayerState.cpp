#include "DBDPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "GameplayNotificationManager.h"
#include "RitualHandlerComponent.h"
#include "AchievementHandlerComponent.h"
#include "CharacterStatsHandlerComponent.h"

class AActor;

void ADBDPlayerState::UpdateOngoingScores() {
}

void ADBDPlayerState::Server_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData) {
}
bool ADBDPlayerState::Server_SetSelectedCharacterId_Validate(EPlayerRole forRole, int32 id, bool updateDisplayData) {
    return true;
}

void ADBDPlayerState::Server_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch) {
}
bool ADBDPlayerState::Server_SetPlayerGameState_Validate(EGameState newGameState, bool isEscapeHatch) {
    return true;
}

void ADBDPlayerState::Server_SetGameRole_Implementation(EPlayerRole newPlayerRole) {
}
bool ADBDPlayerState::Server_SetGameRole_Validate(EPlayerRole newPlayerRole) {
    return true;
}

void ADBDPlayerState::Server_SelectSurvivor_Implementation(int32 camperIndex) {
}
bool ADBDPlayerState::Server_SelectSurvivor_Validate(int32 camperIndex) {
    return true;
}

void ADBDPlayerState::Server_SelectKiller_Implementation(int32 slasherIndex) {
}
bool ADBDPlayerState::Server_SelectKiller_Validate(int32 slasherIndex) {
    return true;
}

void ADBDPlayerState::Server_HandleScoreEvent_Implementation(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData) {
}
bool ADBDPlayerState::Server_HandleScoreEvent_Validate(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData) {
    return true;
}

void ADBDPlayerState::OnRep_DisplayData() {
}

void ADBDPlayerState::OnRep_CustomizationData() {
}

void ADBDPlayerState::OnRep_BotDifficultyLevel() {
}

void ADBDPlayerState::Multicast_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData) {
}

void ADBDPlayerState::Multicast_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch) {
}

void ADBDPlayerState::Multicast_SetInParadise_Implementation() {
}
bool ADBDPlayerState::Multicast_SetInParadise_Validate() {
    return true;
}

void ADBDPlayerState::Multicast_SetAsLeftMatch_Implementation() {
}

void ADBDPlayerState::Multicast_SetAsDisconnected_Implementation() {
}

void ADBDPlayerState::Multicast_FireGameplayEventWithScore_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore) {
}
bool ADBDPlayerState::Multicast_FireGameplayEventWithScore_Validate(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore) {
    return true;
}

void ADBDPlayerState::Multicast_FireGameplayEvent_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target) {
}
bool ADBDPlayerState::Multicast_FireGameplayEvent_Validate(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target) {
    return true;
}

bool ADBDPlayerState::IsInFinishedPlayingState() const {
    return false;
}

bool ADBDPlayerState::HasHappened(EDBDScoreTypes gameplayEventType, float maxSecondsAgo) const {
    return false;
}

bool ADBDPlayerState::HasEscaped() const {
    return false;
}

EGameState ADBDPlayerState::GetPlayerGameState() const {
    return EGameState::VE_Active;
}

EPlayerRole ADBDPlayerState::GetGameRole() const {
    return EPlayerRole::VE_None;
}

UGameplayNotificationManager* ADBDPlayerState::GetGameplayNotificationManager() const {
    return NULL;
}

void ADBDPlayerState::FireScoreEvent(EDBDScoreTypes scoreType, float percentToAward) {
}

void ADBDPlayerState::FireActiveStatusViewEvent(FName statusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource) {
}

void ADBDPlayerState::FireActiveStatusEffectEvent(FName statusEffectID, float percentage, int32 iconFilePathIndex, int32 levelToDisplay) {
}

void ADBDPlayerState::Client_UpdateWallet_Implementation(const FString& currencyId, int32 amount) {
}

void ADBDPlayerState::Client_SetInParadise_Implementation() {
}

void ADBDPlayerState::Client_SetGameRole_Implementation(EPlayerRole newRole) {
}
bool ADBDPlayerState::Client_SetGameRole_Validate(EPlayerRole newRole) {
    return true;
}

void ADBDPlayerState::Client_RemoveItemFromInventory_Implementation(FName toRemove, bool updateLoadout) {
}

void ADBDPlayerState::Client_RemotelyDispatchGameEventWithScore_Implementation(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore) {
}
bool ADBDPlayerState::Client_RemotelyDispatchGameEventWithScore_Validate(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore) {
    return true;
}

void ADBDPlayerState::Client_RemotelyDispatchGameEvent_Implementation(const FGameplayTag& gameEventType, const FGameEventData& gameEventData) {
}
bool ADBDPlayerState::Client_RemotelyDispatchGameEvent_Validate(const FGameplayTag& gameEventType, const FGameEventData& gameEventData) {
    return true;
}

void ADBDPlayerState::Client_HandleEscapeScoreEvent_Implementation() {
}

void ADBDPlayerState::Client_AtlantaUpdateInventoryItem_Implementation(const FName& itemid, int32 newCount) {
}

void ADBDPlayerState::Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData) {
}

void ADBDPlayerState::Authority_ForceEndOngoingScoreEvent(EDBDScoreTypes scoreType) {
}

void ADBDPlayerState::Authority_ForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType) {
}

void ADBDPlayerState::Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag) {
}

void ADBDPlayerState::Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag) {
}

void ADBDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADBDPlayerState, MirrorsId);
    DOREPLIFETIME(ADBDPlayerState, _difficultyLevel);
    DOREPLIFETIME(ADBDPlayerState, IsPlayerReady);
    DOREPLIFETIME(ADBDPlayerState, GameRole);
    DOREPLIFETIME(ADBDPlayerState, CamperData);
    DOREPLIFETIME(ADBDPlayerState, SlasherData);
    DOREPLIFETIME(ADBDPlayerState, PlayerData);
    DOREPLIFETIME(ADBDPlayerState, PlayerCustomization);
    DOREPLIFETIME(ADBDPlayerState, _inParadise);
    DOREPLIFETIME(ADBDPlayerState, _platformAccountId);
    DOREPLIFETIME(ADBDPlayerState, _selectedCamperIndex);
    DOREPLIFETIME(ADBDPlayerState, _selectedSlasherIndex);
    DOREPLIFETIME(ADBDPlayerState, _platform);
    DOREPLIFETIME(ADBDPlayerState, _provider);
    DOREPLIFETIME(ADBDPlayerState, _crossplayAllowed);
    DOREPLIFETIME(ADBDPlayerState, _offNetworkFlag);
    DOREPLIFETIME(ADBDPlayerState, _gameLevelLoaded);
    DOREPLIFETIME(ADBDPlayerState, _showPortraitBorder);
    DOREPLIFETIME(ADBDPlayerState, _hasActiveSubscription);
}

ADBDPlayerState::ADBDPlayerState() {
    this->_difficultyLevel = EAIDifficultyLevel::Max;
    this->IsPlayerReady = false;
    this->GameRole = EPlayerRole::VE_None;
    this->RitualHandler = CreateDefaultSubobject<URitualHandlerComponent>(TEXT("RitualHandler"));
    this->DedicatedServerHandler = NULL;
    this->_inParadise = false;
    this->_gameplayNotificationManager = CreateDefaultSubobject<UGameplayNotificationManager>(TEXT("GameplayNotificationManager"));
    this->_achievementHandler = CreateDefaultSubobject<UAchievementHandlerComponent>(TEXT("AchievementHandler"));
    this->_characterStatsHandler = CreateDefaultSubobject<UCharacterStatsHandlerComponent>(TEXT("CharacterStatsHandler"));
    this->_selectedCamperIndex = -1;
    this->_selectedSlasherIndex = -1;
    this->_platform = EPlatformFlag::None;
    this->_provider = EProviderFlag::None;
    this->_crossplayAllowed = false;
    this->_offNetworkFlag = false;
    this->_gameLevelLoaded = false;
    this->_showPortraitBorder = false;
    this->_hasActiveSubscription = false;
}

