#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SkillCheckFailureTracker.h"
#include "SabotageSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API USabotageSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isSabotaging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasSkillCheckFailed;
    
public:
    USabotageSurvivorSubAnimInstance();
};

