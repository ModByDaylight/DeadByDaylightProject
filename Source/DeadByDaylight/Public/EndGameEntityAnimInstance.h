#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EndGameEntityAnimInstance.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UEndGameEntityAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isFront;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBack;
    
public:
    UEndGameEntityAnimInstance();
};

