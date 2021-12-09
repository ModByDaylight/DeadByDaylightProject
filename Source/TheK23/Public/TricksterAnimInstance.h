#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TricksterAnimInstance.generated.h"

class AThrowingKnives;

UCLASS(NonTransient)
class UTricksterAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isAiming;
    
    UPROPERTY(BlueprintReadOnly)
    float _isThrowInputPressed;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isThrowingWithLeftArm;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isThrowingWithRightArm;
    
    UPROPERTY(BlueprintReadOnly)
    float _throwPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float _baseThrowDuration;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _consecutiveKnivesThrownStacks;
    
    UPROPERTY(BlueprintReadOnly)
    float _timeSinceLastKnifeLaunched;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _currentAmmoCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInSuperMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInActivation;
    
    UPROPERTY(BlueprintReadOnly)
    float _activationDuration;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInDeactivation;
    
    UPROPERTY(BlueprintReadOnly)
    float _deactivationDuration;
    
private:
    UPROPERTY(Transient)
    AThrowingKnives* _throwingKnives;
    
public:
    UTricksterAnimInstance();
};

