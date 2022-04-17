#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Collectable.h"
#include "ThrowingKnives.generated.h"

class UKnivesLauncher;
class UFlurryComboScoreComponent;
class UPowerChargeComponent;
class UKnivesProvider;
class UTricksterSuperModeComponent;
class UK23PowerProgressPresentationComponent;
class ULacerationComponent;
class UReloadKnives;
class AActor;
class ASlasherPlayer;

UCLASS()
class AThrowingKnives : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Replicated, VisibleDefaultsOnly)
    UFlurryComboScoreComponent* _flurryScoreComponent;
    
    UPROPERTY(Export, Replicated, VisibleDefaultsOnly)
    UTricksterSuperModeComponent* _superModeComponent;
    
    UPROPERTY(Export)
    UK23PowerProgressPresentationComponent* _superModeChargePresentationComponent;
    
    UPROPERTY(Export)
    UPowerChargeComponent* _superModeChargeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    UKnivesProvider* _knivesProvider;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    UKnivesLauncher* _knivesLauncher;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ULacerationComponent> _lacerationComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UReloadKnives> _reloadInteractionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _closetReloadActor;
    
    UPROPERTY(EditDefaultsOnly)
    float _minimumTimeBetweenBroadcast;
    
public:
    AThrowingKnives();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnItemUsedStateChanged(bool pressed);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_OnUsePowerWhenOutOfAmmo();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_OnUsePowerWhenInCooldown();
    
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetSlasher() const;
    
    UFUNCTION(BlueprintPure)
    UKnivesLauncher* GetLauncher() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnUsePowerWhenOutOfAmmo();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnUsePowerWhenInCooldown();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnLaunch();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnComboFinished(bool isSRankCombo);
    
    UFUNCTION()
    void Authority_SpawnReloadInteractionOnLockers();
    
};

