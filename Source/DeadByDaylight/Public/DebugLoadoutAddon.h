#pragma once
#include "CoreMinimal.h"
#include "DataTableDropdown.h"
#include "DebugLoadoutAddon.generated.h"

USTRUCT(BlueprintType)
struct FDebugLoadoutAddon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableDropdown AddonID;
    
    DEADBYDAYLIGHT_API FDebugLoadoutAddon();
};

