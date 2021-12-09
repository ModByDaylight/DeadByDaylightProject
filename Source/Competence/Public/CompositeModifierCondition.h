#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "ConditionReceiver.h"
#include "CompositeModifierCondition.generated.h"

UCLASS(Abstract)
class COMPETENCE_API UCompositeModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Conditions)
    TArray<UEventDrivenModifierCondition*> _conditions;
    
    UFUNCTION()
    void OnRep_Conditions();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCompositeModifierCondition();
};

