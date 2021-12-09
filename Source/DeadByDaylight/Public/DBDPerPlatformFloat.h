#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "DBDPerPlatformFloat.generated.h"

USTRUCT(BlueprintType)
struct FDBDPerPlatformFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat Value;
    
    DEADBYDAYLIGHT_API FDBDPerPlatformFloat();
};

