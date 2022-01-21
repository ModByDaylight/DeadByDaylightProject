#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlantaHeartbeatActor.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AAtlantaHeartbeatActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsHeartbeatShown;
    
    AAtlantaHeartbeatActor();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowHeartbeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeartbeatIntensity(float heartbeatIntensity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHeartbeatAnimationSpeedRate(float speedRate);
    
private:
    UFUNCTION()
    void OnLocallyObservedChanged(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HideHeartbeat();
    
};

