#include "ConditionFactory.h"
#include "Templates/SubclassOf.h"

class UEventDrivenModifierCondition;
class UTimerObject;
class UConditionReceiver;
class IConditionReceiver;
class UOrModifierCondition;
class UAndModifierCondition;
class UNotModifierCondition;
class UIsTimerDoneCondition;
class URangeBasedCondition;

UOrModifierCondition* UConditionFactory::Or(TScriptInterface<IConditionReceiver> conditionReceiver) {
    return NULL;
}

UNotModifierCondition* UConditionFactory::Not(TScriptInterface<IConditionReceiver> conditionReceiver) {
    return NULL;
}

UIsTimerDoneCondition* UConditionFactory::IsTimerDone(TScriptInterface<IConditionReceiver> conditionReceiver, UTimerObject* timer) {
    return NULL;
}

URangeBasedCondition* UConditionFactory::CreateRangeBasedConditionWithSubject(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<URangeBasedCondition> conditionType, float range, UClass* subjectProviderClass) {
    return NULL;
}

URangeBasedCondition* UConditionFactory::CreateRangeBasedCondition(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<URangeBasedCondition> conditionType, float range) {
    return NULL;
}

UEventDrivenModifierCondition* UConditionFactory::CreateAndReceiveConditionWithSubjectForBP(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<UEventDrivenModifierCondition> conditionType, UClass* subjectProviderClass) {
    return NULL;
}

UEventDrivenModifierCondition* UConditionFactory::CreateAndReceiveConditionForBP(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<UEventDrivenModifierCondition> conditionType) {
    return NULL;
}

UAndModifierCondition* UConditionFactory::And(TScriptInterface<IConditionReceiver> conditionReceiver) {
    return NULL;
}

UConditionFactory::UConditionFactory() {
}

