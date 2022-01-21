#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "RangeBasedCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API URangeBasedCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Range)
    float _range;
    
public:
    URangeBasedCondition();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Range();
    
};

