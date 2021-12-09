#pragma once
#include "CoreMinimal.h"
#include "StateMachine.h"
#include "AtlantaTutorialStateMachine.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaTutorialStateMachine : public UStateMachine {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnBlockingNotificationDismissed(FName blockingNotificationID);
    
public:
    UAtlantaTutorialStateMachine();
};

