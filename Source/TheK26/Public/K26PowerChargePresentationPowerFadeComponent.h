#pragma once
#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K26PowerChargePresentationPowerFadeComponent.generated.h"

class UK26AmmoHandlerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK26PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
public:
    UK26PowerChargePresentationPowerFadeComponent();
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler);
    
};

