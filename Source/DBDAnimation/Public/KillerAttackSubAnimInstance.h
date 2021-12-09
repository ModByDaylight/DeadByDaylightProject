#pragma once
#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "KillerAttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UKillerAttackSubAnimInstance : public UBaseKillerAttackSubAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isCarrying;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isActive;
    
public:
    UKillerAttackSubAnimInstance();
};

