#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessNegationEffectComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPossessNegationEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayCantPossessSound);
    
    UPROPERTY(BlueprintAssignable)
    FPlayCantPossessSound PlayCantPossessSound;
    
    UPossessNegationEffectComponent();
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

