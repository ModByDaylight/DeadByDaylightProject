#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayStandItemRequesterComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandItemRequesterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDisplayStandItemRequesterComponent();
private:
    UFUNCTION()
    void LoadItemsOnCharacter(AActor* actor);
    
};

