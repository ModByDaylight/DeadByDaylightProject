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
    
public:
    UCoreEndGameCollapseBarWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBarProgression(const float progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayToZeroAnimation();
    
    
    // Fix for true pure virtual functions not being implemented
};

