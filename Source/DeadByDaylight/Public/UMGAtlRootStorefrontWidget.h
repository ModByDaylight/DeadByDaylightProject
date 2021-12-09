#pragma once
#include "CoreMinimal.h"
#include "UMGBaseRootStorefrontWidget.h"
#include "UMGAtlRootStorefrontWidget.generated.h"

class UUMGCurrencyWidget;
class UUMGAuricCellsButton;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlRootStorefrontWidget : public UUMGBaseRootStorefrontWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGCurrencyWidget* ShardWalletWidget;
    
    UPROPERTY(Export)
    UUMGAuricCellsButton* AuricWalletWidget;
    
public:
    UUMGAtlRootStorefrontWidget();
};

