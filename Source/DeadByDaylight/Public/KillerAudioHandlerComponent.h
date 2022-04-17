#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttackType.h"
#include "KillerAudioHandlerComponent.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerAudioHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UKillerAudioHandlerComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void TriggerSurvivorDamageHitAudioSFX(ACamperPlayer* camper, EAttackType attackType, bool causedKO, bool isWeaponHit, bool isLightHit);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void TriggerKillerReactionSpecificSurvivorSFX(ADBDPlayer* camper);
    
private:
    UFUNCTION()
    void OnChaseStart(ADBDPlayer* chasedSurvivor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void HitImpactOnSurvivorSFX(ACamperPlayer* camper, EAttackType attackType, bool isWeaponHit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ChaseTriggerKillerReactionSpecificSurvivorSFX(ADBDPlayer* camper);
    
};

