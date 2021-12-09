#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChargeableProgressSource.h"
#include "NonTunableStat.h"
#include "EProgressModifier.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "RifleChainTensionComponent.generated.h"

class USurvivorChainLinkableComponent;
class ARifleChain;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRifleChainTensionComponentOnIsBuildingTensionChanged, bool, isBuildingTension);

UCLASS(BlueprintType)
class THEGUNSLINGER_API URifleChainTensionComponent : public UActorComponent, public IChargeableProgressSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRifleChainTensionComponentOnIsBuildingTensionChanged OnIsBuildingTensionChanged;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsBuildingTension)
    bool _isBuildingTension;
    
    UPROPERTY(Export, Transient)
    USurvivorChainLinkableComponent* _targetlinkable;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _maxTensionCharge;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _baseTensionRate;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _collisionTensionRate;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _survivorPullingTensionRate;
    
    UPROPERTY(EditAnywhere)
    FNonTunableStat _currentTensionRate;
    
    UPROPERTY(Replicated, Transient)
    EProgressModifier _progressModifierForSurvivors;
    
    UPROPERTY(EditAnywhere)
    FText _chargeProgressDescriptionText;
    
    UPROPERTY(Transient)
    ARifleChain* _chain;
    
    UFUNCTION()
    void OnTensionChargeableCompletionChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion);
    
    UFUNCTION()
    void OnRep_IsBuildingTension();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBuildingTension() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgress() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URifleChainTensionComponent();
};

