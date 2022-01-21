#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZombiesPatrolAreaManager.generated.h"

class AMeatHook;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombiesPatrolAreaManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AMeatHook*> _availablePatrolAreas;
    
    UPROPERTY(Transient)
    TArray<AMeatHook*> _usedPatrolAreas;
    
    UPROPERTY(EditAnywhere)
    float _maxDistanceBetweenMeatHookAndPlayers;
    
public:
    UZombiesPatrolAreaManager();
};

