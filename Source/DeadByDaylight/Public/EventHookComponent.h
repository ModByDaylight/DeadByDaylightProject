#pragma once
#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "EventHookComponent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UEventHookComponent : public UEventObjectComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetOutlineCarryingColorToDefault();
    
    UEventHookComponent();
};

