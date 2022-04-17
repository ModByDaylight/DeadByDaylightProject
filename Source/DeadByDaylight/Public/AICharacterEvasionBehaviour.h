#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterEvasionBehaviour.generated.h"

class ADBDAIPlayerController;
class ADBDPlayer;
class AActor;
class UCharacterEvasionBehaviourData;

UCLASS()
class UAICharacterEvasionBehaviour : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _prey;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _preyAIController;
    
    UPROPERTY(Transient)
    AActor* _currentEscapePoint;
    
    UPROPERTY()
    UCharacterEvasionBehaviourData* _characterEvasionData;
    
public:
    UAICharacterEvasionBehaviour();
private:
    UFUNCTION()
    void EscapeDestinationReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

