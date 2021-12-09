#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "ArchiveQuestObjectiveDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveQuestObjectiveDefinition : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RulesDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> DescriptionParameters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsProgressionPercentage;
    
    DEADBYDAYLIGHT_API FArchiveQuestObjectiveDefinition();
};

