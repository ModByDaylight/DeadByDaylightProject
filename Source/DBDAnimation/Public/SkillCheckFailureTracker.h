#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "SkillCheckFailureTracker.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class DBDANIMATION_API USkillCheckFailureTracker : public UInterface {
    GENERATED_BODY()
};

class DBDANIMATION_API ISkillCheckFailureTracker : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void ResetSkillCheckFailed() PURE_VIRTUAL(ResetSkillCheckFailed,);
    
protected:
    UFUNCTION()
    virtual void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) PURE_VIRTUAL(OnSkillCheckFailed,);
    
};

