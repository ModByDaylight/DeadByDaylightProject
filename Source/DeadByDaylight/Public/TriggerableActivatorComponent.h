#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerableActivatorComponent.generated.h"

class UTriggerableWorldObjectComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriggerableActivatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UTriggerableWorldObjectComponent> _triggerableClass;
    
    UPROPERTY(Export, Transient)
    TArray<UTriggerableWorldObjectComponent*> _triggerables;
    
public:
    UTriggerableActivatorComponent();
private:
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
};

