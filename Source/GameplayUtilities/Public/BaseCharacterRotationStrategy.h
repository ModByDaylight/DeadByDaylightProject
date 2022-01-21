#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseCharacterRotationStrategy.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBaseCharacterRotationStrategy : public UActorComponent {
    GENERATED_BODY()
public:
    UBaseCharacterRotationStrategy();
};

