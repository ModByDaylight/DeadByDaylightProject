#pragma once
#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "CannibalPowerPresentationItemProgressComponent.generated.h"

class UCannibalChainsawPowerComponent;

UCLASS(BlueprintType)
class THECANNIBAL_API UCannibalPowerPresentationItemProgressComponent : public UPresentationItemProgressComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UCannibalChainsawPowerComponent* _cannibalPowerChainsawComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCannibalChainsawPowerComponent(UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);
    
    UCannibalPowerPresentationItemProgressComponent();
};

