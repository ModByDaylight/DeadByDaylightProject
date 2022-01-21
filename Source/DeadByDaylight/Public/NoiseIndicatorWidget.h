#pragma once
#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "NoiseIndicatorWidget.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UNoiseIndicatorWidget : public UBaseIndicatorWidget {
    GENERATED_BODY()
public:
    UNoiseIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetIndicatorPanel(UCanvasPanel* panel);
    
};

