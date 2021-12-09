#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "CollectItemInteraction.generated.h"

class ACollectable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCollectItemInteractionOnCollectUpdateStart);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCollectItemInteractionOnCollectUpdateEnd);

UCLASS(EditInlineNew)
class DBDINTERACTION_API UCollectItemInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCollectItemInteractionOnCollectUpdateStart OnCollectUpdateStart;
    
    UPROPERTY(BlueprintAssignable)
    FCollectItemInteractionOnCollectUpdateEnd OnCollectUpdateEnd;
    
    UFUNCTION(BlueprintPure)
    ACollectable* GetItem() const;
    
    UCollectItemInteraction();
};

