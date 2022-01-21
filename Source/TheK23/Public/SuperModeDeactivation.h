#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "SuperModeDeactivation.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USuperModeDeactivation : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _deactivationDuration;
    
public:
    USuperModeDeactivation();
};

