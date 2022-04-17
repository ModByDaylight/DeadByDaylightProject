#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DailyRitualPossibleCharacters.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "DailyRitualLevel.h"
#include "DailyRitualDefinition.generated.h"

class URitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FDailyRitualDefinition : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDailyRitualPossibleCharacters PossibleCharacters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EDBDScoreTypes> TrackedEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> TrackedGameEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDailyRitualLevel> DifficultyLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<URitualEvaluatorBase> Evaluator;
    
    DEADBYDAYLIGHT_API FDailyRitualDefinition();
};

