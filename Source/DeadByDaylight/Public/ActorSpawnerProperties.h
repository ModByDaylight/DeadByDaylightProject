#pragma once
#include "CoreMinimal.h"
#include "ActorSpawnerProperties.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorSpawnerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> SceneElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    DEADBYDAYLIGHT_API FActorSpawnerProperties();
};

