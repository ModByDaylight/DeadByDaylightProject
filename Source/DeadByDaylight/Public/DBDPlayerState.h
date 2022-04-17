#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "GameFramework/PlayerState.h"
#include "DBDRecentGameplayEvents.h"
#include "PlayerflowEventsNotifier.h"
#include "EAIDifficultyLevel.h"
#include "ScoreEventData.h"
#include "AIFinishedPlayingEventDelegate.h"
#include "GameplayTagContainer.h"
#include "EPlayerRole.h"
#include "CharacterStateData.h"
#include "PlayerStateData.h"
#include "EquippedPlayerCustomization.h"
#include "PlayerGameplayEventDelegateDelegate.h"
#include "OnGameStateChangedDelegate.h"
#include "OnPlayerGameStateChangedDelegate.h"
#include "AwardedScores.h"
#include "UserGameStats.h"
#include "OngoingScoreData.h"
#include "EPlatformFlag.h"
#include "EProviderFlag.h"
#include "EGameState.h"
#include "EDBDScoreTypes.h"
#include "AwardedScore.h"
#include "StatusViewSource.h"
#include "DBDPlayerState.generated.h"

class UDedicatedServerHandlerComponent;
class URitualHandlerComponent;
class UCharacterStatsHandlerComponent;
class UGameplayNotificationManager;
class UAchievementHandlerComponent;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerState : public APlayerState, public IPlayerflowEventsNotifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAIFinishedPlayingEvent OnAIFinishedPlayingEvent;
    
    UPROPERTY(Replicated, Transient)
    FString MirrorsId;
    
    UPROPERTY(Transient)
    FString ContentVersion;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BotDifficultyLevel)
    EAIDifficultyLevel _difficultyLevel;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    bool IsPlayerReady;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    EPlayerRole GameRole;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    URitualHandlerComponent* RitualHandler;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UDedicatedServerHandlerComponent* DedicatedServerHandler;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    FCharacterStateData CamperData;
    
    UPROPERTY(ReplicatedUsing=OnRep_DisplayData)
    FCharacterStateData SlasherData;
    
    UPROPERTY(ReplicatedUsing=OnRep_DisplayData)
    FPlayerStateData PlayerData;
    
    UPROPERTY(ReplicatedUsing=OnRep_CustomizationData)
    FEquippedPlayerCustomization PlayerCustomization;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerGameplayEventDelegate OnPlayerGameplayEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameStateChanged OnGameStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerGameStateChanged OnPlayerGameStateChanged;
    
protected:
    UPROPERTY()
    TMap<FName, FAwardedScores> _awardedScoresByType;
    
    UPROPERTY()
    FUserGameStats _cachedUserGameStats;
    
    UPROPERTY()
    TArray<FOngoingScoreData> _ongoingScoreEvents;
    
    UPROPERTY()
    FDBDRecentGameplayEvents _recentGameplayEvents;
    
    UPROPERTY(Replicated, Transient)
    bool _inParadise;
    
private:
    UPROPERTY(Export, Transient)
    UGameplayNotificationManager* _gameplayNotificationManager;
    
    UPROPERTY(Export, Transient)
    UAchievementHandlerComponent* _achievementHandler;
    
    UPROPERTY(Export, Transient)
    UCharacterStatsHandlerComponent* _characterStatsHandler;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    FString _platformAccountId;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    int32 _selectedCamperIndex;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    int32 _selectedSlasherIndex;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    EPlatformFlag _platform;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    EProviderFlag _provider;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    bool _crossplayAllowed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DisplayData)
    bool _offNetworkFlag;
    
    UPROPERTY(Replicated, Transient)
    bool _gameLevelLoaded;
    
    UPROPERTY(Replicated, Transient)
    bool _showPortraitBorder;
    
    UPROPERTY(Replicated, Transient)
    bool _hasActiveSubscription;
    
public:
    ADBDPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void UpdateOngoingScores();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSelectedCharacterId(EPlayerRole forRole, int32 id, bool updateDisplayData);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetGameRole(EPlayerRole newPlayerRole);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SelectSurvivor(int32 camperIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SelectKiller(int32 slasherIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);
    
    UFUNCTION()
    void OnRep_DisplayData();
    
    UFUNCTION()
    void OnRep_CustomizationData();
    
    UFUNCTION()
    void OnRep_BotDifficultyLevel();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetSelectedCharacterId(EPlayerRole forRole, int32 id, bool updateDisplayData);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);
    
protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetInParadise();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetAsLeftMatch();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetAsDisconnected();
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_FireGameplayEventWithScore(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInFinishedPlayingState() const;
    
    UFUNCTION(BlueprintPure)
    bool HasHappened(EDBDScoreTypes gameplayEventType, float maxSecondsAgo) const;
    
    UFUNCTION()
    bool HasEscaped() const;
    
    UFUNCTION(BlueprintPure)
    EGameState GetPlayerGameState() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerRole GetGameRole() const;
    
    UFUNCTION(BlueprintPure)
    UGameplayNotificationManager* GetGameplayNotificationManager() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FireScoreEvent(EDBDScoreTypes scoreType, float percentToAward);
    
    UFUNCTION(BlueprintCallable)
    void FireActiveStatusViewEvent(FName statusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FireActiveStatusEffectEvent(FName statusEffectID, float percentage, int32 iconFilePathIndex, int32 levelToDisplay);
    
private:
    UFUNCTION(Client, Reliable)
    void Client_UpdateWallet(const FString& currencyId, int32 amount);
    
    UFUNCTION(Client, Reliable)
    void Client_SetInParadise();
    
protected:
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_SetGameRole(EPlayerRole newRole);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_RemoveItemFromInventory(FName toRemove, bool updateLoadout);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_RemotelyDispatchGameEventWithScore(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_RemotelyDispatchGameEvent(const FGameplayTag& gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION(Client, Reliable)
    void Client_HandleEscapeScoreEvent();
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_AtlantaUpdateInventoryItem(const FName& itemid, int32 newCount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ForceEndOngoingScoreEvent(EDBDScoreTypes scoreType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ForceCancelOngoingScoreEvent(EDBDScoreTypes scoreType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag);
    
    
    // Fix for true pure virtual functions not being implemented
};

