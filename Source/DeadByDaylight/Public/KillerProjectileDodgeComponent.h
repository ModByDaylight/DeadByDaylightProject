#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerProjectileDodgeComponent.generated.h"

class AActor;
class AKillerProjectile;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API UKillerProjectileDodgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AKillerProjectile* _killerProjectile;
    
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _proximitySurvivors;
    
    UFUNCTION()
    void OnKillerProjectileLaunched();
    
    UFUNCTION()
    void OnKillerProjectileFinishedWithoutCollision();
    
    UFUNCTION()
    void OnKillerProjectileFinished(AActor* survivorHit);
    
public:
    UKillerProjectileDodgeComponent();
};

