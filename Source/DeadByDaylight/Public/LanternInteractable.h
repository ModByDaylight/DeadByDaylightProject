#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Interactable.h"
#include "LanternStateChangeDelegateDelegate.h"
#include "GameEventData.h"
#include "LanternCollectedByPlayerDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "ELanternState.h"
#include "LanternInteractable.generated.h"

class ADBDPlayer;
class ALanternLightCollectable;

UCLASS()
class DEADBYDAYLIGHT_API ALanternInteractable : public AInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLanternStateChangeDelegate OnLanternStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FLanternCollectedByPlayerDelegate OnLanternCollectedByPlayerCosmetic;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ALanternLightCollectable> _collectableClass;
    
public:
    ALanternInteractable();
    UFUNCTION(BlueprintCallable)
    void SlasherDestroyLantern(ADBDPlayer* player);
    
private:
    UFUNCTION()
    void OnSlasherDestroyedLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnCamperWasHooked(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnCamperLeavingHook(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnBackToCollectableTimerEnd();
    
public:
    UFUNCTION(BlueprintPure)
    ELanternState GetLanternState() const;
    
    UFUNCTION(BlueprintCallable)
    void CollectLight(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLanternState(ELanternState newLanternState);
    
    UFUNCTION(BlueprintPure)
    bool CanBeDestroyed() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeCollected() const;
    
};

