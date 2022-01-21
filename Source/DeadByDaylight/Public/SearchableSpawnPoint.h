#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TileSpawnPoint.h"
#include "SearchableSpawnPoint.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class USearchableSpawnPoint : public UTileSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
    USearchableSpawnPoint();
};

