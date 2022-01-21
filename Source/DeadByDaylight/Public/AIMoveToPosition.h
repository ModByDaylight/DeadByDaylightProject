#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIMoveToPosition.generated.h"

class ADBDPlayer;
class UAIMoveToPositionData;
class UAICharacterBehaviourData;
class ADBDAIPlayerController;

UCLASS()
class UAIMoveToPosition : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAIMoveToPositionData* _aiBehaviourData;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiController;
    
public:
    UAIMoveToPosition();
private:
    UFUNCTION()
    void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
public:
    UFUNCTION()
    void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);
    
};

