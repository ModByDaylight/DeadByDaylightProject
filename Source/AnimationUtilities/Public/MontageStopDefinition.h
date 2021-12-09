#pragma once
#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontageStopDefinition.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FMontageStopDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FAnimationMontageDescriptor Descriptor;
    
    UPROPERTY(Transient)
    float BlendOutTime;
    
    FMontageStopDefinition();
};

