#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPairQueryEvaluatorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class QUERYSERVICE_API UActorPairQueryEvaluatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UActorPairQueryEvaluatorComponent();
};

