#pragma once
#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "KillerProjectileLauncher.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UKillerProjectileLauncher : public UBaseProjectileLauncher {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetOwningKiller() const;
    
public:
    UKillerProjectileLauncher();
};

