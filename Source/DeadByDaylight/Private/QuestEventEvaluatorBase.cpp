#include "QuestEventEvaluatorBase.h"

void UQuestEventEvaluatorBase::OnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UQuestEventEvaluatorBase::UQuestEventEvaluatorBase() {
    this->_dbdPlayer = NULL;
}

