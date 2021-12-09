#pragma once
#include "CoreMinimal.h"
#include "PromoPackItemPayloadData.h"
#include "PromoPackCurrencyPayloadData.generated.h"

USTRUCT()
struct FPromoPackCurrencyPayloadData : public FPromoPackItemPayloadData {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FPromoPackCurrencyPayloadData();
};

