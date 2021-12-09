#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterFreeTicketWidget.generated.h"

class UUMGCharacterFreeTicketItemButton;
class UWidgetSwitcher;
class UVerticalBox;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMGCharacterFreeTicketWidgetOnUseFreeTicketEvent, const FString&, ticketId, const FString&, characterName);

UCLASS(EditInlineNew)
class UUMGCharacterFreeTicketWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGCharacterFreeTicketWidgetOnUseFreeTicketEvent OnUseFreeTicketEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* PanelSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* FreeTicketItemButtonBox;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGCharacterFreeTicketItemButton> _buttonClass;
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBGColor(bool isSlasher);
    
public:
    UFUNCTION()
    void HandleButtonClickEvent(const FString& ticketID, const FString& characterName);
    
    UUMGCharacterFreeTicketWidget();
};

