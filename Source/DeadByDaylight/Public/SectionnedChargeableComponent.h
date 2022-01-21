#pragma once
#include "CoreMinimal.h"
#include "ChargeableComponent.h"
#include "SectionnedChargeableComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USectionnedChargeableComponent : public UChargeableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 _sections;
    
public:
    USectionnedChargeableComponent();
    UFUNCTION(BlueprintPure)
    float GetSectionChargeRemaining() const;
    
};

