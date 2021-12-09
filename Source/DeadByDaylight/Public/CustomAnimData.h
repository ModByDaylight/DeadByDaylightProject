#pragma once
#include "CoreMinimal.h"
#include "CustomAnimData.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FCustomAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> MenuAnimationBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> InGameAnimationBlueprint;
    
    DEADBYDAYLIGHT_API FCustomAnimData();
};

