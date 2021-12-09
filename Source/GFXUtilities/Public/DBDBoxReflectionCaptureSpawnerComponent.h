#pragma once
#include "CoreMinimal.h"
#include "DBDReflectionCaptureSpawnerComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDBoxReflectionCaptureSpawnerComponent.generated.h"

class UBoxComponent;

UCLASS()
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

