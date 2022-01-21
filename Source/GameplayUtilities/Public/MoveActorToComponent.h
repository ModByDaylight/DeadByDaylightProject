#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveActorToComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UMoveActorToComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMoveActorToComponent();
};

