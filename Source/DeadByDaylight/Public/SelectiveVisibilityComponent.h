#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SelectiveVisibilityComponent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USelectiveVisibilityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void Local_SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    
    USelectiveVisibilityComponent();
};

