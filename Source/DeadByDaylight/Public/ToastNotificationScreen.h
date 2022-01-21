#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "ToastNotificationScreen.generated.h"

UCLASS()
class UToastNotificationScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UToastNotificationScreen();
    UFUNCTION()
    void OnPromptSelected(int32 notificationId);
    
    UFUNCTION()
    void OnNotificationDisplayEnd(int32 notificationId);
    
    UFUNCTION()
    void OnButtonSelected(int32 buttonId, int32 notificationId);
    
};

