#pragma once
#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "Medkit.generated.h"

class UAkAudioBank;
class UAkComponent;
class UChargerComponent;
class UParticleSystem;
class ADBDPlayer;
class UAkAudioEvent;

UCLASS()
class DBDGAMEPLAY_API AMedkit : public ABaseCamperCollectable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAkComponent* _akComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UChargerComponent* _charger;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* _dustRingTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* _medkitGetAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* _medkitDropAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioBank* _medkitBank;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _healOtherChargeMultiplier;
    
public:
    AMedkit();
    UFUNCTION(BlueprintCallable)
    void UseCharge(float seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMedkitHealedCamper(ADBDPlayer* healedPlayer);
    
    UFUNCTION(BlueprintPure)
    bool HasCharge() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargeMultiplier() const;
    
protected:
    UFUNCTION()
    void Authority_OnChargeStateChange(const bool empty);
    
    UFUNCTION()
    void Authority_OnAnyOngoingInteractionChanged(const bool isInteracting);
    
    UFUNCTION()
    void Authority_ConsumeIfNotInteracting();
    
};

