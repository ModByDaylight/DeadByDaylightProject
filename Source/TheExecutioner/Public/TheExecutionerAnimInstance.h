#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TheExecutionerAnimInstance.generated.h"

UCLASS(NonTransient)
class UTheExecutionerAnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isInTormentMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isChargingTormentMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isTormentModeAttacking;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _tormentModeVerticalInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _tormentModeHorizontalInput;
    
public:
    UTheExecutionerAnimInstance();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void NoInputFeedbackCosmetic();
    
};

