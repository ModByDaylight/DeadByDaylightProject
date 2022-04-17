#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "EGameState.h"
#include "EEndGameReason.h"
#include "GameplayTagContainer.h"
#include "QuestEventsHandler.generated.h"

class UQuestEventEvaluatorBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UQuestEventsHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UQuestEventEvaluatorBase*> _evaluatorList;
    
public:
    UQuestEventsHandler();
private:
    UFUNCTION()
    void OnPlayergameStateChanged(EGameState gameState);
    
    UFUNCTION()
    void OnGameEnded(EEndGameReason reason);
    
    UFUNCTION()
    void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UFUNCTION(Exec)
    void DBD_ShowInGameCurrentQuestInfos();
    
    UFUNCTION(Exec)
    void DBD_InGameAddProgressionToCurrentQuest(const int32 amount);
    
};

