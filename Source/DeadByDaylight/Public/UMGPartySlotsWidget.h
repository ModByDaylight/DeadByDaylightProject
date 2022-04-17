#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "UMGPartySlotsWidget.generated.h"

class UVerticalBox;
class UUMGPartyPlayerSlotWidget;
class UPanelWidget;
class UUMGPartyBotSlotWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGPartySlotsWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UPanelWidget* PartyPlayerSlotsContainer;
    
    UPROPERTY(Export)
    TArray<UUMGPartyPlayerSlotWidget*> _partyPlayerSlots;
    
    UPROPERTY(Export)
    UVerticalBox* PartyBotSlotsContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGPartyBotSlotWidget> PartyBotSlotWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxSlotCount;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor ConflictingCharacterColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor NormalCharacterColor;
    
public:
    UUMGPartySlotsWidget();
private:
    UFUNCTION(BlueprintCallable)
    void SwapWidgets(int32 first, int32 second);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetState(int32 index, EPartyPlayerSlotWidgetState state);
    
    UFUNCTION(BlueprintCallable)
    void RearrangePartySlots();
    
    UFUNCTION()
    void HandleKickPlayerButtonClickEvent(const FString& friendKrakenId);
    
    UFUNCTION()
    void HandleInviteFriendButtonClickEvent();
    
    UFUNCTION()
    void HandleBotEditButtonClickEvent(const int32 index);
    
};

