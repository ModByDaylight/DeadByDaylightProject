#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "LightbornBlindFailedIndicatorCondition.generated.h"

UCLASS()
class THEHILLBILLY_API ULightbornBlindFailedIndicatorCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _conditionReevaluationTimerDurationAfterFailedBlind;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedIsTrue)
    bool _replicatedIsTrue;
    
    UFUNCTION()
    void OnRep_ReplicatedIsTrue();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ULightbornBlindFailedIndicatorCondition();
};

