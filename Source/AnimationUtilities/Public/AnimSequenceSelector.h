#pragma once
#include "CoreMinimal.h"
#include "TaggedAnimSequence.h"
#include "AnimSequenceSelector.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FAnimSequenceSelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequence* _selected;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTaggedAnimSequence> _taggedSequences;
    
public:
    FAnimSequenceSelector();
};

