#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "K26CrowProjectileAnimInstance.generated.h"

class AK26CrowProjectile;

UCLASS(NonTransient)
class THEK26_API UK26CrowProjectileAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isInInvalidState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInSummonState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInIdleState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInFollowPathState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInOffPathState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInDestroyedState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingFlashlighted;
    
    UPROPERTY(BlueprintReadOnly)
    float _flashlightProgress;
    
private:
    UPROPERTY(Transient)
    AK26CrowProjectile* _owningCrowProjectile;
    
public:
    UK26CrowProjectileAnimInstance();
};

