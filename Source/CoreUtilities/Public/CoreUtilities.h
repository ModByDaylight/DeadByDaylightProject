#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreUtilities.generated.h"

class UGameInstance;
class UObject;

UCLASS(BlueprintType)
class COREUTILITIES_API UCoreUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCoreUtilities();
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetRandomValuesFromArray(const TArray<int32>& values, const int32 numberOfDesiredValues);
    
    UFUNCTION(BlueprintPure)
    static UGameInstance* GetGameInstance(const UObject* worldContextObject);
    
};

