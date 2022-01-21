#pragma once
#include "CoreMinimal.h"
#include "ConditionReceiver.h"
#include "EventDrivenModifierCondition.h"
#include "NotModifierCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UNotModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Condition)
    UEventDrivenModifierCondition* _condition;
    
public:
    UNotModifierCondition();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_Condition();
    
    
    // Fix for true pure virtual functions not being implemented
};

