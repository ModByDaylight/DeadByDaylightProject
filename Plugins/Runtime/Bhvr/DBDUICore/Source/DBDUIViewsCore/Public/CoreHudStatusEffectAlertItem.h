#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StatusEffectAlertViewData.h"
#include "CoreHudStatusEffectAlertItem.generated.h"

UCLASS(EditInlineNew)
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UCoreHudStatusEffectAlertItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FStatusEffectAlertViewData& data);
    
};

