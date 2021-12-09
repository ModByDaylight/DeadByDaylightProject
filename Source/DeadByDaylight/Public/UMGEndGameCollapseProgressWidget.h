#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGEndGameCollapseProgressWidget.generated.h"

class UProgressBar;
class UCanvasPanel;
class UHorizontalBoxSlot;

UCLASS(EditInlineNew)
class UUMGEndGameCollapseProgressWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* MarkerLeftCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* MarkerRightCanvas;
    
    UPROPERTY(Export, Transient)
    UHorizontalBoxSlot* _markerLeftBox;
    
    UPROPERTY(Export, Transient)
    UHorizontalBoxSlot* _markerRightBox;
    
    UUMGEndGameCollapseProgressWidget();
};

