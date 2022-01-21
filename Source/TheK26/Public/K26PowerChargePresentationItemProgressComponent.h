#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K26PowerChargePresentationItemProgressComponent.generated.h"

class UK26AmmoHandlerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK26PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
public:
    UK26PowerChargePresentationItemProgressComponent();
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler);
    
};

