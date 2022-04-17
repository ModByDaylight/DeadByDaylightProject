#pragma once
#include "CoreMinimal.h"
#include "EAIDifficultyLevel.h"
#include "DangerStateGameStateMapContainer.h"
#include "Components/ActorComponent.h"
#include "AIDisplayDebugInterface.h"
#include "EDBDScoreTypes.h"
#include "EAIObjectiveState.h"
#include "GameStatePressureZoneLevelMapContainer.h"
#include "EAIPressureZoneLevel.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "DBDAIStateComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIStateComponent : public UActorComponent, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 UnsafeStateAtHookedCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DireStateAtHookedCount;
    
    UPROPERTY(EditDefaultsOnly)
    float MidObjectiveStateProgressionRatio;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIObjectiveState, FDangerStateGameStateMapContainer> GameStateTable;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIDifficultyLevel, FGameStatePressureZoneLevelMapContainer> PressureZoneLevelTable;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIPressureZoneLevel, float> PressureZoneHighToLowRangeLerpRatios;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultChasedPhaseOutDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float InjuredChasedPhaseOutDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultBeingAimedAtPhaseOutDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float InjuredBeingAimedAtPhaseOutDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float StimulusWasInSightDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float LoSFoVToStimulusCheckPeriod;
    
    UPROPERTY(EditDefaultsOnly)
    float LoSToStimulusValidDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float FoVToStimulusValidDuration;
    
    UDBDAIStateComponent();
private:
    UFUNCTION()
    void OnUniqueGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION()
    void OnStartAimingEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnSpecialAttackEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    
    // Fix for true pure virtual functions not being implemented
};

