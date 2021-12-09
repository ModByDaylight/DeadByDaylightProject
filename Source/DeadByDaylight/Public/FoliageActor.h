#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageActor.generated.h"

class UFoliageDensityHISM;

UCLASS()
class AFoliageActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UFoliageDensityHISM* _foliageHISM;
    
public:
    AFoliageActor();
};

