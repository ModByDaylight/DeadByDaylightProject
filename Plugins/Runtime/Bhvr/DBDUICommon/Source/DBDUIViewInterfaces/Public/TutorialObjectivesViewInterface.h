#pragma once
#include "CoreMinimal.h"
#include "TutorialObjectivesViewData.h"
#include "UObject/Interface.h"
#include "TutorialObjectivesViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UTutorialObjectivesViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ITutorialObjectivesViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveTutorialObjective(const FName& id);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllTutorialObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompleteTutorialObjective(const FName& id, bool removeAfterCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddTutorialObjective(const FName& id, const FTutorialObjectivesViewData& interactionPromptViewData);
    
};

