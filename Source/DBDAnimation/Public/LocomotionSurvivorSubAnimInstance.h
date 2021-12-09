#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "LocomotionSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API ULocomotionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isRecoveringWhileCrawling;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isTenacityPerkActive;
    
    UPROPERTY(EditDefaultsOnly)
    float _wasStandingResetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _wasRunningResetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _wasCrouchingResetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _wasMovingResetTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isIdle;
    
    UPROPERTY(EditDefaultsOnly)
    float _recentlyIdleCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _recentlyNotIdleCooldownTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool _wasIdleRecently;
    
    UPROPERTY(BlueprintReadOnly)
    bool _idleInterupt;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isAgainstSmallKiller;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isMoving;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _wasRunning;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRunning;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _wasCrouching;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrouching;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _wasStanding;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isStanding;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrawling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isDead;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _walkAnimSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _walkAnimStartOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _walkAnimPlayRateMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _wasLastDamageSourceDeepWounds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isStrafing;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isUsingDeadHard;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _direction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool _isUsingAimItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isBeingCarried;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInDeathBed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetPitch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _turn180Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _turningRight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _start180Active;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _aimOffsetYawInterpolated;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool _allowLookAt;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool _isDrasticAimOffsetYawChangeDetected;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float _aimOffsetYawClampValue;
    
    UPROPERTY(EditDefaultsOnly)
    float _maxParadiseWalkCycleOffSet;
    
    UPROPERTY(EditDefaultsOnly)
    float _minParadiseWalkPlayRateMultiplier;
    
    UPROPERTY(EditAnywhere)
    float _turn180DetectionPrecision;
    
    UPROPERTY(EditAnywhere)
    float _turn180DetectionDeadZone;
    
    UPROPERTY(EditAnywhere)
    float _turn180PrevVelocitiesCacheDuration;
    
    UPROPERTY(EditAnywhere)
    float _minDurationBetweenTurn180Detection;
    
    UPROPERTY(EditAnywhere)
    float _start180DetectionPrecision;
    
    UPROPERTY(EditAnywhere)
    float _idleDurationFor180StartDetection;
    
    UPROPERTY(EditAnywhere)
    float _durationBeforeStart180Reset;
    
public:
    ULocomotionSurvivorSubAnimInstance();
};

