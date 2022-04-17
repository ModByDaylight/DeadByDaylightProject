#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/CheatManager.h"
#include "EControlMode.h"
#include "EEndGameReason.h"
#include "DBDCheatManager.generated.h"

class ADBDMarketingCameraController;
class UVirtualKeyboard;

UCLASS()
class DEADBYDAYLIGHT_API UDBDCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY()
    ADBDMarketingCameraController* DBDMarketingCameraControllerRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ADBDMarketingCameraController> DBDMarketingCameraControllerClass;
    
private:
    UPROPERTY(Transient)
    UVirtualKeyboard* _virtualKeyboard;
    
public:
    UDBDCheatManager();
private:
    UFUNCTION(Exec)
    void DBD_WakeUpSurvivor();
    
    UFUNCTION(Exec)
    void DBD_VisualizeHookRenderRegions();
    
    UFUNCTION(Exec)
    void DBD_ValidateDatabases();
    
    UFUNCTION(Exec)
    void DBD_ValidateCustomizationItems(FName itemName);
    
    UFUNCTION(Exec)
    void DBD_UsePrivateMatchMaking(const bool use);
    
    UFUNCTION(Exec)
    void DBD_UploadAchievements();
    
    UFUNCTION(Exec)
    void DBD_UpdateErrorSimulation(const FString& moduleName, const FString& errorId, const bool enabled);
    
    UFUNCTION(Exec)
    void DBD_UnloadCharacterAssetLibrary(int32 characterId);
    
    UFUNCTION(Exec)
    void DBD_UnloadAllCharacterAssetLibrary();
    
    UFUNCTION(Exec)
    void DBD_UnlinkMirrorsIdFromNintendo();
    
    UFUNCTION(Exec)
    void DBD_UnlinkMirrorsIdFromNetEase();
    
    UFUNCTION(Exec)
    void DBD_UnlinkMirrorsIdFromFacebook();
    
    UFUNCTION(Exec)
    void DBD_UnequipAllCharms();
    
    UFUNCTION(Exec)
    void DBD_TryRequestToS3(const FString& bucket, const FString& internalUrl);
    
    UFUNCTION(Exec)
    void DBD_TriggerTutorialRewardsPopup(int32 step);
    
    UFUNCTION(Exec)
    void DBD_TriggerPerkSelectionPopup(const int32 characterLevelCompleted, const int32 characterLevelReached, const FString& firstPerkName, const int32 firstPerkLevel, const bool IsFirstPerkTeachable, const FString& optionalSecondPerkName, const int32 optionalSecondPerkLevel, const bool isSecondPerkTeachable);
    
    UFUNCTION(Exec)
    void DBD_TriggerPerkSelectionByLevelPopup(const int32 characterLevelCompleted, const int32 characterLevelReached, int32 characterId);
    
    UFUNCTION(Exec)
    void DBD_TriggerEndGameScenario();
    
    UFUNCTION(Exec)
    void DBD_TransitionToOnboarding();
    
    UFUNCTION(Exec)
    void DBD_ToggleProceduralDebugMode();
    
    UFUNCTION(Exec)
    void DBD_ToggleMarketingCamera();
    
    UFUNCTION(Exec)
    void DBD_ToggleHUDProfiling();
    
    UFUNCTION(Exec)
    void DBD_TeleportWithClothHandling(float x, float y, float z);
    
    UFUNCTION(Exec)
    void DBD_TeleportToTile(uint32 x, uint32 y);
    
    UFUNCTION(Exec)
    void DBD_TeleportToObject(const FString& objectId, int32 index, bool useNavMesh, bool ignoreCheck);
    
    UFUNCTION(Exec)
    void DBD_Teleport(float x, float y, float z);
    
    UFUNCTION(Exec)
    void DBD_SyncLoadCharacter(int32 characterId);
    
    UFUNCTION(Exec)
    void DBD_StopVideoPlayer();
    
    UFUNCTION(Exec)
    void DBD_StopLoadCharacterAssetLibrary(int32 characterId);
    
    UFUNCTION(Exec)
    void DBD_StartInjuredBleedout(float duration);
    
    UFUNCTION(Exec)
    void DBD_SpectateSurvivor();
    
    UFUNCTION(Exec)
    void DBD_SpectateKiller();
    
    UFUNCTION(Exec)
    void DBD_SpawnStatusEffect(FName statusEffectID);
    
    UFUNCTION(Exec)
    void DBD_SpawnPerk(FName perkID, int32 perkLevel);
    
    UFUNCTION(Exec)
    void DBD_SpawnItemInMainMenu(FName itemId);
    
    UFUNCTION(Exec)
    void DBD_SpawnItemAddon(FName addonID);
    
    UFUNCTION(Exec)
    void DBD_SpawnItem(FName itemID);
    
    UFUNCTION(Exec)
    void DBD_SpawnDirectionMarker(float lifetime, float minVisibleDistance, float maxVisibleDistance);
    
    UFUNCTION(Exec)
    void DBD_SpawnCharacter(int32 characterId, bool menuCharacter, FName outfitId, float x, float y, float z);
    
    UFUNCTION(Exec)
    void DBD_SpawnCamperByName(const FString& name, int32 count, int32 disableAI);
    
    UFUNCTION(Exec)
    void DBD_SpawnCamperByIndex(int32 index, int32 count, int32 disableAI);
    
    UFUNCTION(Exec)
    void DBD_SnapTo(float x, float y, float z, float duration);
    
    UFUNCTION(Exec)
    void DBD_SimulateSynchronousFreeze(int32 miliseconds);
    
    UFUNCTION(Exec)
    void DBD_ShutdownRTM();
    
    UFUNCTION(Exec)
    void DBD_ShowWebUrl(const FString& targetUrl);
    
    UFUNCTION(Exec)
    void DBD_ShowVirtualKeyboard(bool show, bool password);
    
    UFUNCTION(Exec)
    void DBD_ShowVirtualJoysticks();
    
    UFUNCTION(Exec)
    void DBD_ShowSubtitleString(const FString& subtitleString);
    
    UFUNCTION(Exec)
    void DBD_ShowSubtitleLocalized(const FString& subtitleLocKey);
    
    UFUNCTION(Exec)
    void DBD_ShowStoreUI(const FString& productId);
    
    UFUNCTION(Exec)
    void DBD_ShowLoadout();
    
    UFUNCTION(Exec)
    void DBD_ShowKillerPowerDebugInfo(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_ShowHelpConversation();
    
    UFUNCTION(Exec)
    void DBD_ShowHelpAndSupport();
    
    UFUNCTION(Exec)
    void DBD_ShowGameInstalledPrompt();
    
    UFUNCTION(Exec)
    void DBD_ShowErrorPopupAndGoBackToSplashScreen();
    
    UFUNCTION(Exec)
    void DBD_ShowErrorPopup();
    
    UFUNCTION(Exec)
    void DBD_ShowCharacterSightDebug(bool show) const;
    
    UFUNCTION(Exec)
    void DBD_ShowBoonTotemBlessingRange(const bool setVisible);
    
    UFUNCTION(Exec)
    void DBD_ShowArchiveQuestsRepetition();
    
    UFUNCTION(Exec)
    void DBD_ShopCameraQuit();
    
    UFUNCTION(Exec)
    void DBD_ShopCameraMain();
    
    UFUNCTION(Exec)
    void DBD_ShopCameraBox();
    
    UFUNCTION(Exec)
    void DBD_SetWindowDebugMode(bool debugMode);
    
    UFUNCTION(Exec)
    void DBD_SetUserBloodpoints(int32 points);
    
    UFUNCTION(Exec)
    void DBD_SetUseClientMovementPrediction(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetTrainVersusBotMode(int32 useTrainVersusBotMode);
    
    UFUNCTION(Exec)
    void DBD_SetTotalXp(int32 totalXp);
    
    UFUNCTION(Exec)
    void DBD_SetSurvivorLeftCount(int32 count);
    
    UFUNCTION(Exec)
    void DBD_SetSurvivorEmblemPoints(const FString& emblemId, int32 points);
    
    UFUNCTION(Exec)
    void DBD_SetStoreHitBoxesVisible(bool value);
    
    UFUNCTION(Exec)
    void DBD_SetSingleDetectionZoneActive(bool active);
    
    UFUNCTION(Exec)
    void DBD_SetServerCorrectionEnabled(const bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetRunVaultEnabled(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetReverseTraverseEnabled(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetRandomInputAmplitude(float amplitude);
    
    UFUNCTION(Exec)
    void DBD_SetQATest();
    
    UFUNCTION(Exec)
    void DBD_SetProceduralDebugMode(int32 mode);
    
    UFUNCTION(Exec)
    void DBD_SetPlayerLevel(int32 currentXp, int32 playerLevel, int32 prestige);
    
    UFUNCTION(Exec)
    void DBD_SetPips(const int32 survivorPips, const int32 killerPips, const FString& lastUpdateTime, const bool playedMatch);
    
    UFUNCTION(Exec)
    void DBD_SetPerchRadiusThreshold(float threshold);
    
    UFUNCTION(Exec)
    void DBD_SetPartyPrivacy(const FString& privacy);
    
    UFUNCTION(Exec)
    void DBD_SetOfferingTriggersVisibility(bool isVisible);
    
    UFUNCTION(Exec)
    void DBD_SetObjectiveProgressionForNextGame(const FString& objectiveIdStr, const int32 progression);
    
    UFUNCTION(Exec)
    void DBD_SetObjectiveProgression(const FString& objectiveIdStr, const int32 progression);
    
    UFUNCTION(Exec)
    void DBD_SetNumTokensOnPerk(FName perkID, int32 numTokens);
    
    UFUNCTION(Exec)
    void DBD_SetNewsContentUpdateTimer(float updateInSeconds, bool repeatTimer);
    
    UFUNCTION(Exec)
    void DBD_SetMouseLock(bool locked);
    
    UFUNCTION(Exec)
    void DBD_SetMobileHudVisible(bool isVisible);
    
    UFUNCTION(Exec)
    void DBD_SetMaxWalkSpeed(float maxWalkSpeed);
    
    UFUNCTION(Exec)
    void DBD_SetKillerHeadVisibility(bool visible);
    
    UFUNCTION(Exec)
    void DBD_SetKillerEmblemPoints(const FString& emblemId, int32 points);
    
    UFUNCTION(Exec)
    void DBD_SetItemNormalizedEnergyLevel(float normalizedLevel);
    
    UFUNCTION(Exec)
    void DBD_SetItemEnergyLevel(float level);
    
    UFUNCTION(Exec)
    void DBD_SetInputAvailability(bool isInputEnable);
    
    UFUNCTION(Exec)
    void DBD_SetHookDrainStage(const int32 hookDrainStage);
    
    UFUNCTION(Exec)
    void DBD_SetHighestWeightSeenNews(int32 value);
    
    UFUNCTION(Exec)
    void DBD_SetHatchetVar(FName varName, float value);
    
    UFUNCTION(Exec)
    void DBD_SetFriendFavoriteStatus(const FString& platformFriendId, bool favoriteStatus);
    
    UFUNCTION(Exec)
    void DBD_SetFearMarketUpdateTimer(float updateInSeconds, bool repeatTimer);
    
    UFUNCTION(Exec)
    void DBD_SetEthereal(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetDockedState(bool docked);
    
    UFUNCTION(Exec)
    void DBD_SetDebugSnapPoint(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetDebugPrintAvailableInteractions(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetDebugFailAllInteractions(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetDebugCarry(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetDate(const FString& dateString, bool isTicking);
    
    UFUNCTION(Exec)
    void DBD_SetCustomizationMesh(FName itemName);
    
    UFUNCTION(Exec)
    void DBD_SetCustomizationCharm(FName charmId, int8 slotIndex);
    
    UFUNCTION(Exec)
    void DBD_SetCrouch(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetContinuousPrintState(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetContinuousPrintDebug(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetChunkProgress(int32 chunkProgress);
    
    UFUNCTION(Exec)
    void DBD_SetChunkingState(uint8 chunkState);
    
    UFUNCTION(Exec)
    void DBD_SetCheatGameVersion(const int32 major, const int32 minor, const int32 patch);
    
    UFUNCTION(Exec)
    void DBD_SetCharacterStat(FName statName, float amount);
    
    UFUNCTION(Exec)
    void DBD_SetAutoItemInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);
    
    UFUNCTION(Exec)
    void DBD_SetAutoInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);
    
    UFUNCTION(Exec)
    void DBD_SetAutoGesture1Enabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);
    
    UFUNCTION(Exec)
    void DBD_SetAutoFastInteractEnabled(const bool enabled, const float pressedDuration, const float releasedDuration, const float initialDelay);
    
    UFUNCTION(Exec)
    void DBD_SetAuthoritativeMovement(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetArchiveStoryEditorMode(bool editorMode, const FString& csvSavedPath);
    
    UFUNCTION(Exec)
    void DBD_SetAllowNavigationInput(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetAllowNavigation(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_SetAIPlayerRankAll(int32 playerRank);
    
    UFUNCTION(Exec)
    void DBD_SetAIPlayerRank(int32 playerRank);
    
    UFUNCTION(Exec)
    void DBD_SetActiveGeneratorCount(int32 count);
    
    UFUNCTION(Exec)
    void DBD_ServerToggleEdgeObjectDebugMode();
    
    UFUNCTION(Exec)
    void DBD_SendPlatformInviteForParty();
    
    UFUNCTION(Exec)
    void DBD_SendPartyChatMessage(const FString& message);
    
    UFUNCTION(Exec)
    void DBD_SendInputToast(int32 buttonType);
    
    UFUNCTION(Exec)
    void DBD_SelectSpawner(int32 type);
    
    UFUNCTION(Exec)
    void DBD_SelectSlasher(uint32 slasherIndex);
    
    UFUNCTION(Exec)
    void DBD_SelectRandomObsession();
    
    UFUNCTION(Exec)
    void DBD_SelectCamper(uint32 camperIndex);
    
public:
    UFUNCTION(Exec)
    void DBD_SegmentationRemoveDecisionPointCampaignSimulation(const FString& decisionPoint);
    
    UFUNCTION(Exec)
    void DBD_SegmentationRemoveAllDecisionPointCampaignSimulation();
    
    UFUNCTION(Exec)
    void DBD_SegmentationPrintAllDecisionPointCampaignSimulation();
    
    UFUNCTION(Exec)
    void DBD_SegmentationAddDecisionPointCampaignSimulation(const FString& decisionPoint, const FString& eventName, const FString& startDate, const FString& endDate);
    
private:
    UFUNCTION(Exec)
    void DBD_SearchPlayerName(const FString& playerName) const;
    
    UFUNCTION(Exec)
    void DBD_RevokeConsent(const FString& consentId);
    
    UFUNCTION(Exec)
    void DBD_RevokeAllConsents();
    
    UFUNCTION(Exec)
    void DBD_ReverseBearTrap_ForceTimer(bool force);
    
    UFUNCTION(Exec)
    void DBD_ReverseBearTrap_FastForward(float deltaTime);
    
    UFUNCTION(Exec)
    void DBD_ReverseBearTrap_Execute();
    
    UFUNCTION(Exec)
    void DBD_RetrieveFriendsListFor(const FString& mirrorsId, const FString& platform);
    
    UFUNCTION(Exec)
    void DBD_ResizeVideoToThumbnail(int32 sizeX, int32 sizeY, int32 positionX, int32 positionY);
    
    UFUNCTION(Exec)
    void DBD_ResizeVideoToFullscreen();
    
    UFUNCTION(Exec)
    void DBD_ResistentCamper();
    
    UFUNCTION(Exec)
    void DBD_ResetTutorialTips();
    
    UFUNCTION(Exec)
    void DBD_ResetSpecialEventSeenCinematics();
    
    UFUNCTION(Exec)
    void DBD_ResetSpecialEventEntryScreen(const FString& eventId);
    
    UFUNCTION(Exec)
    void DBD_ResetSeason();
    
    UFUNCTION(Exec)
    void DBD_ResetSaveGame();
    
    UFUNCTION(Exec)
    void DBD_ResetPlayerLevelAndXp();
    
    UFUNCTION(Exec)
    void DBD_ResetPerkCooldowns();
    
    UFUNCTION(Exec)
    void DBD_ResetPallets();
    
    UFUNCTION(Exec)
    void DBD_ResetObjectiveProgression(const FString& objectiveIdStr);
    
    UFUNCTION(Exec)
    void DBD_ResetMeshRelativeOffSet();
    
    UFUNCTION(Exec)
    void DBD_ResetIdentityAuthenticationProvider();
    
    UFUNCTION(Exec)
    void DBD_ResetHookDrainStage();
    
    UFUNCTION(Exec)
    void DBD_ResetGhostStealth() const;
    
    UFUNCTION(Exec)
    void DBD_ResetGameVersion();
    
    UFUNCTION(Exec)
    void DBD_ResetFirstTimePlaying();
    
    UFUNCTION(Exec)
    void DBD_ResetCloth();
    
    UFUNCTION(Exec)
    void DBD_ResetCharacterStat(FName statName);
    
    UFUNCTION(Exec)
    void DBD_ResetCamera();
    
    UFUNCTION(Exec)
    void DBD_ResetBloodpoints();
    
    UFUNCTION(Exec)
    void DBD_ResetAllCharacterStats();
    
    UFUNCTION(Exec)
    void DBD_RequestServerEnsureLogs();
    
    UFUNCTION(Exec)
    void DBD_RequestSearchFriendPopup();
    
    UFUNCTION(Exec)
    void DBD_RequestJoinParty(const FString& playedId);
    
    UFUNCTION(Exec)
    void DBD_RequestEndGame();
    
    UFUNCTION(Exec)
    void DBD_RemoveSomeStatusEffects();
    
    UFUNCTION(Exec)
    void DBD_RemoveReverseBearTrap();
    
    UFUNCTION(Exec)
    void DBD_RemovePlayerFromParty(const FString& playerId);
    
    UFUNCTION(Exec)
    void DBD_RemovePerkTokens(int32 numberOfTokensToRemove);
    
    UFUNCTION(Exec)
    void DBD_RemoveHP();
    
    UFUNCTION(Exec)
    void DBD_RemoveFriend(const FString& platformId);
    
    UFUNCTION(Exec)
    void DBD_RemoveExhaustion();
    
    UFUNCTION(Exec)
    void DBD_RemoveAllStatusEffects();
    
    UFUNCTION(Exec)
    void DBD_RemoveAllPerks();
    
    UFUNCTION(Exec)
    void DBD_ReleaseControlMode();
    
    UFUNCTION(Exec)
    void DBD_RejectRequestJoinParty(const FString& playedId);
    
    UFUNCTION(Exec)
    void DBD_RejectPartyInvite(const FString& partyId);
    
    UFUNCTION(Exec)
    void DBD_RegisterPlayerName(const FString& name) const;
    
    UFUNCTION(Exec)
    void DBD_RefreshStaticBlast();
    
    UFUNCTION(Exec)
    void DBD_RefillActivePhaseWalkCharges();
    
    UFUNCTION(Exec)
    void DBD_RedeemPromoCode(const FString& codeId);
    
    UFUNCTION(Exec)
    void DBD_RebuildNavigationMesh();
    
    UFUNCTION(Exec)
    void DBD_Ragdoll(FName rootBone, float blend);
    
    UFUNCTION(Exec)
    void DBD_PutSurvivorToSleep();
    
    UFUNCTION(Exec)
    void DBD_PulldownPallets();
    
    UFUNCTION(Exec)
    void DBD_ProcessOffering();
    
    UFUNCTION(Exec)
    void DBD_PrivateMatchMakingName(const FString& name);
    
    UFUNCTION(Exec)
    void DBD_PrintSteamBuildIds();
    
    UFUNCTION(Exec)
    void DBD_PrintQuestConditionsStatus();
    
    UFUNCTION(Exec)
    void DBD_PrintDate();
    
    UFUNCTION(Exec)
    void DBD_PrintCurrentStateOnce();
    
    UFUNCTION(Exec)
    void DBD_PrintAllAtlantaRituals();
    
    UFUNCTION(Exec)
    void DBD_PlayMontage(FName montageID);
    
    UFUNCTION(Exec)
    void DBD_PlayEntityTurn();
    
    UFUNCTION(Exec)
    void DBD_PcInputOnAtlanta(bool shouldOverride);
    
    UFUNCTION(Exec)
    void DBD_OverrideVersionNumber(const FString& versionNumber);
    
    UFUNCTION(Exec)
    void DBD_OptionToggleUseHeadphones();
    
    UFUNCTION(Exec)
    void DBD_OptionToggleMuteOnFocusLost();
    
    UFUNCTION(Exec)
    void DBD_OptionToggleInvertY();
    
    UFUNCTION(Exec)
    void DBD_OptionToggleFullScreen();
    
    UFUNCTION(Exec)
    void DBD_OptionToggleAutoAdjust();
    
    UFUNCTION(Exec)
    void DBD_OptionSetResolution(int32 resolution);
    
    UFUNCTION(Exec)
    void DBD_OptionSetQualityLevel(uint32 qualityLevel);
    
    UFUNCTION(Exec)
    void DBD_OptionSetMainVolume(int32 volume);
    
    UFUNCTION(Exec)
    void DBD_OptionSetLanguage(const FString& lang);
    
    UFUNCTION(Exec)
    void DBD_OpenVideo(const FString& videoId, const FString& mode);
    
    UFUNCTION(Exec)
    void DBD_OpenNetworkErrorPopup();
    
    UFUNCTION(Exec)
    void DBD_OpenLogFolder();
    
    UFUNCTION(Exec)
    void DBD_NoCrows();
    
    UFUNCTION(Exec)
    void DBD_NewAuthToken();
    
    UFUNCTION(Exec)
    void DBD_MuteMusicInGame(bool muted);
    
    UFUNCTION(Exec)
    void DBD_Mute(bool mute);
    
    UFUNCTION(Exec)
    void DBD_MoveBackAndForth(bool move, float moveDuration, bool run);
    
    UFUNCTION(Exec)
    void DBD_MirrorsSteamValidateTransaction(const FString& orderId, const FName& itemId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsSteamInitTransaction(const FName& itemId, const FString& description);
    
    UFUNCTION(Exec)
    void DBD_MirrorsSteamFinalizeTransaction(const FString& orderId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsReportPlayer(const FString& reportedPlayerMirrorsId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsRefreshWallet();
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseOutfit(FName outfitId, const FString& currencyId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseNonPremiumItem(FName objectId, int64 toPurchaseQuantity, const FString& currencyId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseCharacter(FName characterCatalogId, const FString& currencyId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseBundle(FName objectId, int64 toPurchaseQuantity, const FString& currencyId, bool isPremium);
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseAllOutfits();
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseAllItems();
    
    UFUNCTION(Exec)
    void DBD_MirrorsPurchaseAllAtlantaItems();
    
    UFUNCTION(Exec)
    void DBD_MirrorsLoadPlayerData();
    
    UFUNCTION(Exec)
    void DBD_MirrorsGetTutorialRewards();
    
    UFUNCTION(Exec)
    void DBD_MirrorsGetCharacterCustomizationItemData();
    
    UFUNCTION(Exec)
    void DBD_MirrorsGetAvailableBundles();
    
    UFUNCTION(Exec)
    void DBD_MirrorsDropInventoryItem(const FString& objectId, int32 dropCount);
    
    UFUNCTION(Exec)
    void DBD_MirrorsDropAllInventoryItems();
    
    UFUNCTION(Exec)
    void DBD_MirrorsConsumeItem(FName objectId);
    
    UFUNCTION(Exec)
    void DBD_MirrorsClaimTutorialRewards(const FString& playerRole, bool isSkippingTutorial);
    
    UFUNCTION(Exec)
    void DBD_MirrorsClaimMessageRewards();
    
    UFUNCTION(Exec)
    void DBD_MirrorsBuyFearMarketItem(const FName& perkId, const FString& currencyId);
    
    UFUNCTION(Exec)
    void DBD_MayThereBeOutlines(const FString& value, float red, float green, float blue);
    
    UFUNCTION(Exec)
    void DBD_MasterCheat();
    
    UFUNCTION(Exec)
    void DBD_MarketingSetupGameplayCheats();
    
    UFUNCTION(Exec)
    void DBD_MarketingSetupCinematicCheats();
    
    UFUNCTION(Exec)
    void DBD_LogGlobalUObjectArray();
    
    UFUNCTION(Exec)
    void DBD_LogActivatables();
    
    UFUNCTION(Exec)
    void DBD_LockHatchState(int32 state);
    
    UFUNCTION(Exec)
    void DBD_LoadCharacterAssetLibrary(int32 characterId);
    
    UFUNCTION(Exec)
    void DBD_LoadCatalogDataFromS3();
    
    UFUNCTION(Exec)
    void DBD_ListStatusEffects();
    
    UFUNCTION(Exec)
    void DBD_ListPerks();
    
    UFUNCTION(Exec)
    void DBD_ListItemAddons();
    
    UFUNCTION(Exec)
    void DBD_ListInventory();
    
    UFUNCTION(Exec)
    void DBD_ListInteractionInZone();
    
    UFUNCTION(Exec)
    void DBD_ListDBStatusEffects();
    
    UFUNCTION(Exec)
    void DBD_ListDBPerks();
    
    UFUNCTION(Exec)
    void DBD_ListDBOfferings();
    
    UFUNCTION(Exec)
    void DBD_ListDBItems();
    
    UFUNCTION(Exec)
    void DBD_ListDBItemAddons();
    
    UFUNCTION(Exec)
    void DBD_ListDBCustomizations();
    
    UFUNCTION(Exec)
    void DBD_ListAvailableInteractions();
    
    UFUNCTION(Exec)
    void DBD_ListAllStatusEffects();
    
    UFUNCTION(Exec)
    void DBD_ListAllPerks();
    
    UFUNCTION(Exec)
    void DBD_ListAllItemAddons();
    
    UFUNCTION(Exec)
    void DBD_LevelUp();
    
    UFUNCTION(Exec)
    void DBD_LeaveParty();
    
    UFUNCTION(Exec)
    void DBD_LeaveMatch();
    
    UFUNCTION(Exec)
    void DBD_KillLobby();
    
    UFUNCTION(Exec)
    void DBD_Kill(bool sacrificed);
    
    UFUNCTION(Exec)
    void DBD_IsServerDedicated();
    
    UFUNCTION(Exec)
    void DBD_IsAssetLoaded(FName assetPath);
    
    UFUNCTION(Exec)
    void DBD_InvitePlayerToParty(const FString& playerId);
    
    UFUNCTION(Exec)
    void DBD_InvalidateIdentityAuthenticationProviderToken();
    
    UFUNCTION(Exec)
    void DBD_InitializeRTM();
    
    UFUNCTION(Exec)
    void DBD_IncreaseAtlantaRitualProgression(const FString& ritualId, int32 ritualProgression);
    
    UFUNCTION(Exec)
    void DBD_ImportLocalSaveGame();
    
    UFUNCTION(Exec)
    void DBD_HookEscapeAutoSuccess(const bool success);
    
    UFUNCTION(Exec)
    void DBD_HideSubtitles();
    
    UFUNCTION(Exec)
    void DBD_HideRankPipsProgression(const bool hideRank);
    
    UFUNCTION(Exec)
    void DBD_HealBots();
    
    UFUNCTION(Exec)
    void DBD_GetSyncedUTCTime();
    
    UFUNCTION(Exec)
    void DBD_GetSuggestedFriendsPerPlatform();
    
    UFUNCTION(Exec)
    void DBD_GetRecentlyPlayedWithPlayers();
    
    UFUNCTION(Exec)
    void DBD_GetPlayerPips();
    
    UFUNCTION(Exec)
    void DBD_GetPlayerName() const;
    
    UFUNCTION(Exec)
    void DBD_GetPlayerLevel();
    
    UFUNCTION(Exec)
    void DBD_GetNextProgressionPerks(int32 level, int32 characterId);
    
    UFUNCTION(Exec)
    void DBD_GetKrakenID();
    
    UFUNCTION(Exec)
    void DBD_GetHighestWeightSeenNews();
    
    UFUNCTION(Exec)
    void DBD_GetChunkingState();
    
    UFUNCTION(Exec)
    void DBD_GenerateAuthToken();
    
    UFUNCTION(Exec)
    void DBD_FrenzyForever();
    
    UFUNCTION(Exec)
    void DBD_ForceSurvivorGreyedOut(bool isGreyedOut);
    
    UFUNCTION(Exec)
    void DBD_ForceSlasherToIgnoreLocalPlayer(bool activate);
    
    UFUNCTION(Exec)
    void DBD_ForceSkillChecks(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_ForceRebalanceRTM();
    
    UFUNCTION(Exec)
    void DBD_ForceFlee(bool toward);
    
    UFUNCTION(Exec)
    void DBD_ForceDisableSkillChecks(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_ForceControlMode(EControlMode forcedControlMode);
    
    UFUNCTION(Exec)
    void DBD_ForceBackendUnreachable(int32 force);
    
    UFUNCTION(Exec)
    void DBD_FlushPersistentDebugDrawings();
    
    UFUNCTION(Exec)
    void DBD_FlushAnalytics();
    
    UFUNCTION(Exec)
    void DBD_FindActorWithTag(const FString& tagname);
    
    UFUNCTION(Exec)
    void DBD_FillHP();
    
    UFUNCTION(Exec)
    void DBD_ExportLocalSaveGame();
    
    UFUNCTION(Exec)
    void DBD_EquipCharmsIn3Slots(FName charmIdInSlot0, FName charmIdInSlot1, FName charmIdInSlot2);
    
    UFUNCTION(Exec)
    void DBD_EntitlementsInfo();
    
    UFUNCTION(Exec)
    void DBD_EnsureFail();
    
    UFUNCTION(Exec)
    void DBD_EndGameWithReason(EEndGameReason reason);
    
    UFUNCTION(Exec)
    void DBD_EndGame();
    
    UFUNCTION(Exec)
    void DBD_EndEndGameScenario();
    
    UFUNCTION(Exec)
    void DBD_EnableTerrorRadius();
    
    UFUNCTION(Exec)
    void DBD_EnableScaleformInputCapture(bool capture, bool lock);
    
    UFUNCTION(Exec)
    void DBD_EnableDebugUnavailableInteractions(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_EnableCapsuleDynamicResize(bool enabled);
    
    UFUNCTION(Exec)
    void DBD_EmulateKrakenSpecificError(const FString& endpoint, int32 errorCode);
    
    UFUNCTION(Exec)
    void DBD_EarnXpAmount(int32 matchXp);
    
    UFUNCTION(Exec)
    void DBD_EarnPlayerXp(int32 matchTime, bool isFirstMatch, int32 consecutiveMatch, const FString& playerType, const FString& highestEmblemQuality, bool queueForTally);
    
    UFUNCTION(Exec)
    void DBD_DynamicCapsuleResizerAlwaysEnabled(const bool enabled);
    
    UFUNCTION(Exec)
    void DBD_DumpOnlineSessions();
    
    UFUNCTION(Exec)
    void DBD_DumpCharacterObjectStates();
    
    UFUNCTION(Exec)
    void DBD_DropSurvivorItems();
    
    UFUNCTION(Exec)
    void DBD_DropShrinePerk(FName perkId);
    
    UFUNCTION(Exec)
    void DBD_DropAllShrinePerks();
    
    UFUNCTION(Exec)
    void DBD_DisplayPopupToast(int32 toastId);
    
    UFUNCTION(Exec)
    void DBD_DisplayPlayerStat(FName statName);
    
    UFUNCTION(Exec)
    void DBD_DisplayPlayerGameState();
    
    UFUNCTION(Exec)
    void DBD_DisplayObjectiveProgression(const FString& objectiveIdStr);
    
    UFUNCTION(Exec)
    void DBD_DisplayFriendsListData();
    
    UFUNCTION(Exec)
    void DBD_DisplayFriendsList();
    
    UFUNCTION(Exec)
    void DBD_DisplayFriendInfo(const FString& friendId);
    
    UFUNCTION(Exec)
    void DBD_DisplayEventProgression(const FString& eventId);
    
    UFUNCTION(Exec)
    void DBD_DisplayChunkingDefines();
    
    UFUNCTION(Exec)
    void DBD_DisplayCharacterStat(FName statName);
    
    UFUNCTION(Exec)
    void DBD_DispatchOnPostItemAddonsCreation();
    
    UFUNCTION(Exec)
    void DBD_DisconnectionPenaltyShow();
    
    UFUNCTION(Exec)
    void DBD_DisconnectionPenaltySetEndOfBan(const FString& endOfBan);
    
    UFUNCTION(Exec)
    void DBD_DisconnectionPenaltyAddPointsDS(const FString& userId, const FString& role, const FString& reason);
    
    UFUNCTION(Exec)
    void DBD_DisconnectionPenaltyAddPoints(int32 amount);
    
    UFUNCTION(Exec)
    void DBD_DisableTerrorRadius();
    
    UFUNCTION(Exec)
    void DBD_DisableStartUpdateMontageDuringEnter(bool disable);
    
    UFUNCTION(Exec)
    void DBD_DestroyAllNotControlledCharacter();
    
    UFUNCTION(Exec)
    void DBD_DeleteRank();
    
    UFUNCTION(Exec)
    void DBD_DeleteAllCharacterAssetLibrary();
    
    UFUNCTION(Exec)
    void DBD_DebugPrintInteractionsInZone();
    
    UFUNCTION(Exec)
    void DBD_DebugPlague(bool enable);
    
    UFUNCTION(Exec)
    void DBD_DebugIsInterruptable(bool interruptable);
    
    UFUNCTION(Exec)
    void DBD_DebugGhost(bool debug) const;
    
    UFUNCTION(Exec)
    void DBD_DebugCompetence(int32 on);
    
    UFUNCTION(Exec)
    void DBD_CycleSpectate();
    
    UFUNCTION(Exec)
    void DBD_CyclePlayerSpawnPoints(int32 cycleDelay);
    
    UFUNCTION(Exec)
    void DBD_CreateParty();
    
    UFUNCTION(Exec)
    void DBD_CrashGameWithNullPtr();
    
    UFUNCTION(Exec)
    void DBD_CrashGameWithCheck();
    
    UFUNCTION(Exec)
    void DBD_CopyPlayerName();
    
    UFUNCTION(Exec)
    void DBD_CopyPlayerMirrorsIdToClipboard();
    
    UFUNCTION(Exec)
    void DBD_CopyPartyIdToClipboard();
    
    UFUNCTION(Exec)
    void DBD_ContextSystemRequestTransition(uint32 contextGroupUId, uint32 contextUId, int32 transitionId);
    
    UFUNCTION(Exec)
    void DBD_ContextSystemRequestEnd(uint32 contextGroupUId);
    
    UFUNCTION(Exec)
    void DBD_ConsumeLevelPerk(const int32 characterLevelReached);
    
    UFUNCTION(Exec)
    void DBD_ConsumeBloodwebs(int32 initialLevel, int32 count);
    
    UFUNCTION(Exec)
    void DBD_CompleteEscapeRequirements();
    
    UFUNCTION(Exec)
    void DBD_ComeToMeSurvivors();
    
    UFUNCTION(Exec)
    void DBD_ComeToMeMyChildren();
    
    UFUNCTION(Exec)
    void DBD_ColorblindMode(int32 deficiencyType, int32 severity, bool correctDeficiency, bool showCorrectionWithDeficiency);
    
    UFUNCTION(Exec)
    void DBD_CloseVideo();
    
    UFUNCTION(Exec)
    void DBD_CloseSystemPromptAndResetStack();
    
    UFUNCTION(Exec)
    void DBD_CloseRTM();
    
    UFUNCTION(Exec)
    void DBD_ClearPotentialReferencesToChunksNotYetDownloaded();
    
    UFUNCTION(Exec)
    void DBD_ClaimRetentionReward(const FString& calendarId);
    
    UFUNCTION(Exec)
    void DBD_ChangeVideoVolume(float volume);
    
    UFUNCTION(Exec)
    void DBD_ChangeVideoPlaybackMode(const FString& mode);
    
    UFUNCTION(Exec)
    void DBD_ChangeVideoMedia(const FString& videoId);
    
    UFUNCTION(Exec)
    void DBD_ChangeBaseUrlForSpecificEndpointAndRequestType(const FString& endpoint, const FString& requestType, const FString& baseUrl);
    
    UFUNCTION(Exec)
    void DBD_CancelPartyInvite(const FString& partyId, const FString& cancelledPlayerId);
    
    UFUNCTION(Exec)
    void DBD_BuyBloodwebsLevel(int32 initialLevel, int32 count);
    
    UFUNCTION(Exec)
    void DBD_BlessDullTotems();
    
    UFUNCTION(Exec)
    void DBD_BackToIIS();
    
    UFUNCTION(Exec)
    void DBD_AutoWiggle();
    
    UFUNCTION(Exec)
    void DBD_AtlantaRitualForceRegenerateDaily();
    
    UFUNCTION(Exec)
    void DBD_AtlantaRitualForceRegenerateAll();
    
    UFUNCTION(Exec)
    void DBD_AtlantaRitualClearOnboardingProgress();
    
    UFUNCTION(Exec)
    void DBD_AtlantaOpenDeepLinkURL(const FString& url);
    
    UFUNCTION(Exec)
    void DBD_AT_TrialsLoop(const uint32 numBots, const int32 camperId, const FString& killerId);
    
    UFUNCTION(Exec)
    void DBD_AsyncLoadItem(FName itemId);
    
    UFUNCTION(Exec)
    void DBD_ASMShowGridDebugOutput();
    
    UFUNCTION(Exec)
    void DBD_ArchivesToggleNodeDebug();
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetXpProgression();
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetVignette(const FString& storyId, const FString& vignetteId);
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetStory(const FString& storyId, const int32 level);
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetStarProgression();
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetPremiumPass();
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetPopupSeenStatus(const FString& archiveId);
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetNode(const FString& storyId, const int32 level, const FString& nodeId, const bool forceClose);
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetJournal(const FString& storyId);
    
    UFUNCTION(Exec)
    void DBD_ArchivesResetAll();
    
    UFUNCTION(Exec)
    void DBD_ArchivesMasterLevel(const FString& storyId, const int32 level, const FString& nodeIdToExclude);
    
    UFUNCTION(Exec)
    void DBD_ArchivesJournalUnlockEntries(const FString& storyId, const FString& vignetteId, int32 entriesToAdd);
    
    UFUNCTION(Exec)
    void DBD_ArchivesGetStoryIds();
    
    UFUNCTION(Exec)
    void DBD_ArchivesGetActiveNodesFromCache();
    
    UFUNCTION(Exec)
    void DBD_ArchivesForceFetchStoryIds();
    
    UFUNCTION(Exec)
    void DBD_ArchivesForceActivateNode(const FString& storyId, const int32 level, const FString& nodeId);
    
    UFUNCTION(Exec)
    void DBD_ArchivesFetchActiveNodes();
    
    UFUNCTION(Exec)
    void DBD_ArchivesDisplayNodeStatus(const FString& storyId, const int32 level, const FString& nodeId);
    
    UFUNCTION(Exec)
    void DBD_ArchivesCompleteJounal(const FString& archiveId);
    
    UFUNCTION(Exec)
    void DBD_ArchivesAddXp(const int32 amountXp);
    
    UFUNCTION(Exec)
    void DBD_ArchivesAddTiers(const int32 amountTiers);
    
    UFUNCTION(Exec)
    void DBD_ArchivesAddStars(const int32 amountStars);
    
    UFUNCTION(Exec)
    void DBD_ArchivesAddProgressionToAllActiveNodes(const int32 progression);
    
    UFUNCTION(Exec)
    void DBD_ArchivesAddObjectiveProgression(const FString& storyId, const int32 level, const FString& nodeId, const FString& objectiveId, const int32 progress);
    
    UFUNCTION(Exec)
    void DBD_ArchivesActivateNode(const FString& storyId, const int32 level, const FString& nodeId);
    
    UFUNCTION(Exec)
    void DBD_ApplySameSurvivorSicknessStatusToKiller(bool sameVisual);
    
    UFUNCTION(Exec)
    void DBD_ApplyDeepWound();
    
    UFUNCTION(Exec)
    void DBD_AnalyticsProvidersForgetMe();
    
    UFUNCTION(Exec)
    void DBD_AnalyticsProvidersClearPersistentData();
    
    UFUNCTION(Exec)
    void DBD_AllowPalletPullUp(bool allowPullUp);
    
    UFUNCTION(Exec)
    void DBD_AddToPlayerStat(FName statName, float amount);
    
    UFUNCTION(Exec)
    void DBD_AddToCharacterStat(FName statName, float amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_AddSlasherPips(int32 count, bool forceReset);
    
    UFUNCTION(Exec)
    void DBD_AddRecentlyPlayedWithPlayer(const FString& playerKrakenId) const;
    
    UFUNCTION(Exec)
    void DBD_AddPerkTokens(int32 numberOfTokensToAdd);
    
    UFUNCTION(Exec)
    void DBD_AddPerkToInventory(FName PerkID, int32 level);
    
    UFUNCTION(Exec)
    void DBD_AddPartyInviteToast(const FString& partyId);
    
    UFUNCTION(Exec)
    void DBD_AddOfferingToInventory(FName ItemID, int32 amount);
    
    UFUNCTION(Exec)
    void DBD_AddOffering(FName name);
    
    UFUNCTION(Exec)
    void DBD_AddNotificationToast();
    
    UFUNCTION(Exec)
    void DBD_AddMadness(float madnessToAdd);
    
    UFUNCTION(Exec)
    void DBD_AddItemToInventory(FName ItemID, int32 amount);
    
    UFUNCTION(Exec)
    void DBD_AddItemAddonToInventory(FName ItemAddonID, int32 amount);
    
    UFUNCTION(Exec)
    void DBD_AddInvitationToast();
    
    UFUNCTION(Exec)
    void DBD_AddHP();
    
    UFUNCTION(Exec)
    void DBD_AddFriend(const FString& userKrakenID);
    
    UFUNCTION(Exec)
    void DBD_AddEverythingToInventory(int32 amount);
    
    UFUNCTION(Exec)
    void DBD_AddCharacterExperience(int32 amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_AddCamperPips(int32 count, bool forceReset);
    
    UFUNCTION(Exec)
    void DBD_AddBotWithId(const int32 id);
    
    UFUNCTION(Exec)
    void DBD_AddBot();
    
    UFUNCTION(Exec)
    void DBD_AddAllPerksToInventory(int32 level);
    
    UFUNCTION(Exec)
    void DBD_AddAllItemsAddonsOfferingsToInventory(int32 amount);
    
    UFUNCTION(Exec)
    void DBD_ActivateWeakenedMechanic(bool on);
    
    UFUNCTION(Exec)
    void DBD_ActivateEscapeDoor();
    
    UFUNCTION(Exec)
    void DBD_ActivateAIAllSlashers(bool activate, int32 playerRank);
    
    UFUNCTION(Exec)
    void DBD_ActivateAIAllCampers(bool activate, int32 playerRank);
    
    UFUNCTION(Exec)
    void DBD_ActivateAIAll(bool activate, int32 playerRank);
    
    UFUNCTION(Exec)
    void DBD_ActivateAI(bool activate, int32 playerRank);
    
    UFUNCTION(Exec)
    void DBD_AcceptRequestJoinParty(const FString& playedId);
    
    UFUNCTION(Exec)
    void DBD_AcceptPartyInvite(const FString& partyId);
    
};

