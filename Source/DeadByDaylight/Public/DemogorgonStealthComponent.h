#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemogorgonStealthComponent.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDemogorgonStealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UStatusEffect> _stealthEffect;
    
public:
    UDemogorgonStealthComponent();
private:
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
};

