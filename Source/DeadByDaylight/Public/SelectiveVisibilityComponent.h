#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SelectiveVisibilityComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USelectiveVisibilityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USelectiveVisibilityComponent();
    UFUNCTION(BlueprintCallable)
    void Local_SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    
};

