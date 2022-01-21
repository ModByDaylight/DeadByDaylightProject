#pragma once
#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "KillerProjectileLauncher.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerProjectileLauncher : public UBaseProjectileLauncher {
    GENERATED_BODY()
public:
    UKillerProjectileLauncher();
protected:
    UFUNCTION(BlueprintPure)
    ASlasherPlayer* GetOwningKiller() const;
    
};

