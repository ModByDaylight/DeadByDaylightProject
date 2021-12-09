#pragma once
#include "CoreMinimal.h"
#include "EAttackType.h"
#include "KillerAttackSubAnimInstance.h"
#include "K25AttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK25_API UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _hasDownedTargetHoldingLamentConfiguration;
    
    UFUNCTION()
    void OnAttackStart(const EAttackType attackType);
    
public:
    UK25AttackSubAnimInstance();
};

