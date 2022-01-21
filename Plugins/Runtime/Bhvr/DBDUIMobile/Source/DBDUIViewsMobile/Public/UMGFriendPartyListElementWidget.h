#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendElementWidget.h"
#include "UMGFriendPartyListElementWidget.generated.h"

class UWidgetSwitcher;
class UButton;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UWidgetSwitcher* ButtonOrStatusSwitcher;
    
    UPROPERTY(Export)
    UButton* CancelInviteButton;
    
    UPROPERTY(Export)
    UImage* PartyStatusImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush IconNotReady;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush IconReady;
    
public:
    UUMGFriendPartyListElementWidget();
protected:
    UFUNCTION()
    void HandleCancelInviteButtonClicked();
    
};

