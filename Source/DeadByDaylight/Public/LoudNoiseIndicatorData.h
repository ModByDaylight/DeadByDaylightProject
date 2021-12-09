#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseIndicatorData.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FLoudNoiseIndicatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* MeshMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* DistortionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RemainingTime;
    
    DEADBYDAYLIGHT_API FLoudNoiseIndicatorData();
};

