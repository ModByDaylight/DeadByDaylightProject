#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "DemogorgonPowerItemProgressComponent.generated.h"

class UPortalPlacerStateComponent;

UCLASS()
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPortalPlacerStateComponent* _portalPlacerState;
    
public:
    UDemogorgonPowerItemProgressComponent();
};

