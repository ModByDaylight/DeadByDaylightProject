#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnCharacterUseFreeTicketButtonClickedEventDelegate.h"
#include "UMGCharacterFreeTicketWidget.generated.h"

class UUMGCharacterFreeTicketItemButton;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class UUMGCharacterFreeTicketWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCharacterUseFreeTicketButtonClickedEvent OnUseFreeTicketEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* PanelSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* FreeTicketItemButtonBox;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGCharacterFreeTicketItemButton> _buttonClass;
    
public:
    UUMGCharacterFreeTicketWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBGColor(bool isSlasher);
    
public:
    UFUNCTION()
    void HandleButtonClickEvent(const FString& ticketID, const FString& characterName);
    
};

