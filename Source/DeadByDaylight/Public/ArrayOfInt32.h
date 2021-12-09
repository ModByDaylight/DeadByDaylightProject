#pragma once
#include "CoreMinimal.h"
#include "ArrayOfInt32.generated.h"

USTRUCT(BlueprintType)
struct FArrayOfInt32 {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<int32> Value;
    
    DEADBYDAYLIGHT_API FArrayOfInt32();
};

