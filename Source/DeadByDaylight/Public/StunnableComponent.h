#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStunnableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UStunnableComponent();
};

