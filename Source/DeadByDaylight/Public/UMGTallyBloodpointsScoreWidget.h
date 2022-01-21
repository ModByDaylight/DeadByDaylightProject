#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyBloodpointsScoreWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class UUMGTallyBloodpointsScoreWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UUMGTallyBloodpointsScoreWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidgetByScoreData(const FText& title, const UTexture2D* asset, int32 scoreValue);
    
};

