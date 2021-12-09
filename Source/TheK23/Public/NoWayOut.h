#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "NoWayOut.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class AEscapeDoor;

UCLASS()
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
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerLoudNoise(ADBDPlayer* instigator, AEscapeDoor* escapeDoor);
    
public:
    UNoWayOut();
};

