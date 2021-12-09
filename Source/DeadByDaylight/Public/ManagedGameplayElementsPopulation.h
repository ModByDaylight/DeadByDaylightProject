#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ManagedGameplayElementsPopulation.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FManagedGameplayElementsPopulation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGameplayElementType Type;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> GameplayElementBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinPopulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxPopulation;
    
    DEADBYDAYLIGHT_API FManagedGameplayElementsPopulation();
};

