#include "AtlantaUtilities.h"

class UImage;
class UPaperSprite;
class UTexture2D;
class ADBDPlayer;
class UButton;
class AActor;
class UInteractionDefinition;

bool UAtlantaUtilities::ShouldUseQuickRoleSwitch() {
    return false;
}

bool UAtlantaUtilities::ShouldUseOfflineMatchHistory() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaUI() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaStreamVideo() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaRituals() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaRank() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaQualitySettings() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaPurchasableOperations() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaOutlines() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaMatchmaking() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaLighting() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaKrakenContentVersion() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaItemAvailability() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaHudEditor() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaHudAttackJoystick() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaGameplayValues() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaFriendList() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaFreeTickets() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaFixedMaps() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaFearMarket() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaEntity() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaDreamworldFX() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaDailyRewards() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaCustomizedHudSettings() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaCurrencies() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaContent() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaCharacterProgression() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaCDNPatching() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaCDNBucketChangelist() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaCatalog() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaBundleFilterRules() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaBloodweb() {
    return false;
}

bool UAtlantaUtilities::ShouldUseAtlantaBackendBloodMarketData() {
    return false;
}

bool UAtlantaUtilities::ShouldSupportMultipleActiveActivatablePerks() {
    return false;
}

bool UAtlantaUtilities::SetImageSlateBrush(UImage* image, const FSlateBrush& brush, bool bMatchSize) {
    return false;
}

void UAtlantaUtilities::SetImageBrushFromSpritePath(UImage* image, const FString& path) {
}

void UAtlantaUtilities::SetImageBrushFromPath(UImage* image, const FString& path, bool bMatchSize) {
}

void UAtlantaUtilities::SetImageBrush(UImage* image, UTexture2D* asset, bool bMatchSize) {
}

void UAtlantaUtilities::SetButtonStyle(UButton* button, const FSlateBrush& brush) {
}

FString UAtlantaUtilities::SecondsToStringWithoutDecimals(const int32 seconds) {
    return TEXT("");
}

FSlateBrush UAtlantaUtilities::MakeBrushFromTexture(UTexture2D* texture) {
    return FSlateBrush{};
}

FSlateBrush UAtlantaUtilities::MakeBrushFromSprite(UPaperSprite* sprite) {
    return FSlateBrush{};
}

UTexture2D* UAtlantaUtilities::LoadTextureByAsset(const FString& path) {
    return NULL;
}

bool UAtlantaUtilities::IsTutorialEditorDebuggingEnabled() {
    return false;
}

bool UAtlantaUtilities::IsPlayerInteractingWithActor(ADBDPlayer* player, const AActor* actor) {
    return false;
}

bool UAtlantaUtilities::IsInAtlantaTutorialLevel() {
    return false;
}

FString UAtlantaUtilities::GetStoreVersion() {
    return TEXT("");
}

UPaperSprite* UAtlantaUtilities::GetSpriteFromPath(const FString& fullDbPathToImage, const FString& constantDbPathToImageFolder, const FString& constantPathToSpriteFolder) {
    return NULL;
}

UPaperSprite* UAtlantaUtilities::GetSpriteFromFullPath(const FString& fullSpritePath) {
    return NULL;
}

FText UAtlantaUtilities::GetPlayerRoleTextUppercase(const EPlayerRole playerRole) {
    return FText::GetEmpty();
}

FText UAtlantaUtilities::GetPlayerRoleText(const EPlayerRole playerRole) {
    return FText::GetEmpty();
}

FColor UAtlantaUtilities::GetPaintColorByRarity(const EItemRarity rarity) {
    return FColor{};
}

FText UAtlantaUtilities::GetOfferingCategoryText(const EOfferingCategory offeringCategory) {
    return FText::GetEmpty();
}

UPaperSprite* UAtlantaUtilities::GetMapSpriteFromPath(const FString& mapSpritePath) {
    return NULL;
}

FText UAtlantaUtilities::GetItemRarityText(const EItemRarity rarity) {
    return FText::GetEmpty();
}

FText UAtlantaUtilities::GetItemAvailabilityText(const EItemAvailability availability) {
    return FText::GetEmpty();
}

UTexture2D* UAtlantaUtilities::GetIconImageByPath(const FString& iconPath) {
    return NULL;
}

FText UAtlantaUtilities::GetEmblemQualityText(const EEmblemQuality emblemQuality) {
    return FText::GetEmpty();
}

FColor UAtlantaUtilities::GetEmblemColorByQuality(const EEmblemQuality emblemQuality) {
    return FColor{};
}

FText UAtlantaUtilities::GetDifficultyLevelText(const EAIDifficultyLevel difficultyLevel) {
    return FText::GetEmpty();
}

UInteractionDefinition* UAtlantaUtilities::GetCurrentOrAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType) {
    return NULL;
}

UInteractionDefinition* UAtlantaUtilities::GetCurrentInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType) {
    return NULL;
}

UInteractionDefinition* UAtlantaUtilities::GetCurrentInteraction(ADBDPlayer* player) {
    return NULL;
}

FString UAtlantaUtilities::GetCurrencyUITexturePath(ECurrencyType currencyType) {
    return TEXT("");
}

FSlateColor UAtlantaUtilities::GetCurrencyColor(ECurrencyType currencyType) {
    return FSlateColor{};
}

float UAtlantaUtilities::GetControlsTunableByRole(EPlayerRole playerRole, FName tunableValueName) {
    return 0.0f;
}

float UAtlantaUtilities::GetControlsTunable(FName tunableValueName) {
    return 0.0f;
}

FColor UAtlantaUtilities::GetBackgroundColorByRarity(const EItemRarity rarity) {
    return FColor{};
}

UInteractionDefinition* UAtlantaUtilities::GetAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType) {
    return NULL;
}

FText UAtlantaUtilities::GetAlantaInteractionDescriptionText(UInteractionDefinition* interaction) {
    return FText::GetEmpty();
}

UAtlantaUtilities::UAtlantaUtilities() {
}

