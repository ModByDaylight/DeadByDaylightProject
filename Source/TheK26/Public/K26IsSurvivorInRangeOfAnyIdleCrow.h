#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "OnIsTrueChangedDelegate.h"
#include "K26IsSurvivorInRangeOfAnyIdleCrow.generated.h"

class UAuthoritativeActorPoolComponent;
class AActor;
class ACamperPlayer;
class AK26CrowProjectile;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26IsSurvivorInRangeOfAnyIdleCrow : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnIsTrueChanged OnIsTrueChanged;
    
    UK26IsSurvivorInRangeOfAnyIdleCrow();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetIsTrue(const bool isTrue);
    
public:
    UFUNCTION(BlueprintCallable)
    void Authority_SetVariables(ACamperPlayer* trackedSurvivor, UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent, const float range);
    
private:
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
    UFUNCTION()
    void Authority_OnCrowProjectileStateChanged(AK26CrowProjectile* crowProjectile);
    
    UFUNCTION()
    void Authority_OnCrowAddedToPool(AActor* crowProjectileActor);
    
};

