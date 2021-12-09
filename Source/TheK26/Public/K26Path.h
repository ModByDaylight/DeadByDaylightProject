#pragma once
#include "CoreMinimal.h"
#include "K26Path.generated.h"

class AK26PathPart;

USTRUCT(BlueprintType)
struct FK26Path {
    GENERATED_BODY()
public:
    UPROPERTY()
    AK26PathPart* PathEndArrow;
    
    UPROPERTY()
    TArray<AK26PathPart*> PathParts;
    
    THEK26_API FK26Path();
};

