#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "SkillCheckFailureTracker.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "HealSurvivorSubAnimInstance.generated.h"

class ADBDPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API UHealSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHealingACrawlingTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHealingOtherNoMedkit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHealingOtherMedkit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHealingSelfNoMedkit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isHealingSelfMedkit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isWakingUpOther;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isBeingHealed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isBeingMended;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isMendingOther;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasSkillCheckFailed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isCrawling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasHealerSkillCheckFailed;
    
public:
    UHealSurvivorSubAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetHealerSkillCheckFailed();
    
    UFUNCTION()
    void OnHealerSkillCheckResponseAesthetic(bool success, ADBDPlayer* healer);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);
    
protected:
    UFUNCTION()
    void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);
    
};

