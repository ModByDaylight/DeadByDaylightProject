#pragma once
#include "CoreMinimal.h"
#include "AtlantaBaseEventsUIData.h"
#include "AtlantaCalendarEventsUIData.generated.h"

USTRUCT()
struct FAtlantaCalendarEventsUIData : public FAtlantaBaseEventsUIData {
    GENERATED_BODY()
public:
    DEADBYDAYLIGHT_API FAtlantaCalendarEventsUIData();
};

