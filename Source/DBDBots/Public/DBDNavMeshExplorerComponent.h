#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITunableParameter.h"
#include "DBDNavMeshExplorerComponent.generated.h"

class UDBDPathFollowingComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDNavMeshExplorerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ExploreAtAgentMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float ExploreAtInterval;
    
    UPROPERTY(EditDefaultsOnly)
    FAITunableParameter ExplorationBoxHalfExtent;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FullyAutoExploredAtGameTime;
    
private:
    UPROPERTY(Export, Transient)
    UDBDPathFollowingComponent* _pathFollowingComponent;
    
public:
    UDBDNavMeshExplorerComponent();
};

