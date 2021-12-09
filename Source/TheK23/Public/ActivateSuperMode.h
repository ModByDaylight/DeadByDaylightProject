#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "DBDTunableRowHandle.h"
#include "ActivateSuperMode.generated.h"

UCLASS(EditInlineNew)
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

