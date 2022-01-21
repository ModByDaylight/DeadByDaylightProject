#pragma once
#include "CoreMinimal.h"
#include "ChainsawAnalyticsBaseComponent.h"
#include "CannibalAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCannibalAnalyticsComponent : public UChainsawAnalyticsBaseComponent {
    GENERATED_BODY()
public:
    UCannibalAnalyticsComponent();
};

