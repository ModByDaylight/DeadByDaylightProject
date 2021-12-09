#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwinHuskStateComponent.generated.h"

UCLASS(BlueprintType)
class UTwinHuskStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    bool IsDeadFromSurvivorBack() const;
    
    UTwinHuskStateComponent();
};

