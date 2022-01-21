#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackableComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAttackableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAttackableComponent();
};

