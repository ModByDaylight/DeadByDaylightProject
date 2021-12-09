#pragma once
#include "CoreMinimal.h"
#include "AssignedPerkPropertiesV7.h"
#include "SavedCharacterLevelDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterLevelDataV7 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Level;
    
    UPROPERTY(SaveGame)
    bool HasPerksBeenSelected;
    
    UPROPERTY(SaveGame)
    bool HasPerkSelectionBeenGenerated;
    
    UPROPERTY(SaveGame)
    TArray<FAssignedPerkPropertiesV7> PerkSelection;
    
    DEADBYDAYLIGHT_API FSavedCharacterLevelDataV7();
};

