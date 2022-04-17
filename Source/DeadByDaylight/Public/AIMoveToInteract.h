#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIMoveToInteract.generated.h"

class UAIMoveToInteractData;
class ADBDPlayer;
class ADBDAIPlayerController;
class UAICharacterBehaviourData;

UCLASS()
class UAIMoveToInteract : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAIMoveToInteractData* _aiMoveToInteractData;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiController;
    
public:
    UAIMoveToInteract();
private:
    UFUNCTION()
    void InteractionPointReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
public:
    UFUNCTION()
    void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);
    
};

