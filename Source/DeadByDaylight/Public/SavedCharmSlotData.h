#pragma once
#include "CoreMinimal.h"
#include "SavedCharmSlotData.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharmSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int8 SlotIndex;
    
    UPROPERTY(SaveGame)
    FName CharmId;
    
    DEADBYDAYLIGHT_API FSavedCharmSlotData();
};

