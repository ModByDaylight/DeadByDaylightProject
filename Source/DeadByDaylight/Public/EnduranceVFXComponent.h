#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnduranceVFXComponent.generated.h"

class UGameplayModifierContainer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEnduranceVFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEnduranceVFXComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ShowHighlight(UGameplayModifierContainer* preventKOSource);
    
};

