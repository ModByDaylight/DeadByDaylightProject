#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitValidationReport.h"
#include "HitValidatorComponent.generated.h"

class UHitValidationConfigsComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHitValidatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float _maximumSquareDistance;
    
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UHitValidationConfigsComponent> _hitValidationConfigComponent;
    
public:
    UHitValidatorComponent();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DrawDebugHit(FHitValidationReport report);
    
};

