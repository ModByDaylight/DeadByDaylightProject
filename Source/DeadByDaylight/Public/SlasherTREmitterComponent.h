#pragma once
#include "CoreMinimal.h"
#include "TerrorRadiusEmitterComponent.h"
#include "SlasherTREmitterComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherTREmitterComponent : public UTerrorRadiusEmitterComponent {
    GENERATED_BODY()
public:
    USlasherTREmitterComponent();
    UFUNCTION(BlueprintCallable)
    void SetBaseTerrorRadius(float baseTerrorRadius, const bool progressive);
    
};

