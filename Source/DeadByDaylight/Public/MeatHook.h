#pragma once
#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "Interactable.h"
#include "GameplayTagContainer.h"
#include "AIPointOfInterestTargetInterface.h"
#include "CharmAttachable.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "UObject/NoExportTypes.h"
#include "DBDTimer.h"
#include "AnimationMontageDescriptor.h"
#include "MeatHook.generated.h"

class UDBDClipRegionComponent;
class AEntity;
class UCharacterPusherComponent;
class UCapsuleComponent;
class UPollableEventListener;
class ACamperPlayer;
class ADBDPlayer;
class UInteractor;
class USceneComponent;
class UPrimitiveComponent;
class UChargeableInteractionDefinition;
class UAIPerceptionStimuliSourceComponent;
class UMapActorComponent;
class ACharacter;
class UMontagePlayer;
class UAkComponent;
class USphereComponent;
class UBoxComponent;
class UHookableComponent;

UCLASS()
class DEADBYDAYLIGHT_API AMeatHook : public AInteractable, public IAIInteractableTargetInterface, public IAIPointOfInterestTargetInterface, public ICharmAttachable, public INoiseIndicatorEmitterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsSurvivorStruggling;
    
    UPROPERTY(BlueprintReadWrite)
    bool WasSurvivorStruggleCancelled;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsSacrificeEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AIInteractionOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UDBDClipRegionComponent*> ClipRegions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsInBasement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsBreakable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSabotageable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag HookIdentityTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool SnapHookedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool FullyHooked;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FDBDTimer YawAdjustTimer;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HookYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TargetHookYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _struggleThreshold;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCharacterPusherComponent* _characterPusher;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UCapsuleComponent* _slasherCollisionBlocker;
    
private:
    UPROPERTY(Export, Transient)
    UPollableEventListener* _eventListener;
    
    UPROPERTY(Transient)
    ACamperPlayer* _hookedSurvivor;
    
    UPROPERTY(Transient)
    ADBDPlayer* _hookBreakerPlayer;
    
    UPROPERTY(Transient)
    TSet<ACamperPlayer*> _campersThatSabotagedMeatHook;
    
    UPROPERTY(Export, Transient)
    UInteractor* _mainInteractor;
    
    UPROPERTY(Export, Transient)
    USceneComponent* _meatHookEffect;
    
    UPROPERTY(Export, Transient)
    UChargeableInteractionDefinition* _unhook;
    
    UPROPERTY(Export, Transient)
    USceneComponent* _camperHookedSnapTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AEntity* _entity;
    
    UPROPERTY(Transient)
    bool _preventDrainProgression;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;
    
    UPROPERTY(Transient)
    ADBDPlayer* _interactingPlayer;
    
    UPROPERTY(Transient)
    bool _initialized;
    
    UPROPERTY(Export, Transient)
    UMapActorComponent* _cachedMapActor;
    
public:
    AMeatHook();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSlasherBlockerCollision();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetHookLookAt(FVector lookAt, float time);
    
    UFUNCTION(BlueprintCallable)
    void SetMeatHookInitilized(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetMapActor(UMapActorComponent* value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBeingSabotaged(bool isBeingSabotaged);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractingPlayer(ADBDPlayer* interactingPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEntity(AEntity* entity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetTargetHookYaw(float time);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTickStruggle(float deltaTime);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnStruggleSkillCheckFailed_Cosmetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStruggleExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStruggleEnter();
    
private:
    UFUNCTION()
    void OnStopPushingPlayer(ACharacter* character);
    
    UFUNCTION()
    void OnStartPushingPlayer(ACharacter* character);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSacrificeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSacrificeIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReactionIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReaction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookingExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookingEnter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookedSurvivorChanged(ACamperPlayer* before, ACamperPlayer* after);
    
    UFUNCTION()
    void OnHookedSurvivorAttacked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookedIdle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookedExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookedEnter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAutoRepair();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetIsSacrificed(bool isSacrificed);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetIsSabotaged(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetIsBrokenFromUnhook(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetHookedSurvivor(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RefreshCharmCustomization();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EscapeAttemptResult(ADBDPlayer* player, bool result);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_MoveSurvivorToHook(ACamperPlayer* survivor, const float duration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeMeatHookIfPossible();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMeatHook();
    
    UFUNCTION(BlueprintPure)
    FAnimationMontageDescriptor GetUnhookOutMontageDescriptor() const;
    
    UFUNCTION(BlueprintPure)
    FAnimationMontageDescriptor GetUnhookInMontageDescriptor() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UChargeableInteractionDefinition* GetUnhookCID() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetStruggleThreshold() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrugglePercent() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetSaboteurPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetSabotageHookRespawnDuration() const;
    
    UFUNCTION(BlueprintPure)
    UMontagePlayer* GetMontagePlayer() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetMeatHookEffect() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UAkComponent* GetMeatHookAkAudioComponent() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UInteractor* GetMainInteractor() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USphereComponent* GetKickSlasherDetectionZone() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsSacrificed() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsSabotaged() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsInBasement() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsBroken() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UBoxComponent* GetInteractorZoneComponent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetInteractorPrimitiveComponent() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetInteractingPlayer() const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetHookedSurvivor() const;
    
    UFUNCTION(BlueprintPure)
    UHookableComponent* GetHookableComponentOfHookedActor() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterPusherComponent* GetCharacterPusher() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetCamperUnkookFocalPointTransform() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetCamperHookedSnapTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void FireHookSoundEvent(const FName NoiseRangeTunable, const ADBDPlayer* soundInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugHookedSurvivor(ACamperPlayer* expectedSurvivor) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_SetAsScourgeHookStart();
    
    UFUNCTION(BlueprintPure)
    bool CanUnhookSurvivor(const ACamperPlayer* survivor) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSurvivorStruggle(ACamperPlayer* survivor) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSurvivorAttemptEscape(ACamperPlayer* survivor) const;
    
    UFUNCTION(BlueprintPure)
    bool CanHookSurvivor() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeSabotaged() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SignalUnhookingEnter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SignalUnhookingCharged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SignalUnhookingAborted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SignalSurvivorAttemptingEscapeAborted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SignalSurvivorAttemptingEscape();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsSacrificed(bool isSacrificed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsSabotaged(bool isSabotaged, ADBDPlayer* saboteur, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsBrokenFromUnhook(bool isBrokenFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration);
    
    UFUNCTION(BlueprintCallable)
    void Authority_SetHookedSurvivor(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SendOnUnhookAnalytics(ADBDPlayer* rescuer);
    
    
    // Fix for true pure virtual functions not being implemented
};

