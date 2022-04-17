#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChargeableProgressSource.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "EProgressModifier.h"
#include "NonTunableStat.h"
#include "RifleChainTensionComponent.generated.h"

class USurvivorChainLinkableComponent;
class ARifleChain;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API URifleChainTensionComponent : public UActorComponent, public IChargeableProgressSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsBuildingTensionChanged, bool, isBuildingTension);
    
    UPROPERTY(BlueprintAssignable)
    FOnIsBuildingTensionChanged OnIsBuildingTensionChanged;
    
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
    
public:
    URifleChainTensionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnTensionChargeableCompletionChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion);
    
    UFUNCTION()
    void OnRep_IsBuildingTension();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBuildingTension() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgress() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

