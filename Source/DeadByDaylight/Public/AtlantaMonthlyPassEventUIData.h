#pragma once
#include "CoreMinimal.h"
#include "AtlantaBaseEventsUIData.h"
#include "AtlantaMonthlyPassEventUIData.generated.h"

USTRUCT()
struct FAtlantaMonthlyPassEventUIData : public FAtlantaBaseEventsUIData {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FAtlantaMonthlyPassEventUIData();
};

