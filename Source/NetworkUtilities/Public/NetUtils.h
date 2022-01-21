#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NetUtils.generated.h"

class UObject;

UCLASS(BlueprintType)
class NETWORKUTILITIES_API UNetUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetUtils();
    UFUNCTION(BlueprintCallable)
    static bool IsDedicatedServerInstance(const UObject* worldContextObject);
    
};

