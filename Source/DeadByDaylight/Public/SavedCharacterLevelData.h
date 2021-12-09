#pragma once
#include "CoreMinimal.h"
#include "AssignedPerkProperties.h"
#include "SavedCharacterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterLevelData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    bool HasPerksBeenSelected;
    
    UPROPERTY()
    bool HasPerkSelectionBeenGenerated;
    
    UPROPERTY()
    TArray<FAssignedPerkProperties> PerkSelection;
    
    DEADBYDAYLIGHT_API FSavedCharacterLevelData();
};

