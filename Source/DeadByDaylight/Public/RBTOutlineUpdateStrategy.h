#pragma once
#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "RBTOutlineUpdateStrategy.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API URBTOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsRevealedToLocalPlayer_BP(const ADBDPlayer* player) const;
    
public:
    URBTOutlineUpdateStrategy();
};

