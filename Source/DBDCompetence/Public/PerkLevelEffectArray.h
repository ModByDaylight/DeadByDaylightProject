#pragma once
#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "PerkLevelEffectArray.generated.h"

USTRUCT(BlueprintType)
struct FPerkLevelEffectArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FStatusEffectSpawnData> EffectsToSpawn;
    
    DBDCOMPETENCE_API FPerkLevelEffectArray();
};

