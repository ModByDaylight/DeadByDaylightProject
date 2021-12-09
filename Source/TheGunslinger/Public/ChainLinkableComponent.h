#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ChainLinkable.h"
#include "TagStateBool.h"
#include "ChainLinkableComponent.generated.h"

class URiflePlayerLinker;
class UChainPlayerMovementStatusEffect;
class UBaseCameraTargetingStrategy;
class UPlayerReelInputAccelerationConstraintStrategy;

UCLASS()
class THEGUNSLINGER_API UChainLinkableComponent : public UActorComponent, public IChainLinkable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBaseCameraTargetingStrategy> _cameraTargetingStrategyClass;
    
    UPROPERTY(EditAnywhere)
    FName _movementStatusEffectName;
    
    UPROPERTY(EditAnywhere)
    FName _linkedStatusEffectName;
    
    UPROPERTY(Export, Transient)
    UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;
    
private:
    UPROPERTY(Export, Transient)
    URiflePlayerLinker* _chainLink;
    
    UPROPERTY(Replicated)
    FTagStateBool _isLinkedLingering;
    
    UPROPERTY(Export, Replicated)
    UChainPlayerMovementStatusEffect* _movementStatusEffect;
    
    UPROPERTY(Transient)
    UBaseCameraTargetingStrategy* _cameraStrategy;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UChainLinkableComponent();
};

