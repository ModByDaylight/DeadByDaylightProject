#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDReflectionCaptureSpawnerComponent.h"
#include "DBDBoxReflectionCaptureSpawnerComponent.generated.h"

class UBoxComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDBoxReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector InfluenceBox;
    
    UPROPERTY(EditDefaultsOnly)
    float BoxTransitionDistance;
    
    UPROPERTY(Export, Transient)
    UBoxComponent* PreviewInfluenceBox;
    
    UPROPERTY(Export, Transient)
    UBoxComponent* PreviewCaptureBox;
    
    UDBDBoxReflectionCaptureSpawnerComponent();
};

