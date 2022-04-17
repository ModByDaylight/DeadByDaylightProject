#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPromoPackSuggestionButton.generated.h"

class UImage;
class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPromoPackSuggestionButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    URichTextBlock* RichTextButtonLabel;
    
    UPROPERTY(Export)
    UImage* LineGlow;
    
public:
    UUMGPromoPackSuggestionButton();
};

