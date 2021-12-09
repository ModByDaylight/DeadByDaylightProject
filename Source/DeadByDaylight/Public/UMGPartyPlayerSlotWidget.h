#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "MobileBaseUserWidget.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "UMGPartyPlayerSlotWidget.generated.h"

class UWidget;
class UTextBlock;
class UCanvasPanel;
class UImage;
class UWidgetSwitcher;
class UUMGBaseButtonWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyPlayerSlotWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTextBlock* PlayerName;
    
    UPROPERTY(Export)
    UTextBlock* AdditionalInformationText;
    
    UPROPERTY(Export)
    UImage* FriendIcon;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* KickPlayerButton;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo CharacterNameStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo PlayerInMatchStyle;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerInMatchOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerInLobbyOpacity;
    
    UPROPERTY(Export)
    UWidget* PlayerInformationContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ReadyIconsCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* RequestRoleIconsCanvas;
    
    UPROPERTY(Export)
    UWidgetSwitcher* RoleSwitcher;
    
    UPROPERTY(Export)
    UImage* LeaderIcon;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualsFromState(EPartyPlayerSlotWidgetState widgetState);
    
private:
    UFUNCTION()
    void HandleKickPlayerButtonEvent();
    
public:
    UUMGPartyPlayerSlotWidget();
};

