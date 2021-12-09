#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EFiniteStateMachineStatus.h"
#include "FiniteStateMachine.generated.h"

class UObject;
class UFSM_State;

UCLASS()
class FINITESTATEMACHINE_API UFiniteStateMachine : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFSM_State> _defaultStateClass;
    
private:
    UPROPERTY(Transient)
    UFSM_State* _currentState;
    
    UPROPERTY(Transient)
    EFiniteStateMachineStatus _currentStateMachineStatus;
    
    UPROPERTY(Transient)
    UObject* _stateMachineOwner;
    
    UPROPERTY(Transient)
    TArray<UFSM_State*> _stateInstances;
    
public:
    UFiniteStateMachine();
};

