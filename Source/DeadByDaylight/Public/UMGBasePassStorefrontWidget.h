#pragma once
#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "UMGBasePassStorefrontWidget.generated.h"

class UUMGSubscriptionsPageScrollWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBasePassStorefrontWidget : public UUMGBaseStorefrontWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSubscriptionsPageScrollWidget* SubscriptionsPageScroll;
    
public:
    UUMGBasePassStorefrontWidget();
private:
    UFUNCTION()
    void HandleSubscriptionInfoButtonClickedEvent(const FString& subscriptionDetails);
    
    UFUNCTION()
    void HandleBuySubscriptionPackButtonClickedEvent(FName subscriptionPackID);
    
};

