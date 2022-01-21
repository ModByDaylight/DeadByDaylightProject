#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CartersSparkComponent.generated.h"

class ADBDPlayer;
class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCartersSparkComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _staticBlastEnabled;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _totallyInsanePlayers;
    
    UPROPERTY(Transient)
    ADBDPlayer* _owningPlayer;
    
public:
    UCartersSparkComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerStaticBlastCooldown();
    
    UFUNCTION(BlueprintCallable)
    void TriggerShockTherapyCooldown();
    
private:
    UFUNCTION()
    void OnRequestAndBeginInteraction(UInteractionDefinition* interaction);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_OnShockTherapyCooldownCheatEntered();
    
    UFUNCTION(BlueprintPure)
    bool IsStaticBlastOnCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShockTherapyOnCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetStaticBlastCooldownPercentElapsed() const;
    
private:
    UFUNCTION()
    void Authority_RegisterToGameEvents();
    
public:
    UFUNCTION(BlueprintCallable)
    void Authority_AddTotallyInsaneSurvivor(ADBDPlayer* insaneSurvivor);
    
};

