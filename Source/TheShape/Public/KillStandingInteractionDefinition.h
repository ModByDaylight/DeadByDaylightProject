#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "KillStandingInteractionDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THESHAPE_API UKillStandingInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UKillStandingInteractionDefinition();
};

