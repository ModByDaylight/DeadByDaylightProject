#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "RecallTwin.generated.h"

class AConjoinedTwin;

UCLASS(EditInlineNew)
class URecallTwin : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
public:
    URecallTwin();
};

