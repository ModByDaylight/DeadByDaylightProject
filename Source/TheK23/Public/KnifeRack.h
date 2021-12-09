#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KnifeRack.generated.h"

class ADBDPlayer;

UCLASS()
class AKnifeRack : public AActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadMontageStarted(float actionSpeedMultiplier, ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadEnded(ADBDPlayer* player);
    
    AKnifeRack();
};

