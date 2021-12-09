#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIHealAllyBehaviour.generated.h"

class ADBDAIPlayerController;
class UAIHealAllyBehaviourData;
class ADBDPlayer;
class UAICharacterBehaviourData;

UCLASS()
class UAIHealAllyBehaviour : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAIHealAllyBehaviourData* _behaviourData;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiController;
    
    UPROPERTY(Transient)
    ADBDPlayer* _aiPlayer;
    
    UFUNCTION()
    void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
public:
    UFUNCTION()
    void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);
    
    UAIHealAllyBehaviour();
};

