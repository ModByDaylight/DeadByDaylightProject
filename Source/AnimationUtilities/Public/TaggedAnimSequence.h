#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FTaggedAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTagContainer Tags;
    
    FTaggedAnimSequence();
};

