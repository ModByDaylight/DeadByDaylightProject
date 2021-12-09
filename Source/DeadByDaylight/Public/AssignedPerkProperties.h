#pragma once
#include "CoreMinimal.h"
#include "AssignedPerkProperties.generated.h"

USTRUCT()
struct FAssignedPerkProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PerkId;
    
    UPROPERTY()
    int32 PerkLevel;
    
    UPROPERTY()
    bool IsTeachable;
    
    DEADBYDAYLIGHT_API FAssignedPerkProperties();
};

