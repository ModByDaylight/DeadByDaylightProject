#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "KillerOpenGate.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerOpenGate : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor _openGateMontage;
    
public:
    UKillerOpenGate();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateSwitch() const;
    
};

