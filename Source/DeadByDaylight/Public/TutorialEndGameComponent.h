#pragma once
#include "CoreMinimal.h"
#include "EndGameComponent.h"
#include "TutorialEndGameComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UTutorialEndGameComponent : public UEndGameComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _timerMaxCompletionPercentage;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimerMaxCompletionPercentage(const float& percentage);
    
    UTutorialEndGameComponent();
};

