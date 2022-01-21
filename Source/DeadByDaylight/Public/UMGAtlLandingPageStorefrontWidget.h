#pragma once
#include "CoreMinimal.h"
#include "UMGBaseLandingPageStorefrontWidget.h"
#include "UMGAtlLandingPageStorefrontWidget.generated.h"

class UUMGBaseButtonWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlLandingPageStorefrontWidget : public UUMGBaseLandingPageStorefrontWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGBaseButtonWidget* AtlantaRedeemCodeBtn;
    
public:
    UUMGAtlLandingPageStorefrontWidget();
protected:
    UFUNCTION()
    void OnPromoCodeButtonPressed();
    
};

