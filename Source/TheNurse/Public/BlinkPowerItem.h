#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "BlinkPowerItem.generated.h"

class UInteractor;
class UChargeableComponent;

UCLASS()
class THENURSE_API ABlinkPowerItem : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _powerInteractor;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _blinkChargeable;
    
public:
    ABlinkPowerItem();
};

