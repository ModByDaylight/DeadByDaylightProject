#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelAISetupComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULevelAISetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULevelAISetupComponent();
};

