#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlessedVignetteController.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlessedVignetteController : public UActorComponent {
    GENERATED_BODY()
public:
    UBlessedVignetteController();
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivateBlessedVignette();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateBlessedVignette();
    
};

