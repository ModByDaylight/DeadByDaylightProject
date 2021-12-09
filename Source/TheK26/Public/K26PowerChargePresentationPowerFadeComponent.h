#pragma once
#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K26PowerChargePresentationPowerFadeComponent.generated.h"

class UK26AmmoHandlerComponent;

UCLASS(BlueprintType)
class UK26PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler);
    
    UK26PowerChargePresentationPowerFadeComponent();
};

