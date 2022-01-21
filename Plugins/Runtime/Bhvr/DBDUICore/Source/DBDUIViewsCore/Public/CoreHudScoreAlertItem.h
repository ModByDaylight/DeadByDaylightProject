#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ScoreAlertViewData.h"
#include "CoreHudScoreAlertItem.generated.h"

UCLASS(EditInlineNew)
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UCoreHudScoreAlertItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FScoreAlertViewData& data);
    
};

