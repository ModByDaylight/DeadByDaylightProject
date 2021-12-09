#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "BlightPowerStateInterface.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "EWallGrabState.h"
#include "BlightPowerStateComponent.generated.h"

class UTimerObject;
class ADBDPlayer;
class UInteractionDefinition;
class UBlightPowerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBlightPowerStateComponentOnPowerCollided, ADBDPlayer*, collidingPlayer, FVector, collisionLocation, FVector, collisionNormal);

UCLASS(BlueprintType)
class UBlightPowerStateComponent : public UActorComponent, public IBlightPowerStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlightPowerStateComponentOnPowerCollided OnPowerCollided;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UBlightPowerStateComponent();
};

