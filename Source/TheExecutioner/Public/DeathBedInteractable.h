#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "AIPointOfInterestTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DeathBedInteractable.generated.h"

class UAnimationMontageSlave;
class UDeathBedAntiCampComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UChargeableComponent;
class ACamperPlayer;
class UBoxComponent;
class UMontagePlayer;
class UAnimMontage;
class UAIPerceptionStimuliSourceComponent;
class UPrimitiveComponent;
class AActor;
class ADeathBedInteractable;

UCLASS()
class THEEXECUTIONER_API ADeathBedInteractable : public AInteractable, public IAIInteractableTargetInterface, public IAIPointOfInterestTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* _root;
    
    UPROPERTY(Transient)
    ACamperPlayer* _inDeathBedCamper;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _rescueChargeableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* _deathBedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* _interactionZone;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* _playerOverlapZone;
    
    UPROPERTY(Export, VisibleAnywhere)
    UMontagePlayer* _montagePlayer;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UBoxComponent* _deathBedCollision;
    
    UPROPERTY(Export)
    UAnimationMontageSlave* _animationMontageSlave;
    
    UPROPERTY(Transient)
    UAnimMontage* _montageToPlay;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector _rescuerSnapPosition;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UDeathBedAntiCampComponent* _deathBedAnticampComponent;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _anticampDrainCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;
    
public:
    ADeathBedInteractable();
private:
    UFUNCTION(BlueprintCallable)
    void TeleportCamperToDeathBed();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void StartPlayerAbsorbedByGround();
    
    UFUNCTION(BlueprintCallable)
    void SetInDeathBedCamper(ACamperPlayer* camperPlayer);
    
private:
    UFUNCTION()
    void PlayerOverlapZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void PlayerOverlapZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSkillCheckFailed_Cosmetic();
    
private:
    UFUNCTION()
    void OnSkillCheckFailed();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRescueCancelled();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnRelocateStart_Cosmetic();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeathBedDeathEnd();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RelocateToOtherDeathBed(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer);
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetRescuerSnapPosition() const;
    
private:
    UFUNCTION(BlueprintPure)
    UMontagePlayer* GetMontagePlayer() const;
    
public:
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetInDeathBedCamper() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void FX_SurvivorSavedFromDeathBed();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void FX_DeathBedAppear();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeathBedDisappear();
    
    UFUNCTION(BlueprintPure)
    bool CanRescueSurvivor() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivateDeathBed(const bool value);
    
    
    // Fix for true pure virtual functions not being implemented
};

