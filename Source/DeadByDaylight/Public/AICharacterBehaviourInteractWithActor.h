#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviourInteractWithActor.generated.h"

class ADBDAIPlayerController;
class ADBDPlayer;
class UAICharacterBehaviourInteractWithActorData;

UCLASS()
class UAICharacterBehaviourInteractWithActor : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ADBDPlayer* _aiPlayer;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiPlayerController;
    
    UPROPERTY()
    UAICharacterBehaviourInteractWithActorData* _behaviourData;
    
public:
    UAICharacterBehaviourInteractWithActor();
private:
    UFUNCTION()
    void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

