#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorAimStateComponent.generated.h"

class ACollectable;

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorAimStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACollectable* _aimableCollectable;
    
public:
    USurvivorAimStateComponent();
};

