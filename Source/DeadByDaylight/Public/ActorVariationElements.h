#pragma once
#include "CoreMinimal.h"
#include "ETileVariation.h"
#include "ActorVariationElements.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorVariationElements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETileVariation Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> Element;
    
    DEADBYDAYLIGHT_API FActorVariationElements();
};

