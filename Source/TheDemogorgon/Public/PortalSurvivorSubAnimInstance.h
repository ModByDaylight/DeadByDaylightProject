#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SkillCheckFailureTracker.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "PortalSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDestroyingPortal;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isSpooked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasSkillCheckFailed;
    
public:
    UPortalSurvivorSubAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);
    
protected:
    UFUNCTION()
    void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);
    
};

