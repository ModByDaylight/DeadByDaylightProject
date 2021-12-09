#pragma once
#include "CoreMinimal.h"
#include "PerspectiveDependentAnimSequenceSelector.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct DBDANIMATION_API FPerspectiveDependentAnimSequenceSelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* _current;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* _thirdPerson;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* _firstPerson;
    
public:
    FPerspectiveDependentAnimSequenceSelector();
};

