#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "LocomotionLookAtSurvivorSubAnimInstance.generated.h"

class UCurveFloat;

UCLASS(NonTransient)
class DBDANIMATION_API ULocomotionLookAtSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool _isInjured;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool _isCrawling;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool _isDead;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isUsingAimItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _aimOffsetPitch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _aimOffsetYaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _aimOffsetYawInterpolated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _allowLookAt;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isDrasticAimOffsetYawChangeDetected;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawDeadzoneStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawClampValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawDrasticChangeUpperLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawDrasticChangeLowerLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawDrasticChangeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* _aimOffsetYawInterpolateEaseIn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* _aimOffsetYawInterpolateEaseOut;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawInterpolationEaseInLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawInterpolationEaseOutDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isAimOffsetYawInDeadZone;
    
private:
    UPROPERTY(Transient)
    float _currentTargetAimOffsetYaw;
    
    UPROPERTY(Transient)
    float _aimOffsetYawAcceleration;
    
    UPROPERTY(Transient)
    float _aimOffsetYawAccelerationTime;
    
public:
    ULocomotionLookAtSurvivorSubAnimInstance();
};

