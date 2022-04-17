#pragma once
#include "CoreMinimal.h"
#include "ETutorialObjectivePlayerActionMapping.h"
#include "DBDTableRowBase.h"
#include "EInteractionPromptType.h"
#include "TutorialObjective.generated.h"

USTRUCT(BlueprintType)
struct FTutorialObjective : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCompletionAnalyticEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionPromptType InteractionPromptType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETutorialObjectivePlayerActionMapping PlayerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionPromptType SecondaryInteractionPromptType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETutorialObjectivePlayerActionMapping SecondaryPlayerAction;
    
    DEADBYDAYLIGHT_API FTutorialObjective();
};

