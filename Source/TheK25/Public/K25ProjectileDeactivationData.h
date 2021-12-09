#pragma once
#include "CoreMinimal.h"
#include "EK25ProjectileDeactivateReason.h"
#include "K25ProjectileDeactivationData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK25ProjectileDeactivationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EK25ProjectileDeactivateReason DeactivationReason;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PhysicalSurfaceName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldReelBackProjectile;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasAppliedDamage;
    
    UPROPERTY(BlueprintReadOnly)
    ACamperPlayer* _survivorHit;
    
    THEK25_API FK25ProjectileDeactivationData();
};

