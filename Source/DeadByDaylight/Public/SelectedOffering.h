#pragma once
#include "CoreMinimal.h"
#include "SelectedOffering.generated.h"

USTRUCT(BlueprintType)
struct FSelectedOffering {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ownerId;
    
    UPROPERTY()
    FName OfferingName;
    
    DEADBYDAYLIGHT_API FSelectedOffering();
};

