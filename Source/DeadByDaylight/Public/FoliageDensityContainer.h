#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageDensityContainer.generated.h"

class UDBDMapFoliageDensityTunables;
class AFoliageActor;
class UFoliageDensityHISM;

UCLASS()
class DEADBYDAYLIGHT_API AFoliageDensityContainer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, AFoliageActor*> _foliageActors;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UFoliageDensityHISM*> _foliageHISMs;
    
    UPROPERTY(Transient)
    UDBDMapFoliageDensityTunables* _mapFoliageDensityTunables;
    
public:
    AFoliageDensityContainer();
};

