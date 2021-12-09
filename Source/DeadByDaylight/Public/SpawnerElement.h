#pragma once
#include "CoreMinimal.h"
#include "ActorSpawnerProperties.h"
#include "SpawnerElement.generated.h"

USTRUCT(BlueprintType)
struct FSpawnerElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActorSpawnerProperties> ObjectsToBeSpawned;
    
    DEADBYDAYLIGHT_API FSpawnerElement();
};

