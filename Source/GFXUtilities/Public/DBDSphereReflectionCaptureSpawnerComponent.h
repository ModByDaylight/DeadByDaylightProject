#pragma once
#include "CoreMinimal.h"
#include "DBDReflectionCaptureSpawnerComponent.h"
#include "DBDSphereReflectionCaptureSpawnerComponent.generated.h"

class UDrawSphereComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDSphereReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float InfluenceRadius;
    
    UPROPERTY(Export, Transient)
    UDrawSphereComponent* PreviewInfluenceRadius;
    
    UDBDSphereReflectionCaptureSpawnerComponent();
};

