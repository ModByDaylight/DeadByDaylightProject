#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerGateDecrease.generated.h"

class ATimerGate;

UCLASS()
class DEADBYDAYLIGHT_API ATimerGateDecrease : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ATimerGate* TimerGate;
    
    ATimerGateDecrease();
    UFUNCTION(BlueprintCallable)
    void Update(float deltaTime);
    
};

