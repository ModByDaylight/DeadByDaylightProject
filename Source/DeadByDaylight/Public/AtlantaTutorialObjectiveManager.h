#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlantaTutorialObjectiveManager.generated.h"

class UAtlantaObjectiveWidget;
class UVerticalBox;

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

