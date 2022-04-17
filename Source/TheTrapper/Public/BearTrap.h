#pragma once
#include "CoreMinimal.h"
#include "BaseTrap.h"
#include "OnIsTrapSetChangedDelegate.h"
#include "Engine/EngineTypes.h"
#include "BearTrap.generated.h"

class UCapsulePlayerOverlapComponent;
class UBoxPlayerOverlapComponent;
class UBoxComponent;
class UAnimMontage;
class UDBDOutlineComponent;
class USphereComponent;
class UMapActorComponent;
class UBearTrapOutlineUpdateStrategy;
class UMontagePlayer;
class ADBDPlayer;
class UDBDNavModifierComponent;
class UInteractor;
class UInteractionDefinition;
class UAnimationMontageSlave;
class UPrimitiveComponent;
class AActor;
class ASlasherPlayer;
class UBearTrapAnimInstance;
class UAkComponent;

UCLASS()
class ABearTrap : public ABaseTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxPlayerOverlapComponent* _interactionVolume;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsulePlayerOverlapComponent* _trapPlayerDetectionZone;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* _killerSafetyZoneComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UBearTrapOutlineUpdateStrategy* _outlineUpdateStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UMapActorComponent* _mapActorComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* _mapActorCollision;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* _trapBlocker;
    
    UPROPERTY(EditAnywhere, Export)
    UMontagePlayer* _montagePlayer;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsTrapSetChanged _onIsTrapSetChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ADBDPlayer* _ownerPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDBDNavModifierComponent* _dangerNavModifierComponent;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool _isTrapperOutOfSafetyZone;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _maximumAttemptsForSelfUntrap;
    
    UPROPERTY(Replicated)
    int32 _selfUntrapAttemptsRemaining;
    
    UPROPERTY(Export)
    UInteractor* _mainInteractor;
    
    UPROPERTY(Export)
    UInteractionDefinition* _trapSurvivor;
    
    UPROPERTY(Export)
    UInteractionDefinition* _trapKiller;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    ADBDPlayer* _trappedPlayer;
    
    UPROPERTY(Export)
    UAnimationMontageSlave* _animationMontageSlave;
    
public:
    ABearTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TrySetTrappedPlayer(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable)
    void SetTrappedPlayerSinceMoved(bool didTrap);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTrappedPlayer(ADBDPlayer* trappedPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayMontage(UAnimMontage* montage) const;
    
private:
    UFUNCTION()
    void OnTrappedPlayerPickedUp(ADBDPlayer* picker);
    
    UFUNCTION()
    void OnTrapDetectionZoneOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnTrapDetectionZoneOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
protected:
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
private:
    UFUNCTION()
    void OnSafetyZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnLevelReadyToPlay_Implementation();
    
    UFUNCTION()
    void OnCollectUpdateStart();
    
    UFUNCTION()
    void OnCollectUpdateEnd();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTrapperOutOfSafetyZone() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeTrapSurvivorInteraction(UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTrapKillerInteraction(UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMainInteractor(UInteractor* interactor);
    
    UFUNCTION(BlueprintPure)
    bool HasTrappedPlayerSinceMoved() const;
    
    UFUNCTION(BlueprintPure)
    bool HasTrappedPlayer() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetTrappedPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UBearTrapAnimInstance* GetAnimInstance() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UAkComponent* GetAkAudioComponent() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnPlayerTrapped(ADBDPlayer* trappedPlayer);
    
};

