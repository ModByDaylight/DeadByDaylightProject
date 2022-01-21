#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreBaseHudWidget.h"
#include "ScreenIndicatorsContainerViewInterface.h"
#include "CoreScreenIndicatorsContainerWidget.generated.h"

class UCoreScreenIndicatorWidget;
class UCanvasPanel;

UCLASS(EditInlineNew)
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget, public IScreenIndicatorsContainerViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InactiveThreshold;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCanvasPanel* Container;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UCoreScreenIndicatorWidget> ScreenIndicatorClass;
    
private:
    UPROPERTY(Export, Transient)
    TMap<FString, UCoreScreenIndicatorWidget*> _screenIndicatorsMap;
    
    UPROPERTY(Export, Transient)
    TArray<UCoreScreenIndicatorWidget*> _screenIndicatorsPool;
    
public:
    UCoreScreenIndicatorsContainerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    TMap<FString, UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();
    
    UFUNCTION(BlueprintPure)
    FString FindScreenIndicatorKey(UCoreScreenIndicatorWidget* value) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

