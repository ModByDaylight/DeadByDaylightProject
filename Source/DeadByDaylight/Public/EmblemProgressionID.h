#pragma once
#include "CoreMinimal.h"
#include "EEmblemProgressionType.h"
#include "EmblemProgressionDescriptionByQuality.h"
#include "EmblemProgressionID.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEmblemProgressionType EmblemProgressionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DefaultDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEmblemProgressionDescriptionByQuality> DescriptionsByQuality;
    
    DEADBYDAYLIGHT_API FEmblemProgressionID();
};

