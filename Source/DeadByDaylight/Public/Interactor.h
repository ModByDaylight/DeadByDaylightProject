#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Lock.h"
#include "Interactor.generated.h"

class UInteractionDefinition;
class AInteractable;
class ADBDPlayer;
class UInterruptionDefinition;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UInteractor : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InteractorName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool IsUsable;
    
private:
    UPROPERTY(Transient)
    FLock _lock;
    
    UPROPERTY(Transient)
    FLock _reservation;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _currentInteraction;
    
    UPROPERTY(Export, Transient)
    TArray<UInteractionDefinition*> _interactionDefinitions;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsUsable(bool isUsableParam);
    
private:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ReservationStatus(ADBDPlayer* player, bool lock);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_LockStatus(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock);
    
public:
    UFUNCTION()
    bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsUsable() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInteractionDefinition*> GetInteractionDefinitions() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetInteractingPlayerRaw() const;
    
    UFUNCTION(BlueprintPure)
    AInteractable* GetInteractable() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionDefinition* GetCurrentInteraction() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPerformInteraction(const ADBDPlayer* player, const UInteractionDefinition* definition) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPPostInitializeComponents();
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* Authority_GetInteractingPlayer() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UInteractor();
};

