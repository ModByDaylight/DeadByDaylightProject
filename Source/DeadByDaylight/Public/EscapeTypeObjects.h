#pragma once
#include "CoreMinimal.h"
#include "EscapeStrategyType.h"
#include "EscapeTypeObjects.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEscapeTypeObjects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EscapeStrategyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> EscapeObjects;
    
    DEADBYDAYLIGHT_API FEscapeTypeObjects();
};

