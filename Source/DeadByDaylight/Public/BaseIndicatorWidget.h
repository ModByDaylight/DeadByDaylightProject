#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "BaseIndicatorWidget.generated.h"

class UImage;
class UCanvasPanel;
class UCanvasPanelSlot;

UCLASS(EditInlineNew)
class UBaseIndicatorWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UCanvasPanel* _safeZonePanel;
    
    UPROPERTY(Export, Transient)
    UCanvasPanelSlot* _canvasPanelSlot;
    
    UPROPERTY(EditDefaultsOnly)
    float RadiusMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* IndicatorPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* Indicator;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ArrowImage;
    
    UFUNCTION()
    void OnOutAnimationFinished();
    
public:
    UBaseIndicatorWidget();
};

