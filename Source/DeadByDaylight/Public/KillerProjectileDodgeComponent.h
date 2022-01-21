#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerProjectileDodgeComponent.generated.h"

class AKillerProjectile;
class ACamperPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerProjectileDodgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AKillerProjectile* _killerProjectile;
    
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _proximitySurvivors;
    
public:
    UKillerProjectileDodgeComponent();
private:
    UFUNCTION()
    void OnKillerProjectileLaunched();
    
    UFUNCTION()
    void OnKillerProjectileFinishedWithoutCollision();
    
    UFUNCTION()
    void OnKillerProjectileFinished(AActor* survivorHit);
    
};

