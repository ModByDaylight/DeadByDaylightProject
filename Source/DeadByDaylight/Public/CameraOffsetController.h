#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraOffsetController.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCameraOffsetController : public UActorComponent {
    GENERATED_BODY()
public:
    UCameraOffsetController();
};

