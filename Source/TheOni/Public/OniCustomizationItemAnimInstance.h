#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OniCustomizationItemAnimInstance.generated.h"

UCLASS(NonTransient)
class UOniCustomizationItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isInDemonMode;
    
public:
    UOniCustomizationItemAnimInstance();
private:
    UFUNCTION()
    void SetIsInDemonMode(const bool isInDemonMode);
    
};

