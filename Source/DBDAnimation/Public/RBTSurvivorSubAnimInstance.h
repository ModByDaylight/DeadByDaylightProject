#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SkillCheckFailureTracker.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
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
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);
    
protected:
    UFUNCTION()
    void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);
    
};

