#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "TutorialObjectivesViewInterface.h"
#include "CoreTutorialObjectivesContainer.generated.h"

class UGridPanel;
class UCoreTutorialObjectiveItem;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget, public ITutorialObjectivesViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreTutorialObjectiveItem> CoreTutorialObjectiveItemClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    int32 BasePooledInstanceAmount;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGridPanel* ObjectiveContainer;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UCoreTutorialObjectiveItem*> _objectivePool;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UCoreTutorialObjectiveItem*> _objectiveItems;
    
public:
    UCoreTutorialObjectivesContainer();
private:
    UFUNCTION()
    void OnTutorialObjectiveCompleted(UCoreTutorialObjectiveItem* item);
    
    
    // Fix for true pure virtual functions not being implemented
};

