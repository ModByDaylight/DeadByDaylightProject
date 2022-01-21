#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "EBombType.h"
#include "GassedStatusEffect.generated.h"

class ABaseGasCloudProjectile;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGassedStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool _isInCloud;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsInAntidoteCloud, meta=(AllowPrivateAccess=true))
    bool _isInAntidoteCloud;
    
    UPROPERTY(Transient)
    TSet<ABaseGasCloudProjectile*> _overlappingClouds;
    
    UPROPERTY(Transient)
    TSet<ABaseGasCloudProjectile*> _overlappingAntidoteClouds;
    
    UPROPERTY(ReplicatedUsing=OnRep_TotalTimesEnteringToxicClouds)
    uint16 _totalTimesEnteringToxicClouds;
    
public:
    UGassedStatusEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAntidoteEffectVFX(float durationRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRemainingDuration(const float value);
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingAntidoteDuration(const float value);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnToxinEffectEnd(float durationSkipped);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnToxinEffectBegin(float effectDuration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnToxinCured();
    
private:
    UFUNCTION()
    void OnRep_TotalTimesEnteringToxicClouds();
    
    UFUNCTION()
    void OnRep_IsInAntidoteCloud();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDirectBottleHit(EBombType bottleType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAntidoteEffectEnd(float durationSkipped);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAntidoteEffectBegin(float effectDuration);
    
    UFUNCTION(BlueprintPure)
    bool IsInCloud() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInAntidoteCloud() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetRemainingDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingAntidoteDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetCloudEffectDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAntidoteCloudEffectDuration() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsInCloud(const bool value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsInAntidoteCloud(const bool value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_RemoveOverlappingCloud(ABaseGasCloudProjectile* cloud);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddOverlappingCloud(ABaseGasCloudProjectile* cloud);
    
};

