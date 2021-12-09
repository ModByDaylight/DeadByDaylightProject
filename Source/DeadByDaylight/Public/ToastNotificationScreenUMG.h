#pragma once
#include "CoreMinimal.h"
#include "ToastNotificationScreen.h"
#include "ToastNotificationScreenUMG.generated.h"

class UUMGToastNotificationScreen;

UCLASS()
class DEADBYDAYLIGHT_API UToastNotificationScreenUMG : public UToastNotificationScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UUMGToastNotificationScreen* _toastNotificationScreen;
    
public:
    UToastNotificationScreenUMG();
};

