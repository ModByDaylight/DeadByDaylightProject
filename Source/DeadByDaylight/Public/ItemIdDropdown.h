#pragma once
#include "CoreMinimal.h"
#include "ItemIdDropdown.generated.h"

USTRUCT(BlueprintType)
struct FItemIdDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemID;
    
    DEADBYDAYLIGHT_API FItemIdDropdown();
};

