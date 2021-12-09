#pragma once
#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "DebugLoadoutPerk.generated.h"

USTRUCT(BlueprintType)
struct FDebugLoadoutPerk {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableDropdown PerkID;
    
    UPROPERTY(EditAnywhere)
    int32 PerkLevel;
    
    DEADBYDAYLIGHT_API FDebugLoadoutPerk();
};

