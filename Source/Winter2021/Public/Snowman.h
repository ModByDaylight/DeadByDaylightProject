#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "ESnowmanState.h"
#include "ESnowmanDestructionType.h"
#include "SnowmanSpawnData.h"
#include "UObject/NoExportTypes.h"
#include "Snowman.generated.h"

class USkeletalMeshComponent;
class UDBDOutlineComponent;
class UHideInSnowmanInteraction;
class ACamperPlayer;
class UCapsuleComponent;
class UChargeableComponent;
class UInteractor;
class UPrimitiveComponent;
class USnowmanAttackableComponent;
class ASlasherPlayer;

UCLASS()
class ASnowman : public ARespawnableInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToRespawn;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToBeDestroyed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SnowmanState)
    ESnowmanState _snowmanState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SnowmanDestructionType)
    ESnowmanDestructionType _snowmanDestructionType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SurvivorUsingSnowman)
    ACamperPlayer* _survivorUsingThisSnowman;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _snowmanSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDOutlineComponent* _snowmanOutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* _snowmanCapsule;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHideInSnowmanInteraction* _hideInSnowmanInteraction;
    
    UPROPERTY(Export, NoClear, VisibleAnywhere)
    UChargeableComponent* _hideInSnowmanInteractionChargeable;
    
    UPROPERTY(BlueprintReadOnly, Export, NoClear, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInteractor* _snowmanInteractor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _snowmanInteractionZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    USnowmanAttackableComponent* _snowmanAttackableComponent;
    
    UPROPERTY(Transient)
    bool _isAcquiredFromPool;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsMoving)
    bool _isMoving;
    
public:
    ASnowman();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_SurvivorUsingSnowman();
    
    UFUNCTION()
    void OnRep_SnowmanState();
    
    UFUNCTION()
    void OnRep_SnowmanDestructionType();
    
    UFUNCTION()
    void OnRep_IsMoving();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SpawnSnowman(FSnowmanSpawnData spawnData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetSnowmanMaterialVariant(const int32 materialVariantIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetSnowmanHiddenInGame(bool isHidden);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DrawDebugCollisionCheck(FVector boxExtent, float debugLifetime) const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_SetSnowmanMaterialVariant(const int32 materialVariantIndex);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanSpawned();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(ACamperPlayer* survivorUsingSnowman);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(ASlasherPlayer* killerAttackingSnowman);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(ACamperPlayer* survivorUsingSnowman, ASlasherPlayer* killerAttackingSnowman);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(ACamperPlayer* survivorUsingSnowman);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(ASlasherPlayer* killerAttackingSnowman);
    
};

