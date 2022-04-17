#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "RedEnvelope.generated.h"

class UInteractor;
class ADBDPlayerState;
class URedEnvelopeInteraction;
class UChargeableComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UDBDOutlineComponent;
class ULunar2022EventComponent;
class ADBDPlayer;

UCLASS()
class LUNAR2022_API ARedEnvelope : public AInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_OwnerPlayerState)
    ADBDPlayerState* _ownerPlayerState;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URedEnvelopeInteraction* _redEnvelopeInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URedEnvelopeInteraction* _redEnvelopeInteractionKiller;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _redEnvelopeInteractionChargeable;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _redEnvelopeInteractionChargeableKiller;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _redEnvelopeInteractor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _redEnvelopeInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* _redEnvelopeMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _redEnvelopeInteractionSecondsToCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _redEnvelopeInteractionSecondsToChargeKiller;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _auraColorOwner;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _auraColorNonOwner;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<ULunar2022EventComponent> _eventComponent;
    
public:
    ARedEnvelope();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_OwnerPlayerState();
    
public:
    UFUNCTION()
    void OnLocallyObservedChanged();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HandleOnInteractionComplete(const ADBDPlayer* interactingPlayer, bool ownerWasInteractingPlayer, bool isJackpot);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_SetBackgroundVFX(bool isOwner);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTriggerDisappearingVFX(const ADBDPlayer* interactingPlayer, bool isOwner, bool isJackpot);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionUpdate(const ADBDPlayer* interactingPlayer, const float chargePercent, bool isOwner);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionStopped(const ADBDPlayer* interactingPlayer, bool isOwner);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionStart(const ADBDPlayer* interactingPlayer, bool isOwner);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnAddEmberEffect(const ADBDPlayer* owningPlayer);
    
};

