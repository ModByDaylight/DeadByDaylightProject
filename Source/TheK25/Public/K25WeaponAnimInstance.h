#pragma once
#include "CoreMinimal.h"
#include "BaseKillerWeaponAnimInstance.h"
#include "EAttackType.h"
#include "K25WeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK25_API UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _hasDownedTargetHoldingLamentConfiguration;
    
public:
    UK25WeaponAnimInstance();
protected:
    UFUNCTION()
    void OnAttackStart(const EAttackType attackType);
    
};

