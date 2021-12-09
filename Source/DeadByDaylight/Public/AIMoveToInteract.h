#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include "AIMoveToInteract.generated.h"

class ADBDAIPlayerController;
class UAIMoveToInteractData;
class ADBDPlayer;
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
    
    UFUNCTION()
    void InteractionPointReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
public:
    UFUNCTION()
    void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);
    
    UAIMoveToInteract();
};

