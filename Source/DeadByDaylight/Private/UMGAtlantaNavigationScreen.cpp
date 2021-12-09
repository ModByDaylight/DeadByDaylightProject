#include "UMGAtlantaNavigationScreen.h"

TArray<FPartyMemberUIData> UUMGAtlantaNavigationScreen::GetPartyMembersData(int32 index) const {
    return TArray<FPartyMemberUIData>();
}

void UUMGAtlantaNavigationScreen::ButtonClickEvent(ENavigationScreenButton buttonid) {
}

UUMGAtlantaNavigationScreen::UUMGAtlantaNavigationScreen() {
    this->BankAndPlayerInfoWidget = NULL;
    this->TextButtonStart = NULL;
    this->PlayModeSelectionVisibility = ESlateVisibility::Collapsed;
    this->CharacterInfoVisibility = ESlateVisibility::Collapsed;
    this->BackButtonVisibility = ESlateVisibility::Collapsed;
    this->MenuButtonsVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->ButtonRoleVisibility = ESlateVisibility::Collapsed;
    this->ButtonRole = NULL;
    this->BottomRightWidgetSwitcher = NULL;
    this->PartyPlayerSlots = NULL;
    this->PartyCountdownLarge = NULL;
}

