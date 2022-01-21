#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TypeFoliageToAutomateDensity.h"
#include "DBDMapFoliageDensityTunables.generated.h"

UCLASS(Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDMapFoliageDensityTunables : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTypeFoliageToAutomateDensity> FoliageToAutomateDensity;
    
    UDBDMapFoliageDensityTunables();
};

