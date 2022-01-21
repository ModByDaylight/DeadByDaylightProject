#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K24AnimInstance.generated.h"

UCLASS(NonTransient)
class UK24AnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInPowerMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isChargingPower;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isK24PowerAttacking;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRequestingPowerAttack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 _powerLevel;
    
public:
    UK24AnimInstance();
private:
    UFUNCTION()
    void OnKillerPowerLevelChanged(int32 powerLevel);
    
};

