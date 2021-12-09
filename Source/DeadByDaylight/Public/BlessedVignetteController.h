#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlessedVignetteController.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBlessedVignetteController : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivateBlessedVignette();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateBlessedVignette();
    
    UBlessedVignetteController();
};

