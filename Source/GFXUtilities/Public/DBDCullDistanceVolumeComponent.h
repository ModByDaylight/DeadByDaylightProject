#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DBDCullDistanceSizePair.h"
#include "UObject/NoExportTypes.h"
#include "DBDCullDistanceVolumeComponent.generated.h"

class UBoxComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDCullDistanceVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDBDCullDistanceSizePair> CullDistances;
    
    UPROPERTY(EditDefaultsOnly)
    FVector InfluenceBox;
    
    UPROPERTY(EditDefaultsOnly)
    bool Enabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool Unbound;
    
private:
    UPROPERTY(Export, Transient)
    UBoxComponent* _previewInfluenceBox;
    
public:
    UDBDCullDistanceVolumeComponent();
};

