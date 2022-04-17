#include "DBDGameInstance.h"
#include "ShopManager.h"

class USoftBanManager;
class ADBDPlayer;
class UActorKnowledgeCollection;
class AActor;
class UMapActorDB;
class ULightingInterpolator;
class USpecialEventManager;
class UDBDTimeUtilities;
class URankManager;
class UPlayerNameRegistration;
class UPrimitiveCollection;
class UDBDPlayerLevelManager;
class ADBDPlayerState;
class APlayerController;
class ULocalPlayer;
class ULocalEventManager;
class UGameEventDispatcher;
class ULightingHelper;
class ABaseSky;
class ACamperPlayer;
class UInventoryHandler;
class ASlasherPlayer;
class UWorld;
class UDecalSpawnerCollection;
class UConsentManager;
class UCinematicManager;
class UBonusPointEventsManager;

void UDBDGameInstance::StartOfferingSequence() {
}

void UDBDGameInstance::SimulateOfferingSequence(const TArray<FName>& offerings, bool playSequence) {
}

void UDBDGameInstance::RemoveActorKnowledgeCollection(UActorKnowledgeCollection* collection) {
}

void UDBDGameInstance::OnTimeTravelComplete(bool success, const FString& date) const {
}

bool UDBDGameInstance::IsActorKnown(const ADBDPlayer* knowledgePossessor, AActor* possiblyKnownActor) const {
    return false;
}

bool UDBDGameInstance::HasOfferingOfType(EOfferingEffectType type, int32 playerId, FName tag) const {
    return false;
}

bool UDBDGameInstance::HasOfferingByType(EOfferingEffectType type) const {
    return false;
}

void UDBDGameInstance::GotoSplashScreen(bool showDefaultDialogueOnSplashScreen) {
}

UDBDTimeUtilities* UDBDGameInstance::GetTimeUtils() const {
    return NULL;
}

USpecialEventManager* UDBDGameInstance::GetSpecialEventManager() const {
    return NULL;
}

USoftBanManager* UDBDGameInstance::GetSoftBanManager() const {
    return NULL;
}

URankManager* UDBDGameInstance::GetRankManager() const {
    return NULL;
}

UPlayerNameRegistration* UDBDGameInstance::GetPlayerNameRegistration() const {
    return NULL;
}

UDBDPlayerLevelManager* UDBDGameInstance::GetPlayerLevelManager() const {
    return NULL;
}

int32 UDBDGameInstance::GetMaxSurvivorCount() const {
    return 0;
}

UMapActorDB* UDBDGameInstance::GetMapActorDB() const {
    return NULL;
}

ADBDPlayerState* UDBDGameInstance::GetLocalPlayerState() const {
    return NULL;
}

APlayerController* UDBDGameInstance::GetLocalPlayerController() const {
    return NULL;
}

ULocalPlayer* UDBDGameInstance::GetLocalPlayer() const {
    return NULL;
}

ADBDPlayer* UDBDGameInstance::GetLocallyControlledCharacter() const {
    return NULL;
}

ULocalEventManager* UDBDGameInstance::GetLocalEventManager() const {
    return NULL;
}

ULightingInterpolator* UDBDGameInstance::GetLightInterpolator() {
    return NULL;
}

ULightingHelper* UDBDGameInstance::GetLightingHelper() {
    return NULL;
}

ABaseSky* UDBDGameInstance::GetLevelLighting() {
    return NULL;
}

UInventoryHandler* UDBDGameInstance::GetInventoryHandler() const {
    return NULL;
}

TArray<ACamperPlayer*> UDBDGameInstance::GetInGameSurvivors() const {
    return TArray<ACamperPlayer*>();
}

TArray<ADBDPlayer*> UDBDGameInstance::GetInGamePlayers() const {
    return TArray<ADBDPlayer*>();
}

TArray<ASlasherPlayer*> UDBDGameInstance::GetInGameKillers() const {
    return TArray<ASlasherPlayer*>();
}

ASlasherPlayer* UDBDGameInstance::GetInGameKiller() const {
    return NULL;
}

void UDBDGameInstance::GetInGameAliveSurvivors(TArray<ACamperPlayer*>& outPlayingSurvivors) const {
}

UGameEventDispatcher* UDBDGameInstance::GetGameEventDispatcher() const {
    return NULL;
}

UDecalSpawnerCollection* UDBDGameInstance::GetDecalSpawnerCollection() const {
    return NULL;
}

int32 UDBDGameInstance::GetDeadOrDisconnectedCampersCount(ADBDPlayerState* exception) const {
    return 0;
}

UConsentManager* UDBDGameInstance::GetConsentManager() const {
    return NULL;
}

UCinematicManager* UDBDGameInstance::GetCinematicManager() const {
    return NULL;
}

FName UDBDGameInstance::GetCharacterDefaultItem(int32 inCharacterIndex) {
    return NAME_None;
}

UPrimitiveCollection* UDBDGameInstance::GetCharacterClippingPrimitiveCollection() const {
    return NULL;
}

UBonusPointEventsManager* UDBDGameInstance::GetBonusPointEventsManager() const {
    return NULL;
}

void UDBDGameInstance::ForceCloseGame() {
}

void UDBDGameInstance::EndLoadingScreen(UWorld* loadedWorld) {
}

void UDBDGameInstance::DBD_UpdateSteamInventory() {
}

void UDBDGameInstance::DBD_ToggleOnlineRole() {
}

void UDBDGameInstance::DBD_ToggleLightingLoaded() {
}

void UDBDGameInstance::DBD_TestTickedDiceRoll(float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier) {
}

void UDBDGameInstance::DBD_TestSaveFile(const FString& name) {
}

void UDBDGameInstance::DBD_TestRegion() {
}

void UDBDGameInstance::DBD_TestDiceRoll(float BaseProbability, float MultiplicativeModifier, float AdditiveModifier) {
}

void UDBDGameInstance::DBD_SetStatsUploadEnabled(bool enabled) {
}

void UDBDGameInstance::DBD_SetFearMarketDate(const FString& dateString) {
}

void UDBDGameInstance::DBD_ResetSaveGameInventory() {
}

void UDBDGameInstance::DBD_ResetSaveData() {
}

void UDBDGameInstance::DBD_ResetCurrentAchievementStats(bool andUpload, bool andUpdateData) {
}

void UDBDGameInstance::DBD_ResetCurrentAchievementStat(FName statName, bool andUpload) {
}

void UDBDGameInstance::DBD_ResetAllRituals() {
}

void UDBDGameInstance::DBD_RemoveRitual(FName toRemove) {
}

void UDBDGameInstance::DBD_PrintAudioConfig() const {
}

void UDBDGameInstance::DBD_PIXEndCapture() {
}

void UDBDGameInstance::DBD_PIXBeginCapture() {
}

void UDBDGameInstance::DBD_LogBloodWebDefinition() {
}

void UDBDGameInstance::DBD_GetRegion() {
}

void UDBDGameInstance::DBD_GenerateNewRitual(FName name, int32 characterIndex) {
}

void UDBDGameInstance::DBD_GenerateNewRandomRitual() {
}

void UDBDGameInstance::DBD_GenerateBloodWeb(int32 level) {
}

void UDBDGameInstance::DBD_ForceSave() {
}

void UDBDGameInstance::DBD_ForceLoad() {
}

void UDBDGameInstance::DBD_DumpSessions() {
}

void UDBDGameInstance::DBD_DisplayCurrentAchievementStat(FName statName) {
}

void UDBDGameInstance::DBD_DestroySteamInventory() {
}

void UDBDGameInstance::DBD_DeleteLocalSaveFile() {
}

void UDBDGameInstance::DBD_ClaimRitualRewardAtIndex(int32 index) {
}

void UDBDGameInstance::DBD_ClaimRitualReward(FName name) {
}

void UDBDGameInstance::DBD_CheckForNewContent(const FString& debugGameVersion, bool forceDisplay) {
}

void UDBDGameInstance::DBD_ChangeSteamOverlayPosition(int32 position, int32 verticalOffset, int32 horizontalOffset) {
}

void UDBDGameInstance::DBD_AssignNewRitual() {
}

void UDBDGameInstance::DBD_ApplyNoMist() {
}

void UDBDGameInstance::DBD_ApplyMist(const float fogModifier) {
}

void UDBDGameInstance::DBD_AddToRitual(int32 index, float value) {
}

void UDBDGameInstance::DBD_AddToAchievementStat(FName statName, float amount) {
}

void UDBDGameInstance::BeginLoadingScreen(const FString& MapName) {
}

void UDBDGameInstance::Authority_SimulatePerks(TArray<FName> perks, int32 level) {
}

void UDBDGameInstance::Async_GenerateBloodWebForCurrentCharacter() {
}

void UDBDGameInstance::AddActorKnowledgeCollection(UActorKnowledgeCollection* collection) {
}

UDBDGameInstance::UDBDGameInstance() {
    this->DesignTunableClass = NULL;
    this->DesignTunables = NULL;
    this->RegionClass = NULL;
    this->ShopManagerClass = UShopManager::StaticClass();
    this->FriendManagerClass = NULL;
    this->GameEventTracker = NULL;
    this->KeyDisplayInfo = NULL;
    this->LeaveGameRequested = false;
    this->PlayerProfileDAL = NULL;
    this->GenerationSeed = -1;
    this->GenerationPlayerCount = -1;
    this->OfferingSequence = NULL;
    this->PlayerProfileLoadFailed = false;
    this->NewsContentManager = NULL;
    this->ContentScheduleManager = NULL;
    this->CDNPatchManager = NULL;
    this->CharacterProgressionManager = NULL;
    this->CharacterXPManager = NULL;
    this->AtlRitualsManager = NULL;
    this->HasServerLeftMatch = false;
    this->HasWrittenGameEndStats = false;
    this->FearMarketManager = NULL;
    this->ShopManager = NULL;
    this->FriendManager = NULL;
    this->WalletHandler = NULL;
    this->ControllerPairingManager = NULL;
    this->ChunkingManager = NULL;
    this->_assetLibraryManager = NULL;
    this->_onlineTransactionService = NULL;
    this->_persistentData = NULL;
    this->_playerDataFacade = NULL;
    this->_rankManager = NULL;
    this->_playerLevelManager = NULL;
    this->_playerNameRegistration = NULL;
    this->_specialEventManager = NULL;
    this->_bonusPointEventsManager = NULL;
    this->_timeTravelManager = NULL;
    this->_toastManager = NULL;
    this->_socialNotificationFactory = NULL;
    this->_partyFacade = NULL;
    this->_penaltyTracker = NULL;
    this->_ligthingHelper = NULL;
    this->_offeringHandler = NULL;
    this->_mapActorDB = NULL;
    this->_theHud = NULL;
    this->BloodwebManager = NULL;
    this->_sharedAuthenticationManager = NULL;
    this->_popupSequencer = NULL;
    this->_popupFactory = NULL;
    this->_auth = NULL;
    this->_eac = NULL;
    this->_networkFailureDetected = false;
    this->_networkConnectionMonitoringOnly = false;
    this->_achievementStatsUploadEnabled = true;
    this->_isDisconnected = false;
    this->_isGamepadReconnected = false;
    this->_isProfileOffline = false;
    this->_isAppSuspended = false;
    this->_isAppResumed = false;
    this->_isInvitationRejected = false;
    this->_isAdditionalContentInstalled = false;
    this->_isCloudInventoryInitialized = false;
    this->_resultOfferingAndPerkEffects = NULL;
    this->_inventoryHandler = NULL;
    this->_localEventManager = NULL;
    this->_playerReportManager = NULL;
    this->_cinematicManager = NULL;
    this->_softBanManager = NULL;
    this->_consentManager = NULL;
    this->_onlineSystemHandler = NULL;
    this->_dedicatedServerManager = NULL;
    this->_regionFinder = NULL;
    this->_decalSpawnerCollection = NULL;
    this->_characterClippingPrimitiveCollection = NULL;
    this->_atlantaTooltipManager = NULL;
    this->LastProviderErrorCode = 0;
    this->_disconnectError = EDisconnectErrors::None;
    this->_dateTimerUpdater = NULL;
}

