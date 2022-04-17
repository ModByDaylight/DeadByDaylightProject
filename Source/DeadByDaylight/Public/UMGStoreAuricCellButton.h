#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "CurrencyPurchaseData.h"
#include "UObject/NoExportTypes.h"
#include "UMGStoreAuricCellButton.generated.h"

class UTextBlock;
class UOverlay;

UCLASS(Abstract, EditInlineNew)
class UUMGStoreAuricCellButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FCurrencyPurchaseData CurrencyPurchaseData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* AuricCellTitleText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOverlay* Timer;
    
public:
    UUMGStoreAuricCellButton();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateWidget(const int32 multiplier, const FDateTime endDate);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateFirstPurchaseEndInUI(const FString& endInString);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReportInvalidPercentage(float percentage);
    
    UFUNCTION(BlueprintCallable)
    bool HasBonusExpired(const FDateTime endDate);
    
};

