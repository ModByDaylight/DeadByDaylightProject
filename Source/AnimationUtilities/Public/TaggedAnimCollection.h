#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedAnimCollection.generated.h"

class UAnimCollection;

USTRUCT(BlueprintType)
struct ANIMATIONUTILITIES_API FTaggedAnimCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimCollection> AnimCollection;
    
    FTaggedAnimCollection();
};

