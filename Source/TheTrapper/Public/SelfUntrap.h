#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "AnimationMontageDescriptor.h"
#include "SelfUntrap.generated.h"

class UAnimMontage;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USelfUntrap : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _trapImmunityDuration;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* _untrapMontage;
    
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor _successfulEscapeHealthy;
    
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor _successfulEscapeInjured;
    
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor _successfulEscapeCrawling;
    
    UPROPERTY(EditDefaultsOnly)
    FAnimationMontageDescriptor _failedEscape;
    
    UPROPERTY(Replicated)
    bool _canEscape;
    
public:
    USelfUntrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

