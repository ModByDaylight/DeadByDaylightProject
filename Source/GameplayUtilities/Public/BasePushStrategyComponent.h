#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BasePushStrategyComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBasePushStrategyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBasePushStrategyComponent();
};

