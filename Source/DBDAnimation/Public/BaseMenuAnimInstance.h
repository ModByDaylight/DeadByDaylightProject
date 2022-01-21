#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseMenuAnimInstance.generated.h"

class ADBDMenuPlayer;

UCLASS(NonTransient)
class UBaseMenuAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UBaseMenuAnimInstance();
    UFUNCTION(BlueprintPure)
    ADBDMenuPlayer* GetOwningMenuPlayer() const;
    
};

