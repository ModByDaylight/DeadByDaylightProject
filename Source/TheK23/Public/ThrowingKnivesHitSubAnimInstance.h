#pragma once
#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "ThrowingKnivesHitSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UThrowingKnivesHitSubAnimInstance : public UBaseSurvivorAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _hitByKnifeTrigger;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _knifeHitCausedKOTrigger;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _knifeHitCausedDamageTrigger;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _useAlternateHitReactionState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _knifeHitAngle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _knifeHitStateHitAngle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float _alternateKnifeHitStateHitAngle;
    
public:
    UThrowingKnivesHitSubAnimInstance();
};

