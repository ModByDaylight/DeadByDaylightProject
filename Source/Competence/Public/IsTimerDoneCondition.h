#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTimerDoneCondition.generated.h"

class UTimerObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsTimerDoneCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Timer)
    UTimerObject* _timer;
    
public:
    UIsTimerDoneCondition();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(UTimerObject* timer);
    
private:
    UFUNCTION()
    void OnRep_Timer();
    
};

