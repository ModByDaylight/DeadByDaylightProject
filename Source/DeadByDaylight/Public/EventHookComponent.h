#pragma once
#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "EventHookComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventHookComponent : public UEventObjectComponent {
    GENERATED_BODY()
public:
    UEventHookComponent();
    UFUNCTION(BlueprintCallable)
    void SetOutlineCarryingColorToDefault();
    
};

