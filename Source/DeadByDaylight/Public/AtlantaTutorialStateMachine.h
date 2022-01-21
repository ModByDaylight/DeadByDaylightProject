#pragma once
#include "CoreMinimal.h"
#include "StateMachine.h"
#include "AtlantaTutorialStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAtlantaTutorialStateMachine : public UStateMachine {
    GENERATED_BODY()
public:
    UAtlantaTutorialStateMachine();
private:
    UFUNCTION()
    void OnBlockingNotificationDismissed(FName blockingNotificationID);
    
};

