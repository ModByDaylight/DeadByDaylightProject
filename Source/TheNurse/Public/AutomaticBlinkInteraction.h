#pragma once
#include "CoreMinimal.h"
#include "BaseInstantBlinkInteraction.h"
#include "AutomaticBlinkInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UAutomaticBlinkInteraction : public UBaseInstantBlinkInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _blinkDistancePercent;
    
public:
    UAutomaticBlinkInteraction();
};

