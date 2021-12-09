#pragma once
#include "CoreMinimal.h"
#include "AssignedPerkPropertiesV7.generated.h"

USTRUCT(BlueprintType)
struct FAssignedPerkPropertiesV7 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName PerkId;
    
    UPROPERTY(SaveGame)
    int32 PerkLevel;
    
    UPROPERTY(SaveGame)
    bool IsTeachable;
    
    DEADBYDAYLIGHT_API FAssignedPerkPropertiesV7();
};

