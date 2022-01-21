#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseCharacterVelocityAdditiveStrategy.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBaseCharacterVelocityAdditiveStrategy : public UActorComponent {
    GENERATED_BODY()
public:
    UBaseCharacterVelocityAdditiveStrategy();
};

