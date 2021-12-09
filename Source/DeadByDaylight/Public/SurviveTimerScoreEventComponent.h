#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurviveTimerScoreEventComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USurviveTimerScoreEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void Authority_OnGameStarted();
    
public:
    USurviveTimerScoreEventComponent();
};

