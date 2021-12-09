#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintDebugUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UBlueprintDebugUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void EnsureOnConditionWithMessage(const bool condition, const FString& ensureMessage);
    
    UFUNCTION(BlueprintCallable)
    static void EnsureFalseWithMessage(const FString& ensureMessage);
    
    UBlueprintDebugUtilities();
};

