#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "TormentTrailPointCollectionComponent.generated.h"

class ATormentTrailPoint;

UCLASS()
class UTormentTrailPointCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _maxNumberOfTrailPointInGame;
    
    UFUNCTION()
    void OnTrailAcquireChanged(ATormentTrailPoint* trailPoint, bool value);
    
public:
    UTormentTrailPointCollectionComponent();
};

