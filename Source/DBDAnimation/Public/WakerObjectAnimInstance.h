#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WakerObjectAnimInstance.generated.h"

class AWakerObject;

UCLASS(NonTransient)
class DBDANIMATION_API UWakerObjectAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _reappearTimerCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float _wakeUpCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _chargeStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _interactionComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _outEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _reset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _inEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _wakerObjectStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _respawnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool _cancelEnd;
    
public:
    UWakerObjectAnimInstance();
private:
    UFUNCTION(BlueprintCallable)
    void ResetReappearTimer();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReappear();
    
private:
    UFUNCTION(BlueprintPure)
    bool GetWakerObjectStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWakerObjectChargeComplete() const;
    
    UFUNCTION(BlueprintPure)
    float GetWakerObjectCharge() const;
    
    UFUNCTION(BlueprintPure)
    AWakerObject* GetWakerObject() const;
    
};

