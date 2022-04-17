#pragma once
#include "CoreMinimal.h"
#include "BaseInstantBlinkInteraction.h"
#include "BlinkBackInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkBackInteraction : public UBaseInstantBlinkInteraction {
    GENERATED_BODY()
public:
    UBlinkBackInteraction();
};

