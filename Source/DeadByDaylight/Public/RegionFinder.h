#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Region.h"
#include "RegionFinder.generated.h"

UCLASS(BlueprintType, Transient, Config=Game)
class DEADBYDAYLIGHT_API URegionFinder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRegion> Regions;
    
    UPROPERTY(Config)
    float Timeout;
    
    URegionFinder();
};

