#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "TutorialObjectivesViewData.h"
#include "CoreTutorialObjectiveItem.generated.h"

class UCoreTutorialObjectiveItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate, UCoreTutorialObjectiveItem*, item);

UCLASS(EditInlineNew)
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable)
    FCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate TutorialObjectiveCompletedDelegate;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjectiveCompleted(bool removeAfterCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitObjective(const FTutorialObjectivesViewData& interactionsViewData);
    
    UCoreTutorialObjectiveItem();
};

