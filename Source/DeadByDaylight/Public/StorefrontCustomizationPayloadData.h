#pragma once
#include "CoreMinimal.h"
#include "PromoPackItemPayloadData.h"
#include "StorefrontCustomizationPayloadData.generated.h"

USTRUCT()
struct FStorefrontCustomizationPayloadData : public FPromoPackItemPayloadData {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FStorefrontCustomizationPayloadData();
};

