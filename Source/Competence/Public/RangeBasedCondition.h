#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "RangeBasedCondition.generated.h"

UCLASS()
class COMPETENCE_API URangeBasedCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Range)
    float _range;
    
    UFUNCTION()
    void OnRep_Range();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URangeBasedCondition();
};

