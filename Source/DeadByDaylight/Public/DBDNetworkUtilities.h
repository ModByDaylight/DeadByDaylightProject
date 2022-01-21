#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDNetworkUtilities.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDNetworkUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDNetworkUtilities();
    UFUNCTION(BlueprintPure)
    static bool IsRunningDedicatedServerFlow();
    
    UFUNCTION(BlueprintPure)
    static bool IsOnDedicatedServerNetwork(const UObject* worldContextObject);
    
};

