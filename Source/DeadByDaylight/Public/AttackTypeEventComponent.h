#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackTypeEventComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAttackTypeEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAttackTypeEventComponent();
};

