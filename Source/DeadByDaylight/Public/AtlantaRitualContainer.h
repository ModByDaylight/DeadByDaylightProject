#pragma once
#include "CoreMinimal.h"
#include "AtlantaRitualSetArray.h"
#include "AtlantaRitualContainer.generated.h"

USTRUCT()
struct FAtlantaRitualContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, FAtlantaRitualSetArray> RitualsMap;
    
    DEADBYDAYLIGHT_API FAtlantaRitualContainer();
};

