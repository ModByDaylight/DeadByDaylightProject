#include "UmgPlayerHud.h"

class UInteractionDefinition;

void UUmgPlayerHud::TutorialTallyNextSelected() {
}

void UUmgPlayerHud::TutorialTallyLeaveSelected() {
}

void UUmgPlayerHud::SetVirtualJoystickThumbImage(bool locked) {
}

void UUmgPlayerHud::OnSettingsButtonPressed() {
}

void UUmgPlayerHud::OnPerkClicked(FName perkID, bool clickedOnPerksWidget) {
}

void UUmgPlayerHud::OnInteractionStarted(UInteractionDefinition* interaction) {
}

void UUmgPlayerHud::OnInteractionEnded(UInteractionDefinition* interaction) {
}


bool UUmgPlayerHud::IsInteractionAvailable(EInputInteractionType interactionType) const {
    return false;
}

bool UUmgPlayerHud::IsInteractionAllowed(UInteractionDefinition* interaction) const {
    return false;
}

bool UUmgPlayerHud::IsInitialized_Implementation() const {
    return false;
}

FSlateBrush UUmgPlayerHud::GetInteractionIconByType(EInputInteractionType interactionInputType) const {
    return FSlateBrush{};
}

UInteractionDefinition* UUmgPlayerHud::GetCurrentOrAvailableInteractionOfType(EInputInteractionType interactionInputType) const {
    return NULL;
}

UUmgPlayerHud::UUmgPlayerHud() : UUserWidget(FObjectInitializer::Get()) {
    this->GameStartingPanel = NULL;
    this->InGamePanel = NULL;
    this->SkillCheckWidget = NULL;
    this->MapThemeWidget = NULL;
    this->AtlantaAlertsWidget = NULL;
    this->AtlantaObjectivesWidget = NULL;
    this->AtlantaPerksWidget = NULL;
    this->ActivablePerkActionButton = NULL;
    this->AtlantaStatusEffectsWidget = NULL;
    this->AtlantaInteractionWidget = NULL;
    this->AtlantaPromptWidget = NULL;
    this->AtlantaTutorialPromptWidget = NULL;
    this->AtlantaPlayersStatusWidget = NULL;
    this->AtlantaObjectivesContainer = NULL;
    this->ActionButton = NULL;
    this->ActionButtonContainer = NULL;
    this->PerkSoundHudWidget = NULL;
    this->CenterInteractionButton = NULL;
    this->CenterInteractionContainer = NULL;
    this->CancelButtonContainer = NULL;
    this->EndGameCollapseWidget = NULL;
    this->LocalController = NULL;
    this->AtlantaDirectionalStick = NULL;
    this->AtlantaDirectionalStickContainer = NULL;
    this->_localPlayer = NULL;
}

