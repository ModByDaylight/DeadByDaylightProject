#pragma once
#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "RBTOutlineUpdateStrategy.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API URBTOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    URBTOutlineUpdateStrategy();
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsRevealedToLocalPlayer_BP(const ADBDPlayer* player) const;
    
};

