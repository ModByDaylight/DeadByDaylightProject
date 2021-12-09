#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreEndGameCollapseProgressWidget.generated.h"

class UProgressBar;
class UCanvasPanel;
class UHorizontalBoxSlot;

UCLASS(EditInlineNew)
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* MarkerLeftCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* MarkerRightCanvas;
    
private:
    UPROPERTY(Export, Transient)
    UHorizontalBoxSlot* _markerLeftBox;
    
    UPROPERTY(Export, Transient)
    UHorizontalBoxSlot* _markerRightBox;
    
public:
    UCoreEndGameCollapseProgressWidget();
};

