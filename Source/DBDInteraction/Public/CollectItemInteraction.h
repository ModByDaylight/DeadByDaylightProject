#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "OnCollectUpdateStartDelegate.h"
#include "OnCollectUpdateEndDelegate.h"
#include "CollectItemInteraction.generated.h"

class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UCollectItemInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCollectUpdateStart OnCollectUpdateStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnCollectUpdateEnd OnCollectUpdateEnd;
    
    UCollectItemInteraction();
    UFUNCTION(BlueprintPure)
    ACollectable* GetItem() const;
    
};

