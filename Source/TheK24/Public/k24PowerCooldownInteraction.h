#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "k24PowerCooldownInteraction.generated.h"

class AK24Power;
class UCurveFloat;

UCLASS(EditInlineNew)
class Uk24PowerCooldownInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _k24PowerCooldownTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _cooldownSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _cooldownLvl3SpeedCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* _playedCooldownSpeedCurve;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetK24Power(AK24Power* k24Power);
    
    Uk24PowerCooldownInteraction();
};

