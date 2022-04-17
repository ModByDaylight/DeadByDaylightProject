#pragma once
#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterRepairGeneratorBehaviour.generated.h"

class UAICharacterRepairGeneratorBehaviourData;
class ADBDAIPlayerController;
class ADBDPlayer;
class UInteractor;

UCLASS()
class UAICharacterRepairGeneratorBehaviour : public UAICharacterBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _aiPlayer;
    
    UPROPERTY(Transient)
    ADBDAIPlayerController* _aiPlayerController;
    
    UPROPERTY(Export, Transient)
    UInteractor* _targetInteractor;
    
    UPROPERTY()
    UAICharacterRepairGeneratorBehaviourData* _characterRepairGeneratorData;
    
public:
    UAICharacterRepairGeneratorBehaviour();
private:
    UFUNCTION()
    void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION()
    void OnGeneratorRepairedEventHandler(bool isAutoCompleted);
    
};

