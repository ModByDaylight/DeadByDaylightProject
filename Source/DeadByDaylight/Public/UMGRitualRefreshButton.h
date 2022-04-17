#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "ECurrencyType.h"
#include "UMGRitualRefreshButton.generated.h"

class UCanvasPanel;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRitualRefreshButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* RefreshCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* RefreshSwitcher;
    
public:
    UUMGRitualRefreshButton();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRefreshButton(int32 currency, ECurrencyType currentyType, bool isAdsRefresh);
    
};

