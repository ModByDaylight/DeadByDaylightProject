#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "EscapeMapInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UEscapeMapInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UEscapeMapInteraction();
};

