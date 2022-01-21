#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChargeableUtilities.generated.h"

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UChargeableUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChargeableUtilities();
    UFUNCTION(BlueprintPure)
    static float ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate);
    
};

