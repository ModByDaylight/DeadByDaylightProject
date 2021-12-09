#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "InDreamSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _shouldLookSleepy;
    
public:
    UInDreamSurvivorSubAnimInstance();
};

