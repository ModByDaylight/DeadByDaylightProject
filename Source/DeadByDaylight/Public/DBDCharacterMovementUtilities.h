#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDCharacterMovementUtilities.generated.h"

class ACharacter;
class UCurveFloat;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDCharacterMovementUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDCharacterMovementUtilities();
    UFUNCTION(BlueprintCallable)
    static void Local_RemoveMaxSpeedMultiplierCurve(ACharacter* character, const UCurveFloat* curveToReset);
    
    UFUNCTION(BlueprintCallable)
    static void Local_AddMaxSpeedMultiplierCurve(ACharacter* character, const UCurveFloat* curve, float duration, bool autoReset);
    
};

