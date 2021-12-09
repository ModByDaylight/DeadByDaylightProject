#include "DBDConditionFactory.h"

class UConditionReceiver;
class IConditionReceiver;
class UPerk;
class UIsPlayerPerformingInteraction;
class UDoesPerkHaveToken;

UIsPlayerPerformingInteraction* UDBDConditionFactory::IsPlayerPerformingInteraction(TScriptInterface<IConditionReceiver> conditionReceiver, const FGameplayTagContainer& interactionSemantics) {
    return NULL;
}

UDoesPerkHaveToken* UDBDConditionFactory::DoesPerkHaveToken(TScriptInterface<IConditionReceiver> conditionReceiver, UPerk* perk) {
    return NULL;
}

UDBDConditionFactory::UDBDConditionFactory() {
}

