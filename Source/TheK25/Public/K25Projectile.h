#pragma once
#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "EK25ProjectileDeactivateReason.h"
#include "LaunchInfo.h"
#include "K25ProjectileDeactivationData.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "K25Projectile.generated.h"

class UKillerProjectileDodgeComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class AK25Chain;
class UDBDProjectileMovementComponent;

UCLASS(Abstract)
class AK25Projectile : public AKillerProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* _staticMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPrimitiveComponent* _characterCollider;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPrimitiveComponent* _environmentCollider;
    
    UPROPERTY(Export, VisibleAnywhere)
    UKillerProjectileDodgeComponent* _projectileDodgeComponent;
    
    UPROPERTY(Transient)
    FLaunchInfo _launchInfo;
    
    UPROPERTY(Replicated, Transient)
    AK25Chain* _attachedChain;
    
    UPROPERTY(EditAnywhere)
    float _timeIgnoreSlasherCollision;
    
private:
    UPROPERTY(Transient)
    bool _isActive;
    
    UPROPERTY(Transient)
    FK25ProjectileDeactivationData _lastDeactivationData;
    
public:
    UFUNCTION(Reliable, Server)
    void Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason);
    
protected:
    UFUNCTION()
    void OnProjectileStopped(const FHitResult& result);
    
public:
    UFUNCTION(BlueprintPure)
    UDBDProjectileMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetChainAttachmentLocation() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnProjectileDeactivated(const FK25ProjectileDeactivationData& deactivationData);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnProjectileActivated();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AK25Projectile();
};

