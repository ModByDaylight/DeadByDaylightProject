#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGSettingSubscriptionStatus.generated.h"

class UWidgetSwitcher;
class UHorizontalBox;
class UOverlay;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingSubscriptionStatus : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FText SubscriptionStatusText;
    
    UPROPERTY(EditDefaultsOnly)
    FText StatusText;
    
    UPROPERTY(EditDefaultsOnly)
    FText InactiveStatusText;
    
    UPROPERTY(EditDefaultsOnly)
    FText EndText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* TypeSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* ActiveWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOverlay* InactiveWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Status;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* StatusInactive;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* End;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* EndDate;
    
public:
    UUMGSettingSubscriptionStatus();
};

