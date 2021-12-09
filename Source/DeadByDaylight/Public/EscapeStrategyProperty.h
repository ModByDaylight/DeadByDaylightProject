#pragma once
#include "CoreMinimal.h"
#include "EscapeStrategyType.h"
#include "EscapeStrategyProperty.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FEscapeStrategyProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EscapeStrategyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* Population;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    DEADBYDAYLIGHT_API FEscapeStrategyProperty();
};

