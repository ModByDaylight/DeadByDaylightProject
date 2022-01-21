#pragma once
#include "CoreMinimal.h"
#include "UMGBaseAlertWidget.h"
#include "StatusEffectSlotData.h"
#include "InventorySlotData.h"
#include "UMGGameplayAlertWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGGameplayAlertWidget : public UUMGBaseAlertWidget {
    GENERATED_BODY()
public:
    UUMGGameplayAlertWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidget(const FStatusEffectSlotData& statusEffectData, const FInventorySlotData& originatorData);
    
};

