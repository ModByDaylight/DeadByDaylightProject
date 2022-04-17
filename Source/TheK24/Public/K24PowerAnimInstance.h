#pragma once
#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "Animation/AnimInstance.h"
#include "K24PowerAnimInstance.generated.h"

class AK24Power;
class ASlasherPlayer;

UCLASS(NonTransient)
class UK24PowerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASlasherPlayer* _owningKiller;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInPowerMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isChargingPower;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isK24PowerAttacking;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRequestingPowerAttack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _tentacleLength;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isFirstPersonView;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EAttackSubstate _attackSubState;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isIntroCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLevelReadyToPlay;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 _powerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _forwardVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _lateralVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isKilling;
    
private:
    UPROPERTY(Transient)
    AK24Power* _k24Power;
    
public:
    UK24PowerAnimInstance();
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnKillerPowerLevelChanged(int32 powerLevel);
    
    UFUNCTION()
    void OnIntroCompleted();
    
};

