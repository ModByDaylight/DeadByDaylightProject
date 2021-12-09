#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EvilWithinComponent.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvilWithinComponentOnTierChange, int32, previousTier, int32, currentTier, bool, isFirstTime);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UEvilWithinComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEvilWithinComponentOnTierChange OnTierChange;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_CurrentTier)
    int32 _currentTier;
    
    UPROPERTY(Replicated)
    float _lastTierTimeStart;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> _allowedSurvivorInteractionsForKill;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEvilWithinComponent();
};

