#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PulldownAnalytics.generated.h"

class AActor;
class ACamperPlayer;
class ASlasherPlayer;

UCLASS(BlueprintType)
class UPulldownAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPulldownAnalytics();
    UFUNCTION(BlueprintCallable)
    static void IncrementPalletStun(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementPalletSpawned(AActor* actor);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementPalletDrop(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementPalletDestroy(ASlasherPlayer* killer);
    
};

