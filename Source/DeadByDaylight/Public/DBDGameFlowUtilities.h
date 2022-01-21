#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWorldFlowEvent.h"
#include "EUIFlowEvent.h"
#include "DBDGameFlowUtilities.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDGameFlowUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDGameFlowUtilities();
    UFUNCTION(BlueprintCallable)
    static void TriggerWorldFlowEvent(UObject* worldContextObject, EWorldFlowEvent worldFlowEvent);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerUIFlowEvent(UObject* worldContextObject, EUIFlowEvent uiFlowEvent);
    
};

