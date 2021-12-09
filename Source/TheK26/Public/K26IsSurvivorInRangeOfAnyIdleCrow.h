#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "K26IsSurvivorInRangeOfAnyIdleCrow.generated.h"

class ACamperPlayer;
class UAuthoritativeActorPoolComponent;
class AK26CrowProjectile;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged, bool, isTrue);

UCLASS()
class UK26IsSurvivorInRangeOfAnyIdleCrow : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged OnIsTrueChanged;
    
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
    
public:
    UK26IsSurvivorInRangeOfAnyIdleCrow();
};

