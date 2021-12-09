#pragma once
#include "CoreMinimal.h"
#include "HookLingerTimerHandleContainer.generated.h"

class AMeatHook;

USTRUCT()
struct FHookLingerTimerHandleContainer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AMeatHook* Hook;
    
    DEADBYDAYLIGHT_API FHookLingerTimerHandleContainer();
};

