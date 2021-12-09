#pragma once
#include "CoreMinimal.h"
#include "AkTriangle.generated.h"

USTRUCT(BlueprintType)
struct FAkTriangle {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 Point0;
    
    UPROPERTY()
    uint16 Point1;
    
    UPROPERTY()
    uint16 Point2;
    
    UPROPERTY()
    uint16 Surface;
    
    AKAUDIO_API FAkTriangle();
};

