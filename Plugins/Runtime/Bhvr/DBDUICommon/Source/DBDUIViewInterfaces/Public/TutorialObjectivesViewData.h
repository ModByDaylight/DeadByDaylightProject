#pragma once
#include "CoreMinimal.h"
#include "InteractionPromptViewData.h"
#include "TutorialObjectivesViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FTutorialObjectivesViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionPromptViewData PrimaryInteractionPromptViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionPromptViewData SecondaryInteractionPromptViewData;
    
    FTutorialObjectivesViewData();
};

