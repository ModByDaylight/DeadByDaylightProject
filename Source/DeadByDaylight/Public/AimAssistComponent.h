#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimAssistComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAimAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAimAssistComponent();
};

