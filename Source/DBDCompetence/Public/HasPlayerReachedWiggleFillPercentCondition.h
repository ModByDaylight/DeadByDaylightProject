#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "HasPlayerReachedWiggleFillPercentCondition.generated.h"

class UChargeableComponent;

UCLASS()
class DBDCOMPETENCE_API UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsWigglePercentReached)
    bool _isWigglePercentReached;
    
    UFUNCTION()
    void OnRep_IsWigglePercentReached();
    
    UFUNCTION()
    void Authority_OnOwnerWiggleChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHasPlayerReachedWiggleFillPercentCondition();
};

