#pragma once
#include "CoreMinimal.h"
#include "ObjectRandomizer.h"
#include "SpawnerElement.h"
#include "ActorSpawnerRandomizer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorSpawnerRandomizer : public UObjectRandomizer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnerElement> ActivatedSpawnerContentLists;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnerElement> DeactivatedSpawnerContentLists;
    
public:
    UActorSpawnerRandomizer();
};

