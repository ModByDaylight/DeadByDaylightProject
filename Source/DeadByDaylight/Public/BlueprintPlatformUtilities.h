#pragma once
#include "CoreMinimal.h"
#include "DBDPerPlatformInt.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDPerPlatformFloat.h"
#include "BlueprintPlatformUtilities.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBlueprintPlatformUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintPlatformUtilities();
    UFUNCTION(BlueprintPure)
    static int32 ToInteger(const FDBDPerPlatformInt& perPlatformInt, const UObject* objectInWorld);
    
    UFUNCTION(BlueprintPure)
    static float ToFloat(const FDBDPerPlatformFloat& perPlatformFloat, const UObject* objectInWorld);
    
};

