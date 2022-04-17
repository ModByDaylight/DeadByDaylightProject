#pragma once
#include "CoreMinimal.h"
#include "EModifierCompoundStrategy.h"
#include "EModifierOperationStrategy.h"
#include "GameplayTagContainer.h"
#include "StatModifier.generated.h"

USTRUCT(BlueprintType)
struct STATSYSTEM_API FStatModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EModifierOperationStrategy OperationStrategy;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag ModifierTag;
    
    UPROPERTY(EditDefaultsOnly)
    EModifierCompoundStrategy CompoundStrategy;
    
    FStatModifier();
};

