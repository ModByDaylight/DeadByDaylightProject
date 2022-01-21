#pragma once
#include "CoreMinimal.h"
#include "Gate.h"
#include "TimerGate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ATimerGate : public AGate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _currentTime;
    
    ATimerGate();
    UFUNCTION(BlueprintCallable)
    void Update(float deltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetValues(float TimerDuration, float RushGain, float RushBlockDuration);
    
    UFUNCTION(BlueprintCallable)
    void Rushed(bool success);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTime(float time);
    
    UFUNCTION(BlueprintCallable)
    void AddTime(float time);
    
};

