#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionDefinition.h"
#include "ItemCraftInteraction.generated.h"

class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UItemCraftInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName _attachToSocketName;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ACollectable> _collectableClass;
    
public:
    UItemCraftInteraction();
};

