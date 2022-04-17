#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "K25SurvivorChainAttachmentData.h"
#include "DBDTunableRowHandle.h"
#include "K25SurvivorChainAttachmentComponent.generated.h"

class AK25SurvivorChainAttachmentAnchor;
class UK25SurvivorChainRotationStrategy;
class UInteractionDefinition;
class AK25Chain;
class UChargeableComponent;
class UK25ChainAttachmentReplicationComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25SurvivorChainAttachmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AK25SurvivorChainAttachmentAnchor> _attachmentAnchorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FK25SurvivorChainAttachmentData> _survivorAnchorData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UK25SurvivorChainRotationStrategy> _survivorChainRotationStrategyClass;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UInteractionDefinition>> _interruptableInteractionClasses;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _maximumNumberOfChainsAttached;
    
private:
    UPROPERTY(Replicated, Transient)
    TArray<AK25SurvivorChainAttachmentAnchor*> _chainAttachmentAnchors;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AK25Chain>> _chainsAttached;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_RemoveChainChargeableComponent)
    UChargeableComponent* _removeChainChargeableComponent;
    
    UPROPERTY(Export, Transient)
    UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategy;
    
    UPROPERTY(Export, Transient)
    UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent;
    
public:
    UK25SurvivorChainAttachmentComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_RemoveChainChargeableComponent();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_TriggerHitSurvivorInExitAreaSFX(ASlasherPlayer* killer);
    
public:
    UFUNCTION(BlueprintPure)
    AK25Chain* GetFirstChainToRelease() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerHitSurvivorInExitAreaSFX(ASlasherPlayer* killer);
    
};

