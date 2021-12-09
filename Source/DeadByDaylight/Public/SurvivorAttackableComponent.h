#pragma once
#include "CoreMinimal.h"
#include "AttackableComponent.h"
#include "EAttackType.h"
#include "SurvivorAttackableComponent.generated.h"

class ADBDPlayer;
class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USurvivorAttackableComponent : public UAttackableComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HitCosmetic_NonLocal(const ADBDPlayer* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_HitCosmetic(const AActor* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_HitCosmetic(const AActor* attacker, EAttackType attackType, bool causeKO, bool isWeaponHit);
    
    USurvivorAttackableComponent();
};

