#pragma once
#include "CoreMinimal.h"
#include "Region.generated.h"

USTRUCT(BlueprintType)
struct FRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString IP;
    
    DEADBYDAYLIGHT_API FRegion();
};

