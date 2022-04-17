#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NurseAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UNurseAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isBlinkReady;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isChargingBlink;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isFullyCharged;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* _blinkSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isChainBlinking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isBlinking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _blinkPlayRate;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* _cooldownSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isInCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _cooldownPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isChainBlinkAttacking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isNurse;
    
public:
    UNurseAnimInstance();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBlinkTriggered();
    
};

