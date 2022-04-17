#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventDelegateDelegate.h"
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

