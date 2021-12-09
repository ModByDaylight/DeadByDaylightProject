#pragma once
#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "ReloadHatchet.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew)
class THEHUNTRESS_API UReloadHatchet : public UBaseLockerInteraction {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintPure)
    bool IsInteractionPossible_Shared(const ADBDPlayer* player) const;
    
public:
    UReloadHatchet();
};

