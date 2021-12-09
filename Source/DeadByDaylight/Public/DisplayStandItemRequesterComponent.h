#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayStandItemRequesterComponent.generated.h"

class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UDisplayStandItemRequesterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void LoadItemsOnCharacter(AActor* actor);
    
public:
    UDisplayStandItemRequesterComponent();
};

