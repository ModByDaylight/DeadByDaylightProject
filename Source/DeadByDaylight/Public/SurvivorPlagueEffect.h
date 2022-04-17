#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "StatusEffect.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorPlagueEffect.generated.h"

class AInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorPlagueEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
    float _sicknessAmount;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float _sicknessCap;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float _vomitSlowDuration;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float _vomitSlowAmount;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<float> _sicknessThresholds;
    
    UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
    bool _wasRecentlyHitByVomit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _nonNauseatingInteractions;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _sicknessGainPerSecondFromInfectedInteractable;
    
    UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
    bool _debugMode;
    
public:
    USurvivorPlagueEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RefreshSicknessGainValues();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSurvivorVomit_Aesthetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSurvivorBecomesInfected_Aesthetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSicknessCured_Aesthetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSicknessChanged_Aesthetic(float newSickness);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMaxSicknessReached_Aesthetic();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHitByVomit(bool isSuperVomit);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnSurvivorVomit();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnSurvivorBecomesInfected();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnSicknessCured();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnSicknessChanged(float newSickness);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnMaxSicknessReached();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddOnScreenDebugMessage(uint64 key, float duration, FColor displayColor, const FString& debugMessage);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInfected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDebugModeActive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMaxLevelSickness() const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetSicknessThresholds() const;
    
    UFUNCTION(BlueprintPure)
    float GetSicknessPercentage() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetSicknessLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetSicknessAmount() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetMaxSicknessLevel() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ResetSickness(float newSickness);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnHitByVomitProjectileAesthetic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnHitByVomitProjectile(float sicknessToAdd);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnHitBySuperVomitProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Authority_InfectInteractable(AInteractable* interactable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddSickness(float sicknessToAdd);
    
};

