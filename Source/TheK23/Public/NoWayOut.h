#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "NoWayOut.generated.h"

class AEscapeDoor;
class ACamperPlayer;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UNoWayOut : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _exitGatePanelBlockBaseDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _exitGatePanelBlockDurationPerToken[3];
    
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _hookedSurvivors;
    
public:
    UNoWayOut();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerLoudNoise(ADBDPlayer* instigator, AEscapeDoor* escapeDoor);
    
};

