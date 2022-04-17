#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "FSM_State.generated.h"

class UFiniteStateMachine;
class UFSM_State;
class UFSM_Transition;

UCLASS(Abstract)
class FINITESTATEMACHINE_API UFSM_State : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName _stateName;
    
    UPROPERTY(EditAnywhere)
    bool _shouldTick;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFSM_State> _defaultChildStateClass;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UFSM_Transition*> _transitions;
    
    UPROPERTY(Export, Transient)
    UFiniteStateMachine* _stateMachine;
    
    UPROPERTY(Transient)
    UFSM_State* _parentState;
    
private:
    UPROPERTY(Transient)
    UFSM_State* _currentChildState;
    
    UPROPERTY(Transient)
    float _startTimestamp;
    
public:
    UFSM_State();
};

