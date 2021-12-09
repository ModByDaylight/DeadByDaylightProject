#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PortalRestrictedLocation.generated.h"

USTRUCT(BlueprintType)
struct FPortalRestrictedLocation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    float DistanceSquared;
    
    DEADBYDAYLIGHT_API FPortalRestrictedLocation();
};

