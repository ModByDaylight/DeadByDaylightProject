#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "CrownPillarInteractable.generated.h"

class UCrownPickupInteraction;
class UChargeableComponent;
class UInteractor;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UDBDOutlineComponent;
class UNearTrackedActorComponent;
class UCrownPillarOutlineUpdateStrategy;
class ADBDPlayer;

UCLASS()
class ANNIVERSARY_API ACrownPillarInteractable : public ARespawnableInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _crownPillarInteractionSecondsToCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _crownPillarInteractionSecondsToChargeKiller;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _offeringEnabledAuraVisibilityDistance;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCrownPickupInteraction* _crownPillarInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCrownPickupInteraction* _crownPillarInteractionKiller;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _crownPillarInteractionChargeable;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _crownPillarInteractionChargeableKiller;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _crownPillarInteractor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _crownPillarInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* _crownPillarStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNearTrackedActorComponent* _nearTrackedActorComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCrownPillarOutlineUpdateStrategy* _crownPillarOutlineUpdateStrategy;
    
public:
    ACrownPillarInteractable();
private:
    UFUNCTION()
    void Local_OnIntroCompleted();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStoppedInteracting();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionCancelled();
    
};

