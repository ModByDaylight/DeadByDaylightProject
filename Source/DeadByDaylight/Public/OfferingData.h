#pragma once
#include "CoreMinimal.h"
#include "SelectedOffering.h"
#include "OfferingData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool OfferingReady;
    
    UPROPERTY()
    TArray<FSelectedOffering> Offerings;
    
    DEADBYDAYLIGHT_API FOfferingData();
};

