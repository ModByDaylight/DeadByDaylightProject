#pragma once
#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K26AnimInstance.generated.h"

UCLASS(NonTransient)
class UK26AnimInstance : public UKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isUsingPower;
    
public:
    UK26AnimInstance();
};

