#pragma once
#include "CoreMinimal.h"
#include "ModifierReplicatedEventConditionData.generated.h"

class UEventDrivenModifierCondition;

USTRUCT(BlueprintType)
struct COMPETENCE_API FModifierReplicatedEventConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UEventDrivenModifierCondition* EventDrivenCondition;
    
    UPROPERTY()
    bool HasCondition;
    
    UPROPERTY()
    bool AuthorityDataSet;
    
    FModifierReplicatedEventConditionData();
};

