#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "StartScreenBase.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AStartScreenBase : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AStartScreenBase();
    UFUNCTION(BlueprintCallable)
    void TravelToMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginDestroyTravelSequence();
    
};

