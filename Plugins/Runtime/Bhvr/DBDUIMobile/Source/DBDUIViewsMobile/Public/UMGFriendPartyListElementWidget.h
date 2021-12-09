#pragma once
#include "CoreMinimal.h"
#include "UMGFriendElementWidget.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendPartyListElementWidget.generated.h"

class UButton;
class UWidgetSwitcher;
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
    
    UFUNCTION()
    void HandleCancelInviteButtonClicked();
    
public:
    UUMGFriendPartyListElementWidget();
};

