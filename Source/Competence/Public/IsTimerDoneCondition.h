#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTimerDoneCondition.generated.h"

class UTimerObject;

UCLASS()
class UIsTimerDoneCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Timer)
    UTimerObject* _timer;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimer(UTimerObject* timer);
    
private:
    UFUNCTION()
    void OnRep_Timer();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UIsTimerDoneCondition();
};

