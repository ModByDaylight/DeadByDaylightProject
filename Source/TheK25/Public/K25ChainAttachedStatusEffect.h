#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K25ChainAttachedStatusEffect.generated.h"

class UK25SurvivorChainAttachmentComponent;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25ChainAttachedStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* _percentageReductionSpeedPerChainCurve;
    
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ChainAttachementComponent)
    UK25SurvivorChainAttachmentComponent* _chainAttachmentComponent;
    
    UPROPERTY(Transient)
    int32 _cachedNumberOfChainsAttached;
    
public:
    UK25ChainAttachedStatusEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ChainAttachementComponent();
    
};

