#pragma once
#include "CoreMinimal.h"
#include "RespawnableTrigger.h"
#include "TimedRespawnableTrigger.generated.h"

class URespawningEventComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UTimedRespawnableTrigger : public URespawnableTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    URespawningEventComponent* _respawningEventComponent;
    
public:
    UTimedRespawnableTrigger();
};

