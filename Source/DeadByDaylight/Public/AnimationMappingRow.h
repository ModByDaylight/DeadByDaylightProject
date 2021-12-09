#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AnimationMapping.h"
#include "AnimationMappingRow.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FAnimationMappingRow : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAnimationMapping> Mappings;
    
    FAnimationMappingRow();
};

