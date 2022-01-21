#pragma once
#include "CoreMinimal.h"
#include "FSM_State.h"
#include "K25ChainStrikeBaseState.generated.h"

class ADBDPlayer;
class AK25Power;
class AK25Gateway;

UCLASS(Abstract, BlueprintType)
class UK25ChainStrikeBaseState : public UFSM_State {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSet<FName> _secondaryInteractionIDs;
    
public:
    UK25ChainStrikeBaseState();
protected:
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetPlayerOwner() const;
    
    UFUNCTION(BlueprintPure)
    AK25Power* GetK25Power() const;
    
    UFUNCTION(BlueprintPure)
    AK25Gateway* GetK25Gateway() const;
    
};

