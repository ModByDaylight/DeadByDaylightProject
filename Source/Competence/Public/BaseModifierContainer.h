#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ConditionReceiver.h"
#include "ModifierReplicatedEventConditionData.h"
#include "BaseModifierContainer.generated.h"

class UEventDrivenModifierCondition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UBaseModifierContainer : public UActorComponent, public IConditionReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FName _id;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EventDrivenConditionData_Internal)
    FModifierReplicatedEventConditionData _eventDrivenConditionData;
    
public:
    UBaseModifierContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_EventDrivenConditionData_Internal(const FModifierReplicatedEventConditionData& oldReplicatedCondition);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsApplicable() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(TSubclassOf<UEventDrivenModifierCondition> conditionType);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void Authority_OnInstantiateModifierConditions();
    
    
    // Fix for true pure virtual functions not being implemented
};

