#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "SurvivorStatusInterface.h"
#include "TagStateBool.h"
#include "TunableStat.h"
#include "EContaminator.h"
#include "SurvivorContaminationComponent.generated.h"

class UInteractionDefinition;
class UChargeableComponent;

UCLASS(Blueprintable)
class THEK24_API USurvivorContaminationComponent : public UActorComponent, public ISurvivorStatusInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_IsContaminated)
    FTagStateBool _isContaminated;
    
    UPROPERTY(Export, Replicated, Transient)
    UChargeableComponent* _injectSerumChargeable;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _injectSerumSecondsToCharge;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _contaminationHinderedSeconds;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _contaminationHinderedValue;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UInteractionDefinition>> _injectSerumInteractionsClasses;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_InjectSerumInteractions)
    TArray<UInteractionDefinition*> _injectSerumInteractions;
    
    UFUNCTION()
    void OnRep_IsContaminated();
    
    UFUNCTION()
    void OnRep_InjectSerumInteractions();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnContaminationCured_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnContaminated_SFX_Stinger_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnContaminated_Cosmetic(EContaminator contaminator);
    
private:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_OnContaminated_Cosmetic(EContaminator contaminator);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsContaminated() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USurvivorContaminationComponent();
};

