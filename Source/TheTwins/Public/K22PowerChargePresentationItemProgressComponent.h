#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K22PowerChargePresentationItemProgressComponent.generated.h"

class UPowerChargeComponent;
class AConjoinedTwin;

UCLASS(BlueprintType)
class UK22PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPowerChargeComponent* _powerChargeComponent;
    
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
public:
    UK22PowerChargePresentationItemProgressComponent();
};

