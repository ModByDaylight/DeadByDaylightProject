#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseKillerAnimInstance.h"
#include "EInteractionAnimation.h"
#include "EAttackSubstate.h"
#include "KillerAnimInstance.generated.h"

class UArmIKSensorComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UKillerAnimInstance : public UBaseKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector _leftHandIKLocationFPV;
    
    UPROPERTY(BlueprintReadOnly)
    FVector _rightHandIKLocationFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAnyMontagePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _firstPersonCarryOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _firstPersonCarryOffsetLookingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isSpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _animYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _pelvisHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _idleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _directionSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isPlayingAnyMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isKilling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _leftClearFrontSpaceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _rightClearFrontSpaceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _rightFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _leftFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionAnimation _interactionType;
    
    UPROPERTY(Export, Transient)
    UArmIKSensorComponent* _armIKSensorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttackSubstate _attackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _forwardVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _lateralVelocity;
    
public:
    UKillerAnimInstance();
};

