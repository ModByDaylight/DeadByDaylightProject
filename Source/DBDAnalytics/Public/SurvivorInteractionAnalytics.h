#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SurvivorInteractionAnalytics.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType)
class USurvivorInteractionAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USurvivorInteractionAnalytics();
    UFUNCTION(BlueprintCallable)
    static void RecordHealSuccess(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCallable)
    static void RecordHatchEscape(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementHealCount(ACamperPlayer* survivor);
    
};

