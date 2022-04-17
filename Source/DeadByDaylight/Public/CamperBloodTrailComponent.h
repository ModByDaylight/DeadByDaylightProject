#pragma once
#include "CoreMinimal.h"
#include "BloodTrailComponent.h"
#include "ECamperDamageState.h"
#include "CamperBloodTrailComponent.generated.h"

class UPerkManager;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperBloodTrailComponent : public UBloodTrailComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPerkManager* _camperPerkManager;
    
public:
    UCamperBloodTrailComponent();
private:
    UFUNCTION()
    void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
};

