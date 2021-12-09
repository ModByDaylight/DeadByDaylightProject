#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AISlasherMoveToGrabSurvivorBehaviour.generated.h"

class ADBDAIPlayerController;
class UAISlasherMoveToGrabSurvivorBehaviourData;
class ASlasherPlayer;

UCLASS()
class UAISlasherMoveToGrabSurvivorBehaviour : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAISlasherMoveToGrabSurvivorBehaviourData* _behaviourData;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _slasherPlayer;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _slasherAIPlayerController;
    
public:
    UAISlasherMoveToGrabSurvivorBehaviour();
};

