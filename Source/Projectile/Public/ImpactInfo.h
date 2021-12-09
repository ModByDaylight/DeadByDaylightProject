#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ImpactInfo.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct PROJECTILE_API FImpactInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ImpactNormal;
    
    FImpactInfo();
};

