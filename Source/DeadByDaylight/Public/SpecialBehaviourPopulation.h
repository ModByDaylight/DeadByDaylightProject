#pragma once
#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ETileSpawnPointType.h"
#include "SpecialBehaviourPopulation.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpecialBehaviourPopulation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameplayElementType> _spawnerTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETileSpawnPointType> _spawnPointTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> _actor;
    
public:
    DEADBYDAYLIGHT_API FSpecialBehaviourPopulation();
};

