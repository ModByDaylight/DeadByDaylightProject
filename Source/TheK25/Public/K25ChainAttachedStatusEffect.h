#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K25ChainAttachedStatusEffect.generated.h"

class UCurveFloat;
class UK25SurvivorChainAttachmentComponent;

UCLASS()
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
    
    UFUNCTION()
    void OnRep_ChainAttachementComponent();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UK25ChainAttachedStatusEffect();
};

