#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Interactable.h"
#include "GameplayTagContainer.h"
#include "ECamperDamageState.h"
#include "Engine/EngineTypes.h"
#include "Locker.generated.h"

class UInteractor;
class UAnimationMontageSlave;
class ADBDPlayer;
class ACamperPlayer;
class UMontagePlayer;
class UPrimitiveComponent;
class UInteractionDefinition;
class UChildActorComponent;
class ULockerAnimInstance;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API ALocker : public AInteractable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSurvivorInLockerChanged, ADBDPlayer*, oldSurvivor, ADBDPlayer*, newSurvivor);
    
    UPROPERTY(BlueprintAssignable)
    FOnSurvivorInLockerChanged OnSurvivorInLockerChanged;
    
    UPROPERTY(EditAnywhere)
    float FastDoorActivationAudibleRange;
    
    UPROPERTY(EditAnywhere)
    float NormalDoorActivationAudibleRange;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAnimationMontageSlave* _montageFollower;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMontagePlayer* _montagePlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ADBDPlayer* _playerOpeningLocker;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ACamperPlayer* _survivorInLocker;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInteractor* _mainInteractor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* _frontInteractionZone;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInteractionDefinition* _searchEmpty;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInteractionDefinition* _searchPlayer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UChildActorComponent* _killerInteractionActor;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ULockerAnimInstance* _lockerAnimInstance;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _interactionExitClosetSemantics;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PreventAllInteractions)
    bool _preventAllInteractions;
    
    UPROPERTY(Transient)
    bool _preventAllInteractionsLocally;
    
public:
    ALocker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMinNearOutlineDistLerp(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable)
    void SpawnKillerReloadActor(TSubclassOf<AActor> actorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetupKillerSpecificInteraction(UInteractionDefinition* interaction);
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivorInLocker(ACamperPlayer* survivorInLocker);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerOpeningLocker(ADBDPlayer* player);
    
private:
    UFUNCTION()
    void OnSurvivorHealthChanged(ECamperDamageState before, ECamperDamageState after);
    
    UFUNCTION()
    void OnSurvivorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);
    
    UFUNCTION()
    void OnRep_PreventAllInteractions();
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_EjectSurvivor();
    
    UFUNCTION(BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFacingLocker(const ADBDPlayer* player, float toleranceDegreeAngle) const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetSurvivorInLocker() const;
    
    UFUNCTION(BlueprintNativeEvent)
    UPrimitiveComponent* GetStunZone() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetKillerInteractionActor() const;
    
    UFUNCTION(BlueprintPure)
    UInteractor* GetInteractor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EjectSurvivor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_ReportOpenLockerNoiseEventToAI(const bool fastActivation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_EnableOtherInteractors(const UInteractor* usableInteractor, bool usable);
    
    UFUNCTION(BlueprintPure)
    bool AreInteractionsAllowed() const;
    
};

