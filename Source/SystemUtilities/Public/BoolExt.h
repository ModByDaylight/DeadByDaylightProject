#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BoolExt.generated.h"

UCLASS(BlueprintType)
class SYSTEMUTILITIES_API UBoolExt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBoolExt();
    UFUNCTION(BlueprintCallable)
    static FString ToString(const bool boolToConvert);
    
};

