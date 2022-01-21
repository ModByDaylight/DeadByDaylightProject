#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "ActivateSuperMode.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivateSuperMode : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAnimationMontageDescriptor _activationMontage;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _activationDuration;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _confirmationChargeDuration;
    
public:
    UActivateSuperMode();
};

