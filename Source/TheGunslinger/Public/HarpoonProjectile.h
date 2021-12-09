#pragma once
#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "Engine/EngineTypes.h"
#include "DBDTunableRowHandle.h"
#include "GunslingerHarpoon.h"
#include "HarpoonProjectile.generated.h"

class UHarpoonProjectileMovementComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UPoolableActorComponent;

UCLASS()
class THEGUNSLINGER_API AHarpoonProjectile : public AKillerProjectile, public IGunslingerHarpoon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _launchDistanceFromCamera;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    UHarpoonProjectileMovementComponent* _movement;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPrimitiveComponent* _environmentCollider;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPrimitiveComponent* _targetCollider;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _skeletalMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPoolableActorComponent* _poolableActorComponent;
    
    UFUNCTION()
    void OnHarpoonStop(const FHitResult& result);
    
public:
    AHarpoonProjectile();
};

