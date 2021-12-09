#pragma once
#include "CoreMinimal.h"
#include "ModifierTickableConditionReplicatedData.generated.h"

class UBaseModifierCondition;

USTRUCT(BlueprintType)
struct FModifierTickableConditionReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UBaseModifierCondition*> Conditions;
    
    UPROPERTY()
    bool HasCondition;
    
    UPROPERTY()
    bool AuthorityDataSet;
    
    DEADBYDAYLIGHT_API FModifierTickableConditionReplicatedData();
};

