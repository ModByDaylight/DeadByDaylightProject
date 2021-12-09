#pragma once
#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FAnimationMontageDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    FAnimationMontageDescriptor();
};

