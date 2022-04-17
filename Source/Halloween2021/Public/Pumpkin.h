#pragma once
#include "CoreMinimal.h"
#include "SpecialBehaviourInteractable.h"
#include "EPumpkinType.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Pumpkin.generated.h"

class USkeletalMeshComponent;
class UChargeableComponent;
class UDBDOutlineComponent;
class UPumpkinInteraction;
class UInteractor;
class UPrimitiveComponent;
class UStatusEffect;
class ADBDPlayer;

UCLASS()
class APumpkin : public ASpecialBehaviourInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName _specialBehaviourId;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    EPumpkinType _pumpkinType;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPumpkinInteraction* _pumpkinInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPumpkinInteraction* _pumpkinInteractionKiller;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _pumpkinInteractionChargeable;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _pumpkinInteractionChargeableKiller;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _pumpkinInteractor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _pumpkinInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _pumpkinSkeletalMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinInteractionSecondsToCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinInteractionSecondsToChargeKiller;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _auraColorWhileInteracting;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinTreatChance;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinTrickChance;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinTreatDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinTrickDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinSpeedBoost;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pumpkinSpeedDebuff;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _pumpkinStatusEffect;
    
public:
    APumpkin();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionCompleted(ADBDPlayer* interactingPlayer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStoppedInteracting();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnIntroCompleted();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);
    
};

