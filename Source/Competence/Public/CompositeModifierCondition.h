#pragma once
#include "CoreMinimal.h"
#include "ConditionReceiver.h"
#include "EventDrivenModifierCondition.h"
#include "CompositeModifierCondition.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UCompositeModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Conditions)
    TArray<UEventDrivenModifierCondition*> _conditions;
    
public:
    UCompositeModifierCondition();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Conditions();
    
    
    // Fix for true pure virtual functions not being implemented
};

