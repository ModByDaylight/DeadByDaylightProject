#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "RefundUIData.h"
#include "UMGRefundDataWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGRefundDataWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UUMGRefundDataWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetDataAndUpdateWidget(const FRefundUIData& RefundUIData);
    
};

