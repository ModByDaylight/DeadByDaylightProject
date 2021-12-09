#pragma once
#include "CoreMinimal.h"
#include "SavedSpecialEventDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpecialEventDataV7 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName EventId;
    
    UPROPERTY(SaveGame)
    TArray<int32> SeenCinematics;
    
    UPROPERTY(SaveGame)
    bool EventEntryScreenOpened;
    
    DEADBYDAYLIGHT_API FSavedSpecialEventDataV7();
};

