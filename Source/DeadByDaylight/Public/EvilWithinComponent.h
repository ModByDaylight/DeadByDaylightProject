#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TierChangeDelegateDelegate.h"
#include "EvilWithinComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEvilWithinComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTierChangeDelegate OnTierChange;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_CurrentTier)
    int32 _currentTier;
    
    UPROPERTY(Replicated)
    float _lastTierTimeStart;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> _allowedSurvivorInteractionsForKill;
    
public:
    UEvilWithinComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_CurrentTier(int32 previousTier);
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAtLastTier() const;
    
    UFUNCTION(BlueprintPure)
    float GetRequirementForTier(int32 tier) const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentStalkingPointsInCurrentTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentTier() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStandKill(const ADBDPlayer* player) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeStandingKilled(const ADBDPlayer* player) const;
    
private:
    UFUNCTION()
    void Authority_OnStalkPointsAdded(float stalkPoints);
    
    UFUNCTION()
    void Authority_OnPlayerDisconnect(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_NotifyKill(ADBDPlayer* killedPlayer);
    
};

