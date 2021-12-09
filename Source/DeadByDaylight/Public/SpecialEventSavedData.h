#pragma once
#include "CoreMinimal.h"
#include "SpecialEventSavedData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventSavedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SeenCinematics;
    
    UPROPERTY()
    bool EventEntryScreenOpened;
    
    DEADBYDAYLIGHT_API FSpecialEventSavedData();
};

