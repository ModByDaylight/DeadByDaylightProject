#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "EWallGrabState.h"
#include "BlightAnimInstance.generated.h"

class UBlightPowerStateComponent;

UCLASS(NonTransient)
class UBlightAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UBlightPowerStateComponent* _blightPowerStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWallGrabState _powerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _stateTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _lookAngle;
    
public:
    UBlightAnimInstance();
};

