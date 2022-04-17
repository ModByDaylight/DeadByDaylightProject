#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "ECamperDamageState.h"
#include "K26DismissCrowChargeableInteractionDefinition.generated.h"

class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;
class UChargeableComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26DismissCrowChargeableInteractionDefinition : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chargeTime;
    
    UPROPERTY(Export)
    UK26PowerStatusHandlerComponent* _k26PowerStatusHandlerComponent;
    
private:
    UPROPERTY(Transient)
    bool _isLevelReadyToPlay;
    
public:
    UK26DismissCrowChargeableInteractionDefinition();
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
private:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer, UChargeableComponent* chargeableComponent);
    
protected:
    UFUNCTION()
    void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);
    
};

