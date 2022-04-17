#pragma once
#include "CoreMinimal.h"
#include "SurvivorStatusInterface.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "TormentAttackDamageCooldownInterface.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "AgonyDisplayFxEvent.h"
#include "GameEventData.h"
#include "AgonyComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAgonyComponent : public UActorComponent, public ISurvivorStatusInterface, public ITormentAttackDamageCooldownInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsInAgony)
    FTagStateBool _isInAgony;
    
    UPROPERTY(Replicated)
    FTagStateBool _isAgonyMoriable;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _agonyNumberOfHookForMiniMori;
    
    UPROPERTY(Replicated)
    bool _inAttackTrailDamageCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _attackTrailDamageCooldownTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FAgonyDisplayFxEvent> _showAgonyFXEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FAgonyDisplayFxEvent> _hideAgonyFXEvents;
    
public:
    UAgonyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ShowAgonyBarbWireFX_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTrailEffectStop_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTrailEffectStart_Cosmetic();
    
private:
    UFUNCTION()
    void OnShowBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnRep_IsInAgony();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnLocallyObservedChanged(bool isLocallyObserved);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnHitInAgony_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnHitByTormentAttackTrail_Cosmetic();
    
private:
    UFUNCTION()
    void OnHideBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAgonyChanged_Cosmetic(const bool NewIsInAgony);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInAgony() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAgonyMoriable() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void HideAgonyBarbWireFX_Cosmetic();
    
private:
    UFUNCTION()
    void Authority_OnDrainStageChanged(const int32 drainStage, ADBDPlayer* target);
    
    UFUNCTION()
    void Authority_OnAttackTrailDamageCooldownTimerDone();
    
    
    // Fix for true pure virtual functions not being implemented
};

