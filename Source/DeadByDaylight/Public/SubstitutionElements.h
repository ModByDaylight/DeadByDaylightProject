#pragma once
#include "CoreMinimal.h"
#include "SubstitutionElements.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSubstitutionElements {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> _elementToReplace;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> _elementToReplaceWith;
    
public:
    DEADBYDAYLIGHT_API FSubstitutionElements();
};

