#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CameraUtilities.generated.h"

class AController;

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UCameraUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsLookingTowards(const AController* controller, const FVector& position, float precisionAngle);
    
};

