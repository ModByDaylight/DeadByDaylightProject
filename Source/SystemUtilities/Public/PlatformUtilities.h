#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformUtilities.generated.h"

UCLASS(BlueprintType)
class SYSTEMUTILITIES_API UPlatformUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlatformUtilities();
    UFUNCTION(BlueprintCallable)
    static FString GetPlatform();
    
};

