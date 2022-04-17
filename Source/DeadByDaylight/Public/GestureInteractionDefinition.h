#pragma once
#include "CoreMinimal.h"
#include "EGestureID.h"
#include "InteractionDefinition.h"
#include "GestureInteractionDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGestureInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EGestureID _gestureID;
    
public:
    UGestureInteractionDefinition();
};

