#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "PartyMemberUIData.h"
#include "ENavigationScreenButton.h"
#include "UMGAtlantaNavigationScreen.generated.h"

class UUMGBankAndPlayerInfoWidget;
class UTextBlock;
class UWidgetSwitcher;
class UUMGPartySlotsWidget;
class UButton;
class UUMGBaseCountdownWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaNavigationScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextButtonStart;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility PlayModeSelectionVisibility;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility CharacterInfoVisibility;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility BackButtonVisibility;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESlateVisibility MenuButtonsVisibility;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility ButtonRoleVisibility;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UButton* ButtonRole;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidgetSwitcher* BottomRightWidgetSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPartySlotsWidget* PartyPlayerSlots;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBaseCountdownWidget* PartyCountdownLarge;
    
private:
    UPROPERTY()
    TArray<FPartyMemberUIData> _partyMembers;
    
public:
    UUMGAtlantaNavigationScreen();
    UFUNCTION(BlueprintPure)
    TArray<FPartyMemberUIData> GetPartyMembersData(int32 index) const;
    
    UFUNCTION(BlueprintCallable)
    void ButtonClickEvent(ENavigationScreenButton buttonid);
    
};

