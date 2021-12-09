#pragma once
#include "CoreMinimal.h"
#include "FlashlightableLightingStrategy.h"
#include "TracingConeFlashlightableLightingStrategy.generated.h"

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _aroundConeCircleTraceCount;
    
public:
    UTracingConeFlashlightableLightingStrategy();
};

