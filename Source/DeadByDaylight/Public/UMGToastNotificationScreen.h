#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGToastNotificationScreen.generated.h"

class UUMGBaseToastWidget;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGToastNotificationScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGBaseToastWidget> NotificationToast;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGBaseToastWidget> InvitationPartyToast;
    
    UPROPERTY(Export)
    UVerticalBox* ToastsContainer;
    
private:
    UPROPERTY(Export)
    TMap<uint32, UUMGBaseToastWidget*> _toastsDisplayedOnScreen;
    
public:
    UUMGToastNotificationScreen();
protected:
    UFUNCTION()
    void HandleOnPromptSelected(int32 notificationId);
    
    UFUNCTION()
    void HandleOnNotificationDisplayEnd(int32 notificationId);
    
    UFUNCTION()
    void HandleOnButtonSelected(int32 buttonId, int32 notificationId);
    
};

