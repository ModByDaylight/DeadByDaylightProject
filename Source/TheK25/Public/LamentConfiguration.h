#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectable.h"
#include "ObjectStateProvider.h"
#include "EAttachToSocketNameEnum.h"
#include "AkObservedPlayerSoundLoop.h"
#include "DBDTunableRowHandle.h"
#include "ELamentConfigurationState.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "UObject/NoExportTypes.h"
#include "LamentConfiguration.generated.h"

class UMaterialHelper;
class USpherePlayerOverlapComponent;
class UK25CollectLamentConfigurationInteraction;
class UInteractor;
class UDBDOutlineComponent;
class ULamentConfigurationOutlineStrategy;
class AK25AnimationFollowerActor;
class ULamentConfigurationSpawnStrategy;
class ULamentConfigurationChainHuntComponent;
class UAnimationMontageSlave;
class UMontagePlayer;
class AK25LamentConfigurationTeleportIndicator;
class ACamperPlayer;
class ASlasherPlayer;

UCLASS()
class ALamentConfiguration : public ACollectable, public IObjectStateProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USpherePlayerOverlapComponent* _interactable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UInteractor* _collectableInteractor;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UK25CollectLamentConfigurationInteraction* _survivorCollectItemInteraction;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UK25CollectLamentConfigurationInteraction* _killerCollectItemInteraction;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UMaterialHelper* _materialHelper;
    
    UPROPERTY(Export, VisibleAnywhere)
    ULamentConfigurationOutlineStrategy* _outlineStrategy;
    
    UPROPERTY(Export, VisibleAnywhere)
    ULamentConfigurationSpawnStrategy* _spawnStrategy;
    
    UPROPERTY(Export, VisibleAnywhere)
    ULamentConfigurationChainHuntComponent* _chainHuntComponent;
    
    UPROPERTY(EditAnywhere)
    float _dotProductMinValue;
    
    UPROPERTY(EditDefaultsOnly)
    EAttachToSocketNameEnum _survivorAttachmentSocket;
    
    UPROPERTY(EditDefaultsOnly)
    EAttachToSocketNameEnum _killerAttachmentSocket;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAnimationMontageSlave* _montageFollower;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMontagePlayer* _montagePlayer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25AnimationFollowerActor> _chainAnimationActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK25LamentConfigurationTeleportIndicator> _lamentConfigurationTeleportIndicatorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName _chainAnimationFollowerAttachmentSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FAkObservedPlayerSoundLoop _possessionSoundLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _respawnTimeAfterLamentConfigurationSolved;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _respawnTimeAfterKillerPickUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeBySelf;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _respawnTimeAfterSurvivorFreeByAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _numberChainsToLaunchUponKillerPickUpLamentConfiguration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _hostageInteractionTime;
    
private:
    UPROPERTY(Transient)
    ELamentConfigurationState _localLamentConfigurationState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LamentConfigurationState)
    ELamentConfigurationState _lamentconfigurationState;
    
    UPROPERTY(Transient)
    AK25AnimationFollowerActor* _chainAnimationActor;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SurvivorHeldHostage)
    ACamperPlayer* _survivorHeldHostage;
    
    UPROPERTY(EditDefaultsOnly)
    float _solvedLamentConfigurationDropDistanceToCollectorCentimeters;
    
    UPROPERTY(EditDefaultsOnly)
    float _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters;
    
    UPROPERTY(Replicated)
    bool _solved;
    
    UPROPERTY(Replicated)
    bool _releasedByAttack;
    
    UPROPERTY(Transient)
    AK25LamentConfigurationTeleportIndicator* _lamentConfigurationTeleportIndicator;
    
public:
    ALamentConfiguration();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerKillerPickUpSFX(const TArray<ACamperPlayer*>& affectedSurvivors);
    
private:
    UFUNCTION()
    void OnRep_SurvivorHeldHostage(ACamperPlayer* oldSurvivorHeldHostage);
    
    UFUNCTION()
    void OnRep_LamentConfigurationState();
    
    UFUNCTION()
    void OnCamperEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerSolvedSFX();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TriggerKillerPickUpSFX(const TArray<ACamperPlayer*>& affectedSurvivors);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DownedSurvivorHoldingLamentConfiguration(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CorrectLamentConfigurationPosition(const FVector& newPosition);
    
public:
    UFUNCTION(BlueprintPure)
    float GetChainHuntProgressPercentage() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerSurvivorPickUpSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerSpawnedSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerSolvedSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerRespawnDuringChainHuntSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerDisappearsSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(ASlasherPlayer* killer, ACamperPlayer* survivorDowned);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnChainHuntStartedEffects();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnChainHuntEndedEffects();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnChainHuntChargeStart(float chargeTime);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnChainHuntChargeEnd();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_EndSolvingCubeSFX(bool hasBeenSolved);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_BeginSolvingCubeSFX();
    
    UFUNCTION()
    void Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning);
    
private:
    UFUNCTION()
    void Authority_OnSurvivorHitByControlledProjectile(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnIntroCompletedOrLevelReadyToPlay();
    
    UFUNCTION()
    void Authority_OnGameEnded(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    
    // Fix for true pure virtual functions not being implemented
};

