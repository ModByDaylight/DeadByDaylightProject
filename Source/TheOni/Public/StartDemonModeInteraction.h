#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "StartDemonModeInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEONI_API UStartDemonModeInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float YawAdjustTime;
    
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor DemonModeActivationMontage;
    
public:
    UStartDemonModeInteraction();
    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(const ADBDPlayer* owner);
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

