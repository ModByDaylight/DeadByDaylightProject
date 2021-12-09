#pragma once
#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontagePlaybackDefinition.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FMontagePlaybackDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FAnimationMontageDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    bool Follower;
    
    FMontagePlaybackDefinition();
};

