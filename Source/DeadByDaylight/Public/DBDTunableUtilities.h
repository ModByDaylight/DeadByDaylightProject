#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDTunableRowHandle.h"
#include "DBDTunableUtilities.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDTunableUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDTunableUtilities();
    UFUNCTION(BlueprintPure)
    static float GetTunableValue(const UObject* worldContextObject, FName valueName);
    
    UFUNCTION(BlueprintPure)
    static float GetTunableRowHandleValue(const FDBDTunableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintPure)
    static float GetSlasherTunableValue(UObject* worldContextObject, FName valueName);
    
    UFUNCTION(BlueprintPure)
    static float GetEndGameTunableValue(UObject* worldContextObject, FName valueName);
    
};

