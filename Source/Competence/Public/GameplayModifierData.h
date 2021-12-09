#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GamePlayModifier.h"
#include "GameplayTagContainer.h"
#include "GameplayModifierData.generated.h"

class UBaseModifierCondition;

USTRUCT(BlueprintType)
struct FGameplayModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UBaseModifierCondition>> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGamePlayModifier> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> TaggedFlags;
    
    COMPETENCE_API FGameplayModifierData();
};

