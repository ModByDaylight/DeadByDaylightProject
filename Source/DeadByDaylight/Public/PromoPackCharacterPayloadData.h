#pragma once
#include "CoreMinimal.h"
#include "PromoPackItemPayloadData.h"
#include "PromoPackCharacterPayloadData.generated.h"

USTRUCT()
struct FPromoPackCharacterPayloadData : public FPromoPackItemPayloadData {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FPromoPackCharacterPayloadData();
};

