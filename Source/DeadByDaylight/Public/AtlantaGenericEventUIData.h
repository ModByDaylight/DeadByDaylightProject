#pragma once
#include "CoreMinimal.h"
#include "AtlantaBaseEventsUIData.h"
#include "AtlantaEventElementUIData.h"
#include "AtlantaGenericEventUIData.generated.h"

USTRUCT()
struct FAtlantaGenericEventUIData : public FAtlantaBaseEventsUIData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAtlantaEventElementUIData> elementsUIData;
    
    DEADBYDAYLIGHT_API FAtlantaGenericEventUIData();
};

