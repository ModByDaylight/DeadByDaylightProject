#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemPerformedInteraction.generated.h"

class ADBDPlayer;

UINTERFACE(Blueprintable, MinimalAPI)
class UItemPerformedInteraction : public UInterface {
    GENERATED_BODY()
};

class IItemPerformedInteraction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractionPerformedWithItem(ADBDPlayer* instigator);
    
};

