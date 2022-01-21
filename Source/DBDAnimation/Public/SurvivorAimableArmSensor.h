#pragma once
#include "CoreMinimal.h"
#include "ArmIKSensorComponent.h"
#include "SurvivorAimableArmSensor.generated.h"

class ACollectable;
class UAimableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDANIMATION_API USurvivorAimableArmSensor : public UArmIKSensorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACollectable* _aimableCollectable;
    
    UPROPERTY(Export, Transient)
    UAimableComponent* _aimable;
    
public:
    USurvivorAimableArmSensor();
};

