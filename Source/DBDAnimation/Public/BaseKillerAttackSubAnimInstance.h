#pragma once
#include "CoreMinimal.h"
#include "BasePlayerAttackSubAnimInstance.h"
#include "BaseKillerAttackSubAnimInstance.generated.h"

class ASlasherPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UBaseKillerAttackSubAnimInstance : public UBasePlayerAttackSubAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ASlasherPlayer* _owningKiller;
    
public:
    UBaseKillerAttackSubAnimInstance();
protected:
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetOwningKiller() const;
    
};

