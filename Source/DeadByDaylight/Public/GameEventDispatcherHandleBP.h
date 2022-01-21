#pragma once
#include "CoreMinimal.h"
#include "GameEventDelegate.h"
#include "GameplayTagContainer.h"
#include "GameEventDispatcherHandleBP.generated.h"

USTRUCT(BlueprintType)
struct FGameEventDispatcherHandleBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameEventDelegate GameEventDelegate;
    
    DEADBYDAYLIGHT_API FGameEventDispatcherHandleBP();
};

