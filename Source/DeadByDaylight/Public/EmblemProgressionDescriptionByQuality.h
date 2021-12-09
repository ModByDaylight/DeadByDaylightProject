#pragma once
#include "CoreMinimal.h"
#include "EEmblemQuality.h"
#include "EmblemProgressionDescriptionByQuality.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionDescriptionByQuality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEmblemQuality EmblemQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    DEADBYDAYLIGHT_API FEmblemProgressionDescriptionByQuality();
};

