#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EAIDifficultyLevel.h"
#include "Styling/SlateColor.h"
#include "UMGPartyBotSlotWidget.generated.h"

class UTextBlock;
class UImage;
class UUMGBaseButtonWidget;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyBotSlotWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTextBlock* RoleText;
    
    UPROPERTY(Export)
    UTextBlock* BotDifficultyText;
    
    UPROPERTY(Export)
    UTextBlock* CharacterNameText;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* EditButton;
    
    UPROPERTY(Export)
    UImage* EditIcon;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* InvitePartyButton;
    
    UPROPERTY(Export)
    UCanvasPanel* InvitePartyCanvas;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIDifficultyLevel, FSlateColor> DifficultyColors;
    
public:
    UUMGPartyBotSlotWidget();
private:
    UFUNCTION()
    void HandleInvitePartyButtonEvent();
    
    UFUNCTION()
    void HandleEditButtonEvent();
    
};

