#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Character.h"
#include "DynamicGrassEffectorInterface.h"
#include "PushableInterface.h"
#include "SlashableInterface.h"
#include "TunableStat.h"
#include "Engine/EngineTypes.h"
#include "EZombieState.h"
#include "UObject/NoExportTypes.h"
#include "EZombieGender.h"
#include "DBDTunableRowHandle.h"
#include "EAttackType.h"
#include "FirecrackerEffectData.h"
#include "ZombieCharacter.generated.h"

class UGameplayTagContainerComponent;
class UAuthoritativePoolableActorComponent;
class UAuthoritativeMovementComponent;
class USphereComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;
class AActor;
class UCharacterPositionRecorderComponent;
class USkeletalMesh;
class UZombieBlindableComponent;
class UChargeableComponent;
class UFirecrackerEffectHandlerComponent;
class UFlashlightableComponent;
class UOtherCharactersVerticalCollisionsHandler;
class ASlasherPlayer;
class UFlashlightComponent;

UCLASS()
class AZombieCharacter : public ACharacter, public IDynamicGrassEffectorInterface, public ISlashableInterface, public IPushableInterface, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTunableStat _zombieWalkSpeed;
    
private:
    UPROPERTY(Export)
    UAuthoritativePoolableActorComponent* _poolableComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USphereComponent* _zombieAttackDetector;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UStaticMeshComponent* _attackDamageZone;
    
    UPROPERTY(ReplicatedUsing=OnRep_ZombieState)
    EZombieState _zombieState;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _zombieRespawnTimeKilledBySlasher;
    
    UPROPERTY(EditAnywhere)
    FTunableStat _zombieRespawnTimeKilledBySurvivor;
    
    UPROPERTY(Transient)
    FTransform _respawnPositionBehindGate;
    
    UPROPERTY(ReplicatedUsing=OnRep_ZombieGender)
    EZombieGender _zombieGender;
    
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* _femaleSkeletalMesh;
    
    UPROPERTY(EditDefaultsOnly, Replicated)
    FString _audioSwitchState;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UZombieBlindableComponent* _blindableComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UChargeableComponent* _blindingChargeableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    UFlashlightableComponent* _flashLightableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _zombieStunBaseTime;
    
    UPROPERTY(Export)
    UGameplayTagContainerComponent* _objectState;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterPositionRecorderComponent* _positionRecorder;
    
    UPROPERTY(Export, Transient)
    UAuthoritativeMovementComponent* _authoritativeMovementComponent;
    
    UPROPERTY(Export, Transient)
    UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler;
    
    UPROPERTY(Transient)
    TArray<AActor*> _ignoreActors;
    
    UPROPERTY(EditDefaultsOnly)
    float _zombieStunnedCapsuleRadius;
    
    UPROPERTY(EditAnywhere)
    float _minFallHeight;
    
    UPROPERTY(EditAnywhere)
    float _afterInAirAttackCooldown;
    
public:
    AZombieCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ZombieKilledByKiller_Cosmetic(EAttackType attackType);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void SetCharacterActive_Cosmetic(const bool value);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnZombieStateChanged_Cosmetic(EZombieState zombieState);
    
private:
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
    UFUNCTION()
    void OnRep_ZombieState(EZombieState previousState);
    
    UFUNCTION()
    void OnRep_ZombieGender();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFemaleGenderSet_Cosmetic();
    
private:
    UFUNCTION()
    void OnEndOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType);
    
public:
    UFUNCTION(BlueprintPure)
    EZombieGender GetZombieGender() const;
    
    UFUNCTION(BlueprintPure)
    UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler() const;
    
    UFUNCTION(BlueprintPure)
    UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FString GetAudioSwitchState() const;
    
private:
    UFUNCTION()
    void Authority_OnZombieStateChanged(EZombieState zombieState);
    
    UFUNCTION()
    void Authority_OnFlashlightRemoved(const UFlashlightComponent* flashlight);
    
    UFUNCTION()
    void Authority_OnFlashlightAdded(const UFlashlightComponent* flashlight);
    
    UFUNCTION()
    void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);
    
    UFUNCTION()
    void Authority_DeactivateZombieAndStartRespawnTimer();
    
    
    // Fix for true pure virtual functions not being implemented
};

