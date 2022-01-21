#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AISlasherMoveToGrabSurvivorBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType)
class UAISlasherMoveToGrabSurvivorBehaviourData : public UAICharacterBehaviourData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACamperPlayer* _targetSurvivor;
    
public:
    UAISlasherMoveToGrabSurvivorBehaviourData();
    UFUNCTION(BlueprintCallable)
    void Init(ACamperPlayer* targetSurvivor);
    
};

