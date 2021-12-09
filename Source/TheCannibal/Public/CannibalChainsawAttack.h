#pragma once
#include "CoreMinimal.h"
#include "HillbillyChainsawAttack.h"
#include "ButtonPromptSource.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttack.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttack : public UHillbillyChainsawAttack, public IButtonPromptSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FTagStateBool _isInTantrum;
    
public:
    UCannibalChainsawAttack();
};

