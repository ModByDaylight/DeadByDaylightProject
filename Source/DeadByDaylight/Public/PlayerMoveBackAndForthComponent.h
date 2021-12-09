#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMoveBackAndForthComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerMoveBackAndForthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnMoveTimerDone();
    
public:
    UPlayerMoveBackAndForthComponent();
};

