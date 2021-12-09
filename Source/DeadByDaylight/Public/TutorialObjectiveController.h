#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TutorialObjectiveController.generated.h"

UCLASS(BlueprintType)
class UTutorialObjectiveController : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void RemoveObjective(FName tutorialObjectiveId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllObjectives();
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(FName tutorialObjectiveId, bool removeAfterCompletion);
    
    UFUNCTION(BlueprintCallable)
    void AddObjective(FName tutorialObjectiveId);
    
    UTutorialObjectiveController();
};

