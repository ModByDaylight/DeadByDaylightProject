#pragma once
#include "CoreMinimal.h"
#include "LamentConfigurationPlayerPossessionData.generated.h"

USTRUCT(BlueprintType)
struct FLamentConfigurationPlayerPossessionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float PickUpElapsedMatchTime;
    
    UPROPERTY()
    float DropElapsedMatchTime;
    
    UPROPERTY()
    FString Outcome;
    
    THEK25_API FLamentConfigurationPlayerPossessionData();
};

