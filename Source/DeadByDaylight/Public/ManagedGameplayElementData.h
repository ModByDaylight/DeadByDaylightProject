#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ManagedGameplayElementData.generated.h"

class UActorSpawner;

USTRUCT(BlueprintType)
struct FManagedGameplayElementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UActorSpawner*> ActivatedSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UActorSpawner*> RemovedSpawners;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGameplayElementType PopulationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurrentPopulationCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxPopulationCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinPopulationCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinProximityBetweenElements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistSqrBetweenElements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TileWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FactorToAdjustToWhenOutOfProximity;
    
    DEADBYDAYLIGHT_API FManagedGameplayElementData();
};

