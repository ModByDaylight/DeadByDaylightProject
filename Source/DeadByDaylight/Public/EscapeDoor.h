#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIPointOfInterestTargetInterface.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "UObject/NoExportTypes.h"
#include "EscapeDoor.generated.h"

class UEscapeDoorAnimInstance;
class UObject;
class UChargeableComponent;
class UAkComponent;
class UBlockableComponent;
class USceneComponent;
class ADBDPlayer;
class AEscapeBlocker;
class USpotLightComponent;
class ACamperPlayer;
class UAIPerceptionStimuliSourceComponent;
class AActor;
class UChargeableInteractionDefinition;
class UBoxComponent;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AEscapeDoor : public AInteractable, public IAIPointOfInterestTargetInterface, public INoiseIndicatorEmitterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> EscapePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> EscapeFire;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UChargeableComponent* _killerOpenChargeable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UChargeableComponent* _openChargeable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAkComponent* _ak_audio_escape;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UEscapeDoorAnimInstance* _escapeDoorAnimInstance;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* _rootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Activated)
    bool _activated;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OnEscapeBlockerSet)
    AEscapeBlocker* _escapeBlockerInstance;
    
private:
    UPROPERTY(Export)
    USpotLightComponent* _spotlight;
    
    UPROPERTY(Transient)
    ACamperPlayer* _localOverlappingCamper;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;
    
    UPROPERTY(Export, Transient)
    UBlockableComponent* _doorSwitchBlockableComponent;
    
public:
    AEscapeDoor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartAtlantaDoorOpeningSound();
    
    UFUNCTION(BlueprintCallable)
    void StartAtlantaDoorBeepingSound();
    
    UFUNCTION(BlueprintCallable)
    void SetIsActivated(bool NewIsActivated);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnblockDoorSwitchCosmetic();
    
private:
    UFUNCTION()
    void OnRep_OnEscapeBlockerSet(AEscapeBlocker* escapeBlockerInstance);
    
    UFUNCTION()
    void OnRep_Activated(bool oldActivated);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerExitExitArea(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterExitArea(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitOpenChanged(bool opened);
    
    UFUNCTION(BlueprintCallable)
    void OnExitGateOpened(ADBDPlayer* player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitActivationChanged(bool activated);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEscapeZoneEndOverlap(AActor* overlappingActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEscapeZoneBeginOverlap(AActor* overlappingActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCamperStartOpeningExitGate(ACamperPlayer* player);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBlockDoorSwitchCosmetic();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void LightAllLights();
    
    UFUNCTION(BlueprintPure)
    bool IsDoorSwitchBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetSwitchSceneComponent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetParadiseServerLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetOpenTime() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UChargeableInteractionDefinition* GetOpenEscapeInteraction();
    
    UFUNCTION(BlueprintPure)
    bool GetIsOpen() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBoxComponent* GetExitArea() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetEscapeSwitchFloorLocation() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetDoorSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAtlantaExitOpeningIndicatorVisibility() const;
    
private:
    UFUNCTION()
    void Authority_SetEscapeBlocker();
    
    
    // Fix for true pure virtual functions not being implemented
};

