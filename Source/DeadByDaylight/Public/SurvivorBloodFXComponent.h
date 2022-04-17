#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorBloodFXComponent.generated.h"

class UNiagaraComponent;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorBloodFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USurvivorBloodFXComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UNiagaraComponent* SpawnBloodSpurts();
    
};

