#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "TormentModeCooldownInteraction.generated.h"

UCLASS(EditInlineNew)
class UTormentModeCooldownInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _tormentModeCooldownTime;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _tormentModeCancelWalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _normalWalkSpeed;
    
public:
    UTormentModeCooldownInteraction();
};

