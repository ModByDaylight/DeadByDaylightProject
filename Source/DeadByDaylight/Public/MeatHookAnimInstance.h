#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MeatHookAnimInstance.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UMeatHookAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool IsBroken;
    
    UPROPERTY(BlueprintReadOnly)
    float Yaw;
    
public:
    UMeatHookAnimInstance();
};

