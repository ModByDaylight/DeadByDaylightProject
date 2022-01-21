#pragma once
#include "CoreMinimal.h"
#include "InjectSerumInteraction.h"
#include "InjectSerumSelf.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInjectSerumSelf : public UInjectSerumInteraction {
    GENERATED_BODY()
public:
    UInjectSerumSelf();
};

