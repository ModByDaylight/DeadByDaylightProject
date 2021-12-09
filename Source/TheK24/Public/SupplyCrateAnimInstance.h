#pragma once
#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "SupplyCrateAnimInstance.generated.h"

class ASupplyCrateInteractable;

UCLASS(NonTransient)
class USupplyCrateAnimInstance : public USleepingAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASupplyCrateInteractable* _owningSupplyCrate;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isOpen;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isBeingPriedOpen;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isAutoClosing;
    
public:
    USupplyCrateAnimInstance();
};

