#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpecialEventGameplaySpawnerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpecialEventGameplaySpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpecialEventGameplaySpawnerComponent();
};

