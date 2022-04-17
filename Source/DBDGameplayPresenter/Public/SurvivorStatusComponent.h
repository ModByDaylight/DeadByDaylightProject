#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "SurvivorStatusComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAYPRESENTER_API USurvivorStatusComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACamperPlayer* _survivor;
    
public:
    USurvivorStatusComponent();
private:
    UFUNCTION()
    void OnValidatedInteractionStarted();
    
    UFUNCTION()
    void OnValidatedInteractionEnded();
    
    UFUNCTION()
    void OnSuvivorDamaged(const ECamperDamageState oldDamageState, const ECamperDamageState newDamageState);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSurivorStatusChange();
    
private:
    UFUNCTION()
    void OnRunningAndMovementChanged(const bool isRunningAndMoving);
    
    UFUNCTION()
    void OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);
    
    UFUNCTION()
    void OnHookedStateChanged();
    
    UFUNCTION()
    void OnGuidedStateChanged();
    
    UFUNCTION()
    void OnCrouchChanged(const bool isCrouched);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSleeping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInjured() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHooked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHiding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHealing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHarpooned() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGettingStrangled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGettingSacrificed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCaptured() const;
    
    UFUNCTION(BlueprintPure)
    void GetMovementSpeed(float& currentMovementSpeed, float& percentMovementSpeed, float& maximumMovementSpeed) const;
    
};

