#pragma once
#include "CoreMinimal.h"
#include "UMGBaseAlertWidget.h"
#include "EDBDScoreCategory.h"
#include "UMGScoreAlertWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGScoreAlertWidget : public UUMGBaseAlertWidget {
    GENERATED_BODY()
public:
    UUMGScoreAlertWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidget(EDBDScoreCategory scoreType, const FString& title, int32 scoreValue, float progress, const FText& defaultScoreText);
    
};

