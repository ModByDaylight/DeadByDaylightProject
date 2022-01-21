#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "AnimationMontageDescriptor.h"
#include "ESkillCheckCustomType.h"
#include "K25SolveLamentConfigurationInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25SolveLamentConfigurationInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _timeBufferBeforeAllowedToUseInteractionAgain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _failSkillCheckTimePenalty;
    
private:
    UPROPERTY(EditAnywhere)
    FAnimationMontageDescriptor _failMontage;
    
public:
    UK25SolveLamentConfigurationInteraction();
private:
    UFUNCTION()
    void Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type);
    
};

