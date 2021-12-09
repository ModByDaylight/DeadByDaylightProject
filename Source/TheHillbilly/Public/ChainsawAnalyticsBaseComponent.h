#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChainsawAnalyticsBaseComponent.generated.h"

UCLASS(Abstract)
class THEHILLBILLY_API UChainsawAnalyticsBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _maxDistanceFromHookToBeConsideredCamping;
    
public:
    UChainsawAnalyticsBaseComponent();
};

