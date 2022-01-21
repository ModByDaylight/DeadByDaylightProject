#pragma once
#include "CoreMinimal.h"
#include "KillerAttackSubAnimInstance.h"
#include "EAttackType.h"
#include "K25AttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK25_API UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _hasDownedTargetHoldingLamentConfiguration;
    
public:
    UK25AttackSubAnimInstance();
protected:
    UFUNCTION()
    void OnAttackStart(const EAttackType attackType);
    
};

