#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GamePlayModifier.generated.h"

USTRUCT(BlueprintType)
struct COMPETENCE_API FGamePlayModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModifierValue;
    
    FGamePlayModifier();
};

