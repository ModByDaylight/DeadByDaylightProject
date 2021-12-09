#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "K25Projectile.h"
#include "SpectatingActorLinker.h"
#include "DBDTunableRowHandle.h"
#include "Engine/NetSerialization.h"
#include "K25ControlledProjectile.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UK25ControlledProjectileMovementComponent;

UCLASS()
class AK25ControlledProjectile : public AK25Projectile, public ISpectatingActorLinker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* _killerViewProjectileStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpringArmComponent* _killerSpringArm;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCameraComponent* _killerCameraPlacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _pitchClampAngle;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _maximumYawTurnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTunableStat _maximumPitchTurnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _cameraRollSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _cameraRollGoBackSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _cameraMaximumRollDegree;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _numbExtraChainsOnControlledProjectileHit;
    
private:
    UPROPERTY(Export, Transient)
    UK25ControlledProjectileMovementComponent* _controlledProjectileMovementComponent;
    
    UPROPERTY(Transient)
    float _currentRoll;
    
    UPROPERTY(Transient)
    float _targetRoll;
    
    UPROPERTY(ReplicatedUsing=OnRep_AngularVelocity)
    FVector_NetQuantize _lastAppliedAngularVelocity;
    
public:
    UFUNCTION(Server, Unreliable)
    void Server_ProcessYawInput(float deltaTime, float scaledInput);
    
    UFUNCTION(Server, Unreliable)
    void Server_ProcessPitchInput(float deltaTime, float scaledInput);
    
private:
    UFUNCTION()
    void OnRep_AngularVelocity();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnKillerPossessProjectileEffects();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AK25ControlledProjectile();
};

