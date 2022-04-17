#pragma once
#include "CoreMinimal.h"
#include "HillbillyChainsawAttack.h"
#include "ButtonPromptSource.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THECANNIBAL_API UCannibalChainsawAttack : public UHillbillyChainsawAttack, public IButtonPromptSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FTagStateBool _isInTantrum;
    
public:
    UCannibalChainsawAttack();
    
    // Fix for true pure virtual functions not being implemented
};

