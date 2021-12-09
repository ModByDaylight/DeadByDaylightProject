#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "AimOffsetSurvivorSubAnimInstance.generated.h"

class UCurveFloat;

UCLASS(NonTransient)
class DBDANIMATION_API UAimOffsetSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float _pitch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _yaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _yawInterpolated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _allowLookAt;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isUsingAimItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInjured;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrawling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isIdle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isDrasticYawChangeDetected;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawDeadzoneStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawClampValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawDrasticChangeUpperLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawDrasticChangeLowerLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawDrasticChangeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* _yawInterpolateEaseIn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* _yawInterpolateEaseOut;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawInterpolationEaseInLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _yawInterpolationEaseOutDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isYawInDeadZone;
    
private:
    UPROPERTY(Transient)
    float _currentTargetYaw;
    
    UPROPERTY(Transient)
    float _yawAcceleration;
    
    UPROPERTY(Transient)
    float _yawAccelerationTime;
    
public:
    UAimOffsetSurvivorSubAnimInstance();
};

