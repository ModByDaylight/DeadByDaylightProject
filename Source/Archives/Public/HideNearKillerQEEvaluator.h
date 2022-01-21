#pragma once
#include "CoreMinimal.h"
#include "NearKillerQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "HideNearKillerQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS()
class ARCHIVES_API UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator {
    GENERATED_BODY()
public:
    UHideNearKillerQEEvaluator();
private:
    UFUNCTION()
    void OnSlashHarpoonedCamper(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnHarpoonHit(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UFUNCTION()
    void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
private:
    UFUNCTION()
    void OnChaseStart(ADBDPlayer* chasedSurvivor);
    
    UFUNCTION()
    void OnChaseEnd(ADBDPlayer* chasedSurvivor, float chaseTime);
    
    UFUNCTION()
    void OnCamperBreakFreeFromHarpoon(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

