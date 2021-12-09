#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "EndGameCollapseBarViewInterface.h"
#include "CoreEndGameCollapseBarWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget, public IEndGameCollapseBarViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _progressBarInterpSpeed;
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBarProgression(const float progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayToZeroAnimation();
    
public:
    UCoreEndGameCollapseBarWidget();
};

