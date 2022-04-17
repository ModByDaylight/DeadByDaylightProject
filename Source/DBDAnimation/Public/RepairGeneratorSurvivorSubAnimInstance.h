#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "AnimInstanceLeader.h"
#include "SkillCheckFailureTracker.h"
#include "UObject/NoExportTypes.h"
#include "GameEventData.h"
#include "RepairGeneratorSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API URepairGeneratorSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimInstanceLeader, public ISkillCheckFailureTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector _snapPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 _side;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 _repairAnimIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isRepairingGenerator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _rightFootDown;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _animSequenceVariationCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _isVomiting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool _hasSkillCheckFailed;
    
public:
    URepairGeneratorSurvivorSubAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);
    
protected:
    UFUNCTION()
    void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);
    
};

