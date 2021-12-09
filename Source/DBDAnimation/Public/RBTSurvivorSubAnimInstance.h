#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SkillCheckFailureTracker.h"
#include "RBTSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API URBTSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRemovingRBT;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasSkillCheckFailed;
    
public:
    URBTSurvivorSubAnimInstance();
};

