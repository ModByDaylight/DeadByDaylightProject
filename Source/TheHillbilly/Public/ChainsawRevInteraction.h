#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ChainsawRevInteraction.generated.h"

class UAkAudioEvent;
class ASlasherPlayer;

UCLASS(Abstract, EditInlineNew)
class THEHILLBILLY_API UChainsawRevInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName _soundCueDistanceDataID;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _chainsawRevStartAkAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _chainsawRevEndAkAudioEvent;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _owningSlasher;
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    UChainsawRevInteraction();
};

