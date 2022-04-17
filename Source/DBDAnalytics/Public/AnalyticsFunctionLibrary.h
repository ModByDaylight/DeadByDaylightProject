#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnalyticsFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnalyticsFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void IncrementHookSpawned();
    
};

