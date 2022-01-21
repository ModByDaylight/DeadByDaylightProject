#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "TormentTrailPointCollectionComponent.generated.h"

class ATormentTrailPoint;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTormentTrailPointCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _maxNumberOfTrailPointInGame;
    
public:
    UTormentTrailPointCollectionComponent();
private:
    UFUNCTION()
    void OnTrailAcquireChanged(ATormentTrailPoint* trailPoint, bool value);
    
};

