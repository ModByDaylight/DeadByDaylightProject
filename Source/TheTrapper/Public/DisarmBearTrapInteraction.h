#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DisarmBearTrapInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _averageMaxVelocity;
    
    UPROPERTY()
    float _averageMaxVelocitySquared;
    
    UPROPERTY(EditAnywhere)
    FName _updateMontageID;
    
    UPROPERTY(EditAnywhere)
    FName _loudNoiseAudibleRangeTunable;
    
public:
    UDisarmBearTrapInteraction();
};

