#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomKillerInstinctData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FCustomKillerInstinctData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* ParticleSystemAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> SurvivorStateTags;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> KillerStateTags;
    
    FCustomKillerInstinctData();
};

