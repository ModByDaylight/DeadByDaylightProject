#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include "AIHealAllyBehaviour.generated.h"

class UAIHealAllyBehaviourData;
class ADBDPlayer;
class ADBDAIPlayerController;
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
    
public:
    UAIHealAllyBehaviour();
private:
    UFUNCTION()
    void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
public:
    UFUNCTION()
    void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);
    
};

