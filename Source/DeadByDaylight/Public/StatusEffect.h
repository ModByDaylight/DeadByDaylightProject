#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierContainer.h"
#include "GameplayNotificationData.h"
#include "GameplayModifierData.h"
#include "StatusEffectInitializationData.h"
#include "EStatusEffectType.h"
#include "Engine/EngineTypes.h"
#include "StatusEffect.generated.h"

class AActor;
class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStatusEffect : public UGameplayModifierContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ModifierData)
    FGameplayModifierData ModifierData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ShouldDisplay)
    bool ShouldDisplay;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float CustomParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool _removeOnRemainingLifetimeEnded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastAsStatusEffectWhenApplicable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastAsStatusEffectByActivationTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastAsStatusEffectWhenLifeRemains;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastAsStatusEffectByFunction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastAsStatusEffectAlways;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool BroadcastOriginatorGameEventNotificationWhenFirstApplicable;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StatusInitializationData)
    FStatusEffectInitializationData _statusInitializationData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UStatusEffect>> _nonStackingEffects;
    
public:
    UStatusEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldDisplayStatusEffectIcon() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStatusEffectIconPercentage(float value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldDisplay(bool on);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnShouldOriginatingPlayerChange();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnShouldDisplayChanged(bool currentValue);
    
private:
    UFUNCTION()
    void OnRep_StatusInitializationData();
    
protected:
    UFUNCTION()
    void OnRep_ShouldOriginatingPlayerChange();
    
    UFUNCTION()
    void OnRep_ShouldDisplay();
    
private:
    UFUNCTION()
    void OnRep_ModifierData();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetRemainingLifetimeInitialized(bool remainingLifetimeInitialized);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetRemainingLifetime(float lifetime);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOriginatorHooked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOriginatorAlive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsKillerInOriginatorRange(float AdditiveRangeModifier) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInOriginatorRange() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeLifetime(float lifetime);
    
    UFUNCTION(BlueprintPure)
    EStatusEffectType GetStatusEffectType() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetStatusEffectCooldownRate() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool GetShouldDisplay() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetOriginatingPlayer() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetLifetimeDuration() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetCustomParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireActiveStatusEffectEvent(float percentage, int32 levelToDisplay) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastOriginatorGameEventNotification();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastGameEventNotification(FGameplayNotificationData notificationData, bool addToHistory);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetRemainingLifetime(float lifetime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveSelf();
    
private:
    UFUNCTION()
    void Authority_OnOriginatingPlayerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent)
    void Authority_EndSelf();
    
};

