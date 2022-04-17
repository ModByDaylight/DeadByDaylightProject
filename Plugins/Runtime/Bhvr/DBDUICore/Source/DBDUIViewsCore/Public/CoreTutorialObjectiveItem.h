#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "TutorialObjectiveCompletedDelegate.h"
#include "TutorialObjectivesViewData.h"
#include "CoreTutorialObjectiveItem.generated.h"

UCLASS(EditInlineNew)
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable)
    FTutorialObjectiveCompleted TutorialObjectiveCompletedDelegate;
    
    UCoreTutorialObjectiveItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjectiveCompleted(bool removeAfterCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitObjective(const FTutorialObjectivesViewData& interactionsViewData);
    
};

