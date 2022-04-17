#pragma once
#include "CoreMinimal.h"
#include "LevelReadyToPlayEventDelegate.h"
#include "GameFramework/GameState.h"
#include "GameflowEventsNotifier.h"
#include "EscapeDoorActivatedEventDelegate.h"
#include "OnKillerIntroCompletePercentChangedDelegate.h"
#include "IntroCompletedEventDelegate.h"
#include "LightingGeneratedEventDelegate.h"
#include "EEndGameReason.h"
#include "AllPlayerLoadedEventDelegate.h"
#include "ActivatedGeneratorCountChangedDynamicEventDelegate.h"
#include "SlasherSetEventDelegate.h"
#include "ObsessionChangedDynamicDelegateDelegate.h"
#include "BuiltLevelData.h"
#include "OfferingData.h"
#include "UObject/NoExportTypes.h"
#include "SelectedOffering.h"
#include "UObject/NoExportTypes.h"
#include "GamePresetData.h"
#include "UObject/NoExportTypes.h"
#include "OnSlasherSetDelegateDelegate.h"
#include "Dependency.h"
#include "DBDGameState.generated.h"

class ADBDPlayerState_Menu;
class ABaseTrap;
class UCollectableCollection;
class UCharacterCollection;
class ASlasherPlayer;
class AWindow;
class AHatch;
class ATotem;
class USpecialEventGameplaySpawnerComponent;
class UActorPairQueryEvaluatorComponent;
class UScourgeHookManagerComponent;
class URenderingFeaturesSequencer;
class AClipManager;
class AMeatHook;
class ASearchable;
class AGenerator;
class UEndGameStateComponent;
class AEscapeDoor;
class AReverseBearTrapRemover;
class APallet;
class ALocker;
class ABreakableBase;
class UAkAudioBank;
class ACamperPlayer;
class AInteractable;
class UServerTimeProviderComponent;
class UInGameAssetPreloaderComponent;
class ADBDPlayerState;
class ADBDPlayer;
class APawn;

UCLASS()
class DEADBYDAYLIGHT_API ADBDGameState : public AGameState, public IGameflowEventsNotifier {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlasherSetMultiDelegate, ASlasherPlayer*, SlasherPlayer);
    DECLARE_DYNAMIC_DELEGATE(FOnLevelReadyToPlayDelegate);
    DECLARE_DYNAMIC_DELEGATE(FOnIntroCompleteDelegate);
    
    UPROPERTY(BlueprintAssignable, Transient)
    FEscapeDoorActivatedEvent OnEscapeDoorActivated;
    
    UPROPERTY(BlueprintAssignable)
    FLevelReadyToPlayEvent OnLevelReadyToPlay;
    
    UPROPERTY(BlueprintAssignable)
    FIntroCompletedEvent OnIntroCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnKillerIntroCompletePercentChanged OnKillerIntroCompletePercentChanged;
    
    UPROPERTY(BlueprintAssignable)
    FLightingGeneratedEvent OnLightingGenerated;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USpecialEventGameplaySpawnerComponent* _specialEventGameplaySpawnerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FAllPlayerLoadedEvent AuthorityOnAllPlayerLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FActivatedGeneratorCountChangedDynamicEvent OnActivatedGeneratorCountChangedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FSlasherSetEvent OnSlasherSet;
    
    UPROPERTY(BlueprintAssignable)
    FObsessionChangedDynamicDelegate OnObsessionChanged;
    
    UPROPERTY(Replicated, Transient)
    int32 CamperDeadCount;
    
    UPROPERTY(Replicated, Transient)
    int32 CamperInMeatLockerCount;
    
    UPROPERTY(Replicated, Transient)
    int32 CamperEscaped;
    
    UPROPERTY(Replicated, Transient)
    int32 WaitingForEscape;
    
    UPROPERTY(Replicated, Transient)
    int32 CamperCount;
    
    UPROPERTY(Replicated, Transient)
    bool LeaveSpectateRequested;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SecondsLeftInLobby)
    int32 SecondsLeftInLobby;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASlasherPlayer* Slasher;
    
    UPROPERTY(Transient)
    URenderingFeaturesSequencer* _renderingSequencer;
    
private:
    UPROPERTY(Transient)
    int32 _camperHookedInBasementCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayersReadyToStart)
    bool _playersReadyToStart;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BuildLevelData)
    FBuiltLevelData _builtLevelData;
    
    UPROPERTY(Replicated, Transient)
    FOfferingData _levelOfferings;
    
    UPROPERTY(Transient)
    AClipManager* _clipManager;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SessionId)
    FGuid _sessionId;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LobbyId)
    FGuid _lobbyId;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActivatedGeneratorCount)
    int32 _activatedGeneratorCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RequiredActivatedGeneratorCount)
    int32 _requiredActivatedGeneratorCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EscapeDoorActivated)
    bool _escapeDoorActivated;
    
    UPROPERTY(Replicated, Transient)
    bool _escapeDoorOpened;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HatchOpened)
    bool _isHatchOpen;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OnLevelReadyToPlay)
    bool _levelReadyToPlay;
    
    UPROPERTY(Replicated, Transient)
    bool _playerDistributionReady;
    
    UPROPERTY(Replicated, Transient)
    bool _usingWeakenedMechanic;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SurvivorLeft)
    int32 _survivorLeft;
    
    UPROPERTY(Transient)
    TArray<AMeatHook*> _meatHooks;
    
    UPROPERTY(Transient)
    TArray<ASearchable*> _searchables;
    
    UPROPERTY(Transient)
    TArray<AGenerator*> _generators;
    
    UPROPERTY(Transient)
    TArray<AEscapeDoor*> _escapeDoors;
    
    UPROPERTY(Transient)
    TArray<AHatch*> _hatches;
    
    UPROPERTY(Transient)
    TArray<AReverseBearTrapRemover*> _reverseBearTrapRemovers;
    
    UPROPERTY(Transient)
    TArray<ABaseTrap*> _baseTraps;
    
    UPROPERTY(Transient)
    TArray<APallet*> _pallets;
    
    UPROPERTY(Transient)
    TArray<AWindow*> _windows;
    
    UPROPERTY(Transient)
    TArray<ALocker*> _lockers;
    
    UPROPERTY(Transient)
    TArray<ABreakableBase*> _breakableWalls;
    
    UPROPERTY(Transient)
    TArray<ATotem*> _totems;
    
    UPROPERTY(Transient)
    FBoxSphereBounds _mapBoxSphereBounds;
    
    UPROPERTY()
    int32 _camperEscapedThroughHatch;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ObsessionTarget)
    ACamperPlayer* _obsessionTarget;
    
    UPROPERTY(Transient)
    bool _cachedObsessionEscaped;
    
    UPROPERTY(Transient)
    TArray<AInteractable*> _traps;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GamePresetData)
    FGamePresetData _gamePresetData;
    
    UPROPERTY(Transient)
    bool _gameLevelLoaded;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OnGameLevelCreated)
    bool _gameLevelCreated;
    
    UPROPERTY(Transient)
    bool _gameLevelEnded;
    
    UPROPERTY(Transient)
    EEndGameReason _gameEndedReason;
    
    UPROPERTY(Export)
    UEndGameStateComponent* _endGameState;
    
    UPROPERTY(Export, Transient)
    UScourgeHookManagerComponent* _scourgeHookManager;
    
    UPROPERTY(Export)
    UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent;
    
    UPROPERTY(Export)
    UCharacterCollection* _characterCollection;
    
    UPROPERTY(Export)
    UCollectableCollection* _collectableCollection;
    
    UPROPERTY(Export)
    UServerTimeProviderComponent* _serverTimeProvider;
    
    UPROPERTY(Export, VisibleAnywhere)
    UInGameAssetPreloaderComponent* _inGameAssetPreloaderComponent;
    
    UPROPERTY(Replicated, Transient)
    FDateTime _matchStartTime;
    
    UPROPERTY(Replicated, Transient)
    bool _isServerDedicated;
    
    UPROPERTY(Replicated, Transient)
    int32 _maxSurvivorCount;
    
    UPROPERTY(Replicated, Transient)
    FString _serverBuildVersion;
    
public:
    ADBDGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SortOfferings();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayersReadyToStart(bool playersReadyToStart);
    
    UFUNCTION(BlueprintCallable)
    void SetKillerIntroCompletedNormalized(float completedAmount);
    
    UFUNCTION()
    void SetGameLevelEnded(EEndGameReason endGameReason);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayMapName(bool display);
    
    UFUNCTION()
    void SetBuiltLevelData(const FName& themeName, const FName& themeWeather, const FName& audioStateThemes, const FName& audioStateWeather, const FName& audioThemeEvent, const TSoftObjectPtr<UAkAudioBank>& audioThemeSoundBank, const FString& mapName, int32 tileCount, const TArray<FDependency>& levelDependencies, const FName& specialEventId);
    
    UFUNCTION()
    void Server_UpdateGameRole();
    
    UFUNCTION()
    void ResetGameLevelStatus();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrap(AInteractable* toRemove);
    
private:
    UFUNCTION()
    void OnRep_SurvivorLeft(int32 oldValue);
    
    UFUNCTION()
    void OnRep_SessionId();
    
    UFUNCTION()
    void OnRep_SecondsLeftInLobby(const int32 oldValue);
    
    UFUNCTION()
    void OnRep_RequiredActivatedGeneratorCount(int32 oldRequiredActivatedGeneratorCount);
    
    UFUNCTION()
    void OnRep_PlayersReadyToStart(bool oldValue);
    
    UFUNCTION()
    void OnRep_OnLevelReadyToPlay(bool oldValue);
    
    UFUNCTION()
    void OnRep_OnGameLevelCreated();
    
    UFUNCTION()
    void OnRep_ObsessionTarget(ACamperPlayer* previousObsessionTarget);
    
    UFUNCTION()
    void OnRep_LobbyId();
    
    UFUNCTION()
    void OnRep_HatchOpened(bool oldValue);
    
    UFUNCTION()
    void OnRep_GamePresetData();
    
    UFUNCTION()
    void OnRep_EscapeDoorActivated(bool oldValue);
    
    UFUNCTION()
    void OnRep_BuildLevelData();
    
    UFUNCTION()
    void OnRep_ActivatedGeneratorCount(int32 oldValue);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateCharacterFromGamePreset(ADBDPlayerState_Menu* playerState_Menu, const FGamePresetData& gamePresetData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetServerLeftGame(bool hasServerLeftGame);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetLostServerConnection(bool hasLostServerConnection);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetGameLevelLoaded(bool gameLevelLoaded);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetGameLevelEnded(EEndGameReason endGameReason);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetGameEnded(bool hasServerLeftGame);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetBuiltLevelData(const FName& themeName, const FName& themeWeather, const FName& audioStateThemes, const FName& audioStateWeather, const FName& audioThemeEvent, const TSoftObjectPtr<UAkAudioBank>& audioThemeSoundBank, const FString& mapName, int32 tileCount, const TArray<FDependency>& levelDependencies, const FName& specialEventId);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendHVSPlusState(bool enabled);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendEnsureToClients(const FString& ensure);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnGameStarted();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerDistributionReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnePlayerLeft() const;
    
    UFUNCTION()
    bool IsOfferingReceived() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsObsessionTargetAliveInLevel();
    
    UFUNCTION(BlueprintCallable)
    bool IsObsessionTargetAlive();
    
    UFUNCTION(BlueprintPure)
    bool IsLightingGenerated() const;
    
    UFUNCTION()
    bool IsLevelSetupDone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLevelReadyToPlay() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIntroCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHatchVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEscapeRequirementCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEscapeDoorOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEscapeDoorActivated() const;
    
    UFUNCTION(BlueprintCallable)
    void IntroCompleted();
    
    UFUNCTION(BlueprintPure)
    TArray<AInteractable*> GetTraps() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ATotem*> GetTotems() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSurvivorLeft() const;
    
    UFUNCTION(BlueprintPure)
    USpecialEventGameplaySpawnerComponent* GetSpecialEventGameplaySpawnerComponent() const;
    
    UFUNCTION()
    TArray<FSelectedOffering> GetSelectedOfferings() const;
    
    UFUNCTION()
    bool GetSelectedOffering(int32 index, FSelectedOffering& selectedOffering) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRequiredActivatedGeneratorCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingGeneratorsNeeded() const;
    
    UFUNCTION()
    ADBDPlayerState* GetPlayerStateByMirrorsID(const FString& id) const;
    
    UFUNCTION()
    ADBDPlayerState* GetPlayerStateByIDString(const FString& id) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayersReadyToStart() const;
    
    UFUNCTION(BlueprintPure)
    void GetPlayerRoleCounts(int32& survivorCount, int32& killerCount, int32& spectatorCount) const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetObsessionTarget() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfOtherActiveSurvivors(ADBDPlayer* exception) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfActiveSurvivors() const;
    
    UFUNCTION(BlueprintPure)
    FName GetMapThemeName() const;
    
    UFUNCTION()
    ADBDPlayerState* GetLocalPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetLocalPlayerPawn() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetLocalPlayerBasePawn() const;
    
    UFUNCTION()
    TSoftObjectPtr<UAkAudioBank> GetLevelThemeAudioSoundBankAssetPtr() const;
    
    UFUNCTION()
    FBuiltLevelData GetLevelData() const;
    
    UFUNCTION(BlueprintPure)
    float GetKillerIntroCompletedNormalized() const;
    
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetKiller() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsGameEnded() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AWindow*> GetInGameWindows() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ASearchable*> GetInGameSearchables() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AReverseBearTrapRemover*> GetInGameReverseBearTrapRemovers() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APallet*> GetInGamePallets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AMeatHook*> GetInGameMeatHooks() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AHatch*> GetInGameHatches() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGenerator*> GetInGameGenerators() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AEscapeDoor*> GetInGameEscapeDoors() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ABaseTrap*> GetInGameBaseTraps() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGameLevelLoaded() const;
    
    UFUNCTION(BlueprintPure)
    UEndGameStateComponent* GetEndGameStateComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCollectableCollection* GetCollectableCollection() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterCollection* GetCharacterCollection() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOnSlasherSet(FOnSlasherSetDelegate callback);
    
    UFUNCTION(BlueprintCallable)
    void CallOnLevelReadyToPlay(ADBDGameState::FOnLevelReadyToPlayDelegate callback);
    
    UFUNCTION(BlueprintCallable)
    void CallOnIntroComplete(ADBDGameState::FOnIntroCompleteDelegate callback);
    
    UFUNCTION()
    void BroadcastOnSetBuildLevelData();
    
    UFUNCTION()
    void Authority_SetSurvivorLeft(int32 survivorRemaining);
    
    UFUNCTION()
    void Authority_SetLevelReadyToPlay();
    
    UFUNCTION(BlueprintCallable)
    void Authority_SetHatchOpen(bool opened);
    
    UFUNCTION()
    void Authority_SetGameSelectedOffering(const TArray<FSelectedOffering>& offerings);
    
    UFUNCTION()
    void Authority_SetGameLevelLoaded();
    
    UFUNCTION()
    void Authority_SetGameLevelEnded(EEndGameReason endGameReason);
    
    UFUNCTION()
    void Authority_SetGameLevelCreated();
    
    UFUNCTION(BlueprintCallable)
    void Authority_SetEscapeDoorOpened(bool opened);
    
    UFUNCTION()
    void Authority_SetAllPlayerLoaded();
    
    UFUNCTION(BlueprintCallable)
    void Authority_EvaluateObsessionTarget(ADBDPlayer* potentialTarget);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EscapeThroughHatch();
    
    UFUNCTION(BlueprintCallable)
    void Authority_EnableObsession();
    
    UFUNCTION()
    void Authority_DeactivateAI();
    
    UFUNCTION(BlueprintCallable)
    void AddTrap(AInteractable* toAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

