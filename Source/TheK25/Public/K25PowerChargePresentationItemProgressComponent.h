#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K25PowerChargePresentationItemProgressComponent.generated.h"

class UPowerChargeComponent;
class AK25Power;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK25PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPowerChargeComponent* _powerChargeComponent;
    
    UPROPERTY(Transient)
    AK25Power* _k25Power;
    
public:
    UK25PowerChargePresentationItemProgressComponent();
};

