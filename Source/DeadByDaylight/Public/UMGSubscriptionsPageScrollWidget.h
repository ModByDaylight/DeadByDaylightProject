#pragma once
#include "CoreMinimal.h"
#include "UMGGridPageScrollWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGSubscriptionsPageScrollWidget.generated.h"

class UUMGSubscriptionPackButtonWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSubscriptionsPageScrollWidget : public UUMGGridPageScrollWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGSubscriptionPackButtonWidget> SubscriptionPackButtonClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D ItemPadding;
    
public:
    UUMGSubscriptionsPageScrollWidget();
private:
    UFUNCTION()
    void HandleSubscriptionInfoButtonClickedEvent(const FString& subscriptionDetails);
    
    UFUNCTION()
    void HandleBuySubscriptionPackButtonClickedEvent(FName subscriptionPackID);
    
};

