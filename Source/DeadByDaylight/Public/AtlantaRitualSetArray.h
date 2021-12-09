#pragma once
#include "CoreMinimal.h"
#include "AtlantaRitualSet.h"
#include "AtlantaRitualSetArray.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualSetArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAtlantaRitualSet> rituals;
    
    DEADBYDAYLIGHT_API FAtlantaRitualSetArray();
};

