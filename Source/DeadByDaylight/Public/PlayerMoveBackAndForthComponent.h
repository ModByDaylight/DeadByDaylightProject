#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMoveBackAndForthComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerMoveBackAndForthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerMoveBackAndForthComponent();
private:
    UFUNCTION()
    void OnMoveTimerDone();
    
};

