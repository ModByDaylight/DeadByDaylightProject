#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieEscapeDoorPointsActor.generated.h"

class UArrowComponent;

UCLASS()
class AZombieEscapeDoorPointsActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UArrowComponent*> _availablePoints;
    
public:
    AZombieEscapeDoorPointsActor();
};

