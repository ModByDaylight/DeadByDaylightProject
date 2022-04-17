#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BlinkIndicatorController.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkIndicatorController : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _indicatorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _activationFlag;
    
    UPROPERTY(EditDefaultsOnly)
    float _indicatorMinimumVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float _indicatorVelocityEasingFactor;
    
    UPROPERTY(Transient)
    AActor* _indicator;
    
public:
    UBlinkIndicatorController();
};

