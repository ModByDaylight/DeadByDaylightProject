#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "EGestureID.h"
#include "GestureInteractionDefinition.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UGestureInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EGestureID _gestureID;
    
public:
    UGestureInteractionDefinition();
};

