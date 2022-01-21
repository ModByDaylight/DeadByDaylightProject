#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PigAnalytics.generated.h"

class ACamperPlayer;
class ASlasherPlayer;

UCLASS(BlueprintType)
class UPigAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPigAnalytics();
    UFUNCTION(BlueprintCallable)
    static void RecordRBTSearch(ACamperPlayer* searchingPlayer, bool success);
    
    UFUNCTION(BlueprintCallable)
    static void OnRBTAttached_Analytics(ASlasherPlayer* attacher, ACamperPlayer* attachee);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementRBTTimerActived(ACamperPlayer* attachedPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementRBTKilledCount(ACamperPlayer* playerKilled, bool killedByExecutionZone);
    
};

