#pragma once
#include "CoreMinimal.h"
#include "ClippedActor.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FClippedActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> DisplayComponents;
    
    UPROPERTY(Export, Transient)
    TMap<UPrimitiveComponent*, TWeakObjectPtr<UPrimitiveComponent>> CollidingPrimitives;
    
    DEADBYDAYLIGHT_API FClippedActor();
};

