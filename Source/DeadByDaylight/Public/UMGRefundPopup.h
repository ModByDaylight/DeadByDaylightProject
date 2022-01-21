#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGRefundPopup.generated.h"

class UVerticalBox;
class UUMGRefundDataWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGRefundPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* RefundDataContainer;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGRefundDataWidget> RefundDataWidgetClass;
    
public:
    UUMGRefundPopup();
};

