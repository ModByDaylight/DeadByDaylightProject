#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "TwinLockerBlockerComponent.generated.h"

class ADBDPlayer;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinLockerBlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UInteractionDefinition>> _interactionClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UInteractionDefinition>> _interactionsToDisableOnLockerClasses;
    
public:
    UTwinLockerBlockerComponent();
private:
    UFUNCTION()
    void OnSurvivorInLockerChanged(ADBDPlayer* oldSurvivor, ADBDPlayer* newSurvivor);
    
    UFUNCTION()
    void OnPushedMontageStopped(const FAnimationMontageDescriptor montageDescriptor);
    
    UFUNCTION()
    void OnPushedMontageStarted(const FAnimationMontageDescriptor montageDescriptor, const float rate);
    
    UFUNCTION()
    void OnPushedMontageEnded(const FAnimationMontageDescriptor montageDescriptor, bool interrupted);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTwinAttachedToLocker() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);
    
private:
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
};

