#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InFrustumComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UInFrustumComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UInFrustumComponent();
};

