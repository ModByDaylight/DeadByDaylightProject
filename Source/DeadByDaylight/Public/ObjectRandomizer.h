#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ObjectRandomizer.generated.h"

class UActorSpawner;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectRandomizer : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UActorSpawner*> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinPopulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxPopulation;
    
    UObjectRandomizer();
};

