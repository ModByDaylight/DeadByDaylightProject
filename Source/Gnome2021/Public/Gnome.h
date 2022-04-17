#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "UObject/NoExportTypes.h"
#include "Gnome.generated.h"

class USkeletalMeshComponent;
class UGnomeInteraction;
class UChargeableComponent;
class UInteractor;
class UPrimitiveComponent;
class UDBDOutlineComponent;
class ADBDPlayer;

UCLASS()
class AGnome : public ARespawnableInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGnomeInteraction* _gnomeInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGnomeInteraction* _gnomeInteractionKiller;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _gnomeInteractionChargeable;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _gnomeInteractionChargeableKiller;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _gnomeInteractor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _gnomeInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _gnomeSkeletalMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _gnomeInteractionSecondsToCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _gnomeInteractionSecondsToChargeKiller;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _auraColorWhileInteracting;
    
public:
    AGnome();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStoppedInteracting();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);
    
};

