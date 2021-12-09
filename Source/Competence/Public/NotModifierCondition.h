#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "ConditionReceiver.h"
#include "NotModifierCondition.generated.h"

UCLASS()
class COMPETENCE_API UNotModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Condition)
    UEventDrivenModifierCondition* _condition;
    
    UFUNCTION()
    void OnRep_Condition();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UNotModifierCondition();
};

