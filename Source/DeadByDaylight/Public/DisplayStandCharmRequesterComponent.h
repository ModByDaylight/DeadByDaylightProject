#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DisplayStandCharmRequesterComponent.generated.h"

class ACharm;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandCharmRequesterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<ACharm> _menuCharmClass;
    
public:
    UDisplayStandCharmRequesterComponent();
private:
    UFUNCTION()
    void OnCharmDisplayed(AActor* actor);
    
};

