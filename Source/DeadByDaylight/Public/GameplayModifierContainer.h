#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "BaseModifierContainer.h"
#include "ModifierTickableConditionReplicatedData.h"
#include "GameplayTagContainer.h"
#include "EDBDScoreTypes.h"
#include "EInventoryItemType.h"
#include "StatusViewSource.h"
#include "GameplayModifierContainer.generated.h"

class UTimerObject;
class AActor;
class ADBDPlayer;
class UGameplayModifierContainer;
class UBaseModifierCondition;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplayModifierContainer : public UBaseModifierContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TickableConditionsData)
    FModifierTickableConditionReplicatedData _tickableConditionsData;
    
    UPROPERTY(Transient)
    TArray<FName> _tags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseApplyFunction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastStatusView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StatusViewID;
    
    UPROPERTY(EditDefaultsOnly)
    bool _autoInitializeOnBeginPlay;
    
    UPROPERTY(EditDefaultsOnly)
    bool _canOptimizeTickActivation;
    
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ActivationTimer)
    UTimerObject* _activationTimer;
    
public:
    UGameplayModifierContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateIsApplicable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnlistenToGameEvent(EDBDScoreTypes eventType);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToDispatcherGameEvent(FGameplayTag eventType);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToAllGameEvents();
    
    UFUNCTION(BlueprintCallable)
    void UnlistenToAllDispatcherGameEvents();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUseApplyFunction(bool use);
    
    UFUNCTION(BlueprintCallable)
    void SetModifierValue(FGameplayTag type, float GameplayModifierValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(FGameplayTag flag, bool flagValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveModifier(FGameplayTag type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllModifiers();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllFlags();
    
protected:
    UFUNCTION()
    void OnRep_TickableConditionsData();
    
private:
    UFUNCTION()
    void OnRep_ActivationTimer();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnListenedGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLevelReadyToPlay();
    
public:
    UFUNCTION()
    void OnInitialized_Internal();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInitialized();
    
protected:
    UFUNCTION()
    void OnGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGameEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplyEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplyBegin();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ListenToGameEvent(EDBDScoreTypes eventType);
    
    UFUNCTION(BlueprintCallable)
    void ListenToDispatcherGameEvent(FGameplayTag eventType);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsStatusViewActive() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActivationTimerDone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActivationTimerActive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasModifierOfType(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    bool HasFlag(FGameplayTag flag) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetRemainingLifetime() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetPercentageFill() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UGameplayModifierContainer* GetOriginatingEffect() const;
    
    UFUNCTION(BlueprintPure)
    float GetModifierValue(FGameplayTag type) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevelToDisplay() const;
    
    UFUNCTION(BlueprintPure)
    EInventoryItemType GetInventoryItemType() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetIconFilePathIndex() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivationTimerRemainingTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivationTimerPercentRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivationTimerElapsedTimePercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivationTimerElapsedTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivationTimerDuration() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireActiveStatusViewEvent(FName NewStatusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_TriggerActivationTimer(float activationTime);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetActivationTimerPaused(const bool paused);
    
public:
    UFUNCTION(BlueprintCallable)
    void Authority_InstantiateGameplayModifierConditions();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ClearActivationTimer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Apply(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    UBaseModifierCondition* AddCondition(TSubclassOf<UBaseModifierCondition> conditionType);
    
};

