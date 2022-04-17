#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "DBDConditionFactory.generated.h"

class UIsPlayerPerformingInteraction;
class UConditionReceiver;
class IConditionReceiver;
class UPerk;
class UDoesPerkHaveToken;

UCLASS(BlueprintType)
class DBDCOMPETENCE_API UDBDConditionFactory : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDBDConditionFactory();
    UFUNCTION(BlueprintCallable)
    static UIsPlayerPerformingInteraction* IsPlayerPerformingInteraction(TScriptInterface<IConditionReceiver> conditionReceiver, const FGameplayTagContainer& interactionSemantics);
    
    UFUNCTION(BlueprintCallable)
    static UDoesPerkHaveToken* DoesPerkHaveToken(TScriptInterface<IConditionReceiver> conditionReceiver, UPerk* perk);
    
};

