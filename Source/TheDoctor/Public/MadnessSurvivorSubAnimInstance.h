#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "MadnessSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isTotallyInsane;
    
public:
    UMadnessSurvivorSubAnimInstance();
};

