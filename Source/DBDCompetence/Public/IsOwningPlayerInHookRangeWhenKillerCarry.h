#pragma once
#include "CoreMinimal.h"
#include "IsOwningPlayerInRangeFromHook.h"
#include "IsOwningPlayerInHookRangeWhenKillerCarry.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook {
    GENERATED_BODY()
public:
    UIsOwningPlayerInHookRangeWhenKillerCarry();
};

