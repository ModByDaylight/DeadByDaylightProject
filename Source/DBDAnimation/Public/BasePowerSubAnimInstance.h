#pragma once
#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "BasePowerSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UBasePowerSubAnimInstance : public UBaseKillerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isUsingPower;
    
public:
    UBasePowerSubAnimInstance();
};

