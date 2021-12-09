#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "UMGBaseButtonWidget.h"
#include "UMGRitualRefreshButton.generated.h"

class UWidgetSwitcher;
class UCanvasPanel;

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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRefreshButton(int32 currency, ECurrencyType currentyType, bool isAdsRefresh);
    
    UUMGRitualRefreshButton();
};

