#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "ItemData.h"
#include "CurrencyPackData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyPackData : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECurrencyType CurrencyType;
    
    DEADBYDAYLIGHT_API FCurrencyPackData();
};

