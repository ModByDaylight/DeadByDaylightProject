#pragma once
#include "CoreMinimal.h"
#include "BloodTrailComponent.h"
#include "ECamperDamageState.h"
#include "CamperBloodTrailComponent.generated.h"

class UPerkManager;

UCLASS()
class DEADBYDAYLIGHT_API UCamperBloodTrailComponent : public UBloodTrailComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPerkManager* _camperPerkManager;
    
    UFUNCTION()
    void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
public:
    UCamperBloodTrailComponent();
};

