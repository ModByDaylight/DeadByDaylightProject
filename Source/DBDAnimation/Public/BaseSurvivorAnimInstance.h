#pragma once
#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "BaseSurvivorAnimInstance.generated.h"

class ACamperPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UBaseSurvivorAnimInstance : public UPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ACamperPlayer* _owningSurvivor;
    
public:
    UBaseSurvivorAnimInstance();
protected:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetOwningSurvivor() const;
    
};

