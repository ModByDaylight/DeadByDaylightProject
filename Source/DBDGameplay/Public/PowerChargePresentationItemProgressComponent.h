#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "PowerChargePresentationItemProgressComponent.generated.h"

class UPowerChargeComponent;
class UPowerToggleComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UPowerChargeComponent* _powerChargeComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPowerToggleComponent* _powerToggleComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float _chargeReadyThreshold;
    
public:
    UPowerChargePresentationItemProgressComponent();
};

