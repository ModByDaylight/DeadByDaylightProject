#pragma once
#include "CoreMinimal.h"
#include "ScoreAlertViewData.h"
#include "CoreBaseUserWidget.h"
#include "CoreHudScoreAlertItem.generated.h"

UCLASS(EditInlineNew)
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FScoreAlertViewData& data);
    
    UCoreHudScoreAlertItem();
};

