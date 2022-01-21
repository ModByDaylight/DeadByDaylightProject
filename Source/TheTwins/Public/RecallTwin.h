#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "RecallTwin.generated.h"

class AConjoinedTwin;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class URecallTwin : public UInteractionDefinition {
    GENERATED_BODY()
public:
    URecallTwin();
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
};

