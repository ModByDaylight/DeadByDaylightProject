#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimPointProcessor.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UAimPointProcessor : public UActorComponent {
    GENERATED_BODY()
public:
    UAimPointProcessor();
};

