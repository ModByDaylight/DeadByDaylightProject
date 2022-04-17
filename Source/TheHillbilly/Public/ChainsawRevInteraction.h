#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ChainsawRevInteraction.generated.h"

class ASlasherPlayer;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
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
    
public:
    UChainsawRevInteraction();
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

