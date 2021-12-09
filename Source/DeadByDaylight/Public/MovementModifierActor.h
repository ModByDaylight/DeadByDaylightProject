#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovementModifierActor.generated.h"

UCLASS()
class AMovementModifierActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeedMultiplier;
    
    AMovementModifierActor();
};

