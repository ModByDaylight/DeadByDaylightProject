#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GameEventDispatcherHandleBP.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGameEventDispatcherHandleBPGameEventDelegate, const FGameplayTag, gameEventType, const FGameEventData&, gameEventData);

USTRUCT(BlueprintType)
struct FGameEventDispatcherHandleBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameEventDispatcherHandleBPGameEventDelegate GameEventDelegate;
    
    DEADBYDAYLIGHT_API FGameEventDispatcherHandleBP();
};

