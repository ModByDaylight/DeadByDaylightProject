#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K25RemoveChainInteraction.generated.h"

class UK25SurvivorChainAttachmentComponent;
class AK25Chain;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25RemoveChainInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _interactionTimePerChainsAttached;
    
private:
    UPROPERTY(Export, Transient)
    UK25SurvivorChainAttachmentComponent* _cachedSurvivorChainAttachmentComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AK25Chain> _chainBeingRemoved;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent;
    
public:
    UK25RemoveChainInteraction();
};

