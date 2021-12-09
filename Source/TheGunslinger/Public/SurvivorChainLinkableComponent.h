#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChainLinkableComponent.h"
#include "DBDTunableRowHandle.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "SurvivorChainLinkableComponent.generated.h"

class UStatusEffect;
class USurvivorReelVelocityAdditiveStrategy;

UCLASS()
class THEGUNSLINGER_API USurvivorChainLinkableComponent : public UChainLinkableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _pullbackAngle;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _immobilizationDuration;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _linkableInteractionTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _cancelableInteractionTags;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USurvivorReelVelocityAdditiveStrategy> _velocityAdditiveStrategyClass;
    
    UPROPERTY(EditAnywhere)
    FName _immobilizationEffectName;
    
    UPROPERTY(Replicated)
    FVector_NetQuantize10 _linkedMoveInput;
    
    UPROPERTY(Export)
    UStatusEffect* _immobilizationEffect;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_VelocityAdditiveStrategy)
    USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategy;
    
    UFUNCTION()
    void OnRep_VelocityAdditiveStrategy();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USurvivorChainLinkableComponent();
};

