#pragma once
#include "CoreMinimal.h"
#include "BloodOrbInfo.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct THEONI_API FBloodOrbInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* originalStaticMesh;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* clonedStaticMesh;
    
    FBloodOrbInfo();
};

