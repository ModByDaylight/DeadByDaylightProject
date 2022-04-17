#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterHideInLockerBehaviour.generated.h"

class ADBDAIPlayerController;
class ADBDPlayer;
class UAICharacterHideInLockerBehaviourData;

UCLASS()
class UAICharacterHideInLockerBehaviour : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _aiPlayer;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiPlayerController;
    
    UPROPERTY()
    UAICharacterHideInLockerBehaviourData* _characterHideInLockerData;
    
public:
    UAICharacterHideInLockerBehaviour();
private:
    UFUNCTION()
    void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

