#pragma once
#include "CoreMinimal.h"
#include "PerMeshInstancingData.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPerMeshInstancingData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TMap<uint32, UInstancedStaticMeshComponent*> hashToInstancedMeshes;
    
    DEADBYDAYLIGHT_API FPerMeshInstancingData();
};

