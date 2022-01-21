#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostProcessUpdate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API APostProcessUpdate : public AActor {
    GENERATED_BODY()
public:
    APostProcessUpdate();
    UFUNCTION(BlueprintImplementableEvent)
    void PostProcessToggle(bool toggle);
    
};

