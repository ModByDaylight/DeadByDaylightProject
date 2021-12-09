#pragma once
#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "HatchAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UHatchAnimInstance : public USleepingAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isOpen;
    
public:
    UHatchAnimInstance();
};

