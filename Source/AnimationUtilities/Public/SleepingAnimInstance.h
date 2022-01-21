#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SleepingAnimInstance.generated.h"

class UAnimMontage;

UCLASS(NonTransient)
class ANIMATIONUTILITIES_API USleepingAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USleepingAnimInstance();
    UFUNCTION(BlueprintCallable)
    void Wakeup();
    
    UFUNCTION(BlueprintCallable)
    void SetNeverIdle(bool neverIdle);
    
    UFUNCTION()
    void OnMontageStart(UAnimMontage* montage);
    
};

