#pragma once
#include "CoreMinimal.h"
#include "InteractionArray.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FInteractionArray {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UInteractionDefinition>> _interactions;
    
public:
    FInteractionArray();
};

