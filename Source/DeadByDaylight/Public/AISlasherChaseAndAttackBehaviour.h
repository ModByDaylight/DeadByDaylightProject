#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AISlasherChaseAndAttackBehaviour.generated.h"

class UAISlasherChaseAndAttackBehaviourData;
class ADBDAIPlayerController;
class ASlasherPlayer;

UCLASS()
class UAISlasherChaseAndAttackBehaviour : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAISlasherChaseAndAttackBehaviourData* _behaviourData;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _slasherPlayer;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _slasherAIPlayerController;
    
public:
    UAISlasherChaseAndAttackBehaviour();
};

