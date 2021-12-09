#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "GameplayElementsPopulation.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGameplayElementsPopulation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EGameplayElementType Type;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> GameplayElementBlueprint;
    
    UPROPERTY(EditAnywhere)
    int32 MinPopulation;
    
    UPROPERTY(EditAnywhere)
    int32 MaxPopulation;
    
    UPROPERTY(EditAnywhere)
    int32 MinGuaranteePopulation;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnPass;
    
public:
    DEADBYDAYLIGHT_API FGameplayElementsPopulation();
};

