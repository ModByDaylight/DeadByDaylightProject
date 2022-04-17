#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "ChainHuntStateData.h"
#include "EChainHuntState.h"
#include "LamentConfigurationChainHuntComponent.generated.h"

class UK25KillerChainHuntEffectsComponent;
class UCurveFloat;
class UK25SurvivorChainHuntEffectsComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ULamentConfigurationChainHuntComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _floorChainHuntTimeBetweenChainStrikes;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainHuntChargeTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _chainNumberPerChainHuntCluster;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _timeBetweenChainHuntClusterStrikes;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UK25KillerChainHuntEffectsComponent> _killerChainHuntEffectsComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UK25SurvivorChainHuntEffectsComponent> _survivorChainHuntEffectsComponentClass;
    
private:
    UPROPERTY(Export, Transient)
    UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponent;
    
    UPROPERTY(Export, Replicated, Transient)
    TArray<UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents;
    
    UPROPERTY(Transient)
    float _cachedAdditiveChainStrikeDelayTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ChainHuntStateData)
    FChainHuntStateData _chainHuntStateData;
    
    UPROPERTY(Transient)
    EChainHuntState _oldChainHuntState;
    
public:
    ULamentConfigurationChainHuntComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ChainHuntStateData();
    
public:
    UFUNCTION(BlueprintPure)
    float GetChainHuntProgressPercentage() const;
    
};

