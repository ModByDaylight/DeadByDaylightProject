#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "PriceViewData.generated.h"

USTRUCT(BlueprintType)
struct FPriceViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float Discount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsAffordable;
    
    DBDUIVIEWINTERFACES_API FPriceViewData();
};

