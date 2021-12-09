#pragma once
#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "HillbillyChainsawSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UHillbillyChainsawSubAnimInstance : public UBaseKillerAttackSubAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isRevvingChainsaw;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRevvingChainsawCancelled;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isChainsawSprinting;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isWaitingForChainsaw;
    
public:
    UHillbillyChainsawSubAnimInstance();
};

