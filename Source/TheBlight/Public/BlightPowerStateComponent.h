#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "BlightPowerCollisionDelegateDelegate.h"
#include "BlightPowerStateInterface.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "EWallGrabState.h"
#include "BlightPowerStateComponent.generated.h"

class UBlightPowerState;
class UTimerObject;
class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UBlightPowerStateComponent : public UActorComponent, public IBlightPowerStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlightPowerCollisionDelegate OnPowerCollided;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UBlightPowerState>> _blightPowerStateClasses;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _canDashCheckCollisionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _canDashCheckCollisionHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _canDashCheckCollisionRange;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blightLethalDashDodgeRadius;
    
private:
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _powerInteractionDefinition;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_StateTimer)
    UTimerObject* _stateTimer;
    
    UPROPERTY(Transient)
    TArray<UBlightPowerState*> _blightPowerStates;
    
    UPROPERTY(Transient)
    UBlightPowerState* _currentBlightPowerState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DashTokens)
    uint8 _dashTokens;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _maximumDashTokens;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tokenChargeRate;
    
public:
    UBlightPowerStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetWallGrabState(const EWallGrabState newState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetDashTokens();
    
private:
    UFUNCTION()
    void OnRep_StateTimer();
    
    UFUNCTION()
    void OnRep_DashTokens();
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_SetWallGrabState(const EWallGrabState newState);
    
public:
    UFUNCTION(BlueprintPure)
    float GetStateTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    UTimerObject* GetStateTimer() const;
    
    UFUNCTION(BlueprintPure)
    float GetStateTimeElapsed() const;
    
    UFUNCTION(BlueprintPure)
    UBlightPowerState* GetPowerStateByEnum(const EWallGrabState stateEnum) const;
    
    UFUNCTION(BlueprintPure)
    EWallGrabState GetPowerState() const;
    
    UFUNCTION(BlueprintPure)
    float GetLookAngleDegrees() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetDashTokensRemaining() const;
    
    UFUNCTION(BlueprintPure)
    UBlightPowerState* GetCurrentPowerState() const;
    
    UFUNCTION(BlueprintPure)
    bool CanDash() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

