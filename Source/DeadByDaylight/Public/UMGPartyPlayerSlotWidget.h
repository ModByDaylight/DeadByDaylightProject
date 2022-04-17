#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Fonts/SlateFontInfo.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "UMGPartyPlayerSlotWidget.generated.h"

class UTextBlock;
class UUMGBaseButtonWidget;
class UImage;
class UCanvasPanel;
class UWidget;
class UWidgetSwitcher;

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
    UUMGPartyPlayerSlotWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualsFromState(EPartyPlayerSlotWidgetState widgetState);
    
private:
    UFUNCTION()
    void HandleKickPlayerButtonEvent();
    
};

