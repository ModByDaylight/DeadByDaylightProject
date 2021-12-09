#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIMoveToPosition.generated.h"

class ADBDAIPlayerController;
class ADBDPlayer;
class UAIMoveToPositionData;
class UAICharacterBehaviourData;

UCLASS()
class UAIMoveToPosition : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAIMoveToPositionData* _aiBehaviourData;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiController;
    
    UFUNCTION()
    void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
public:
    UFUNCTION()
    void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);
    
    UAIMoveToPosition();
};

