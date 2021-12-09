#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomizedHudPlayerWrapperIdMapContainer.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedHudPlayerWrapperIdMapContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> Ids;
    
    DEADBYDAYLIGHT_API FCustomizedHudPlayerWrapperIdMapContainer();
};

