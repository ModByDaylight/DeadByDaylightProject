#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BaseLockerInteraction.generated.h"

class ALocker;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UBaseLockerInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ALocker* _owningLocker;
    
public:
    UBaseLockerInteraction();
};

