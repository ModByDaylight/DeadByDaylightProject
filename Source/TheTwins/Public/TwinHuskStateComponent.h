#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwinHuskStateComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UTwinHuskStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTwinHuskStateComponent();
    UFUNCTION(BlueprintPure)
    bool IsDeadFromSurvivorBack() const;
    
};

