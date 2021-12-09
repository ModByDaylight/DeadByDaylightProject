#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AIDetectedStimulus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIDetectedStimulus {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    FVector Velocity;
    
    UPROPERTY()
    float AtTime;
    
    DEADBYDAYLIGHT_API FAIDetectedStimulus();
};

