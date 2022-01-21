#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SelectableTileSpawnPoint.h"
#include "TileSpawnPointSelector.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTileSpawnPointSelector : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSelectableTileSpawnPoint> _tileSpawnPoints;
    
    UTileSpawnPointSelector();
};

