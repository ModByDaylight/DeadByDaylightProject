#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaTutorialObjectiveManager.generated.h"

class UVerticalBox;
class UAtlantaObjectiveWidget;

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaTutorialObjectiveManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UAtlantaObjectiveWidget*> _objectivesList;
    
    UPROPERTY(Export)
    UVerticalBox* _objectivesContainer;
    
public:
    UAtlantaTutorialObjectiveManager();
};

