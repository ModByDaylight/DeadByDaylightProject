#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "SuperModeDeactivation.generated.h"

UCLASS(EditInlineNew)
class USuperModeDeactivation : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _deactivationDuration;
    
public:
    USuperModeDeactivation();
};

