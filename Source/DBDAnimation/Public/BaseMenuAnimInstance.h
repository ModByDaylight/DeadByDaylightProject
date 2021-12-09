#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseMenuAnimInstance.generated.h"

class ADBDMenuPlayer;

UCLASS(NonTransient)
class UBaseMenuAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    ADBDMenuPlayer* GetOwningMenuPlayer() const;
    
    UBaseMenuAnimInstance();
};

