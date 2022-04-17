#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateBrush.h"
#include "EInputInteractionType.h"
#include "Styling/SlateColor.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "EItemRarity.h"
#include "EOfferingCategory.h"
#include "EItemAvailability.h"
#include "EEmblemQuality.h"
#include "EAIDifficultyLevel.h"
#include "ECurrencyType.h"
#include "AtlantaUtilities.generated.h"

class UImage;
class UPaperSprite;
class UTexture2D;
class ADBDPlayer;
class UButton;
class AActor;
class UInteractionDefinition;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtlantaUtilities();
    UFUNCTION(BlueprintPure)
    static bool ShouldUseQuickRoleSwitch();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseOfflineMatchHistory();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaUI();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaStreamVideo();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaRituals();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaRank();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaQualitySettings();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaPurchasableOperations();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaOutlines();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaMatchmaking();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaLighting();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaKrakenContentVersion();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaItemAvailability();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaHudEditor();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaHudAttackJoystick();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaGameplayValues();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaFriendList();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaFreeTickets();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaFixedMaps();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaFearMarket();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaEntity();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaDreamworldFX();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaDailyRewards();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaCustomizedHudSettings();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaCurrencies();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaContent();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaCharacterProgression();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaCDNPatching();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaCDNBucketChangelist();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaCatalog();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaBundleFilterRules();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaBloodweb();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldUseAtlantaBackendBloodMarketData();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldSupportMultipleActiveActivatablePerks();
    
    UFUNCTION(BlueprintCallable)
    static bool SetImageSlateBrush(UImage* image, const FSlateBrush& brush, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetImageBrushFromSpritePath(UImage* image, const FString& path);
    
    UFUNCTION(BlueprintCallable)
    static void SetImageBrushFromPath(UImage* image, const FString& path, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetImageBrush(UImage* image, UTexture2D* asset, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetButtonStyle(UButton* button, const FSlateBrush& brush);
    
    UFUNCTION(BlueprintPure)
    static FString SecondsToStringWithoutDecimals(const int32 seconds);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush MakeBrushFromTexture(UTexture2D* texture);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush MakeBrushFromSprite(UPaperSprite* sprite);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTextureByAsset(const FString& path);
    
    UFUNCTION(BlueprintPure)
    static bool IsTutorialEditorDebuggingEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerInteractingWithActor(ADBDPlayer* player, const AActor* actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsInAtlantaTutorialLevel();
    
    UFUNCTION(BlueprintPure)
    static FString GetStoreVersion();
    
    UFUNCTION(BlueprintPure)
    static UPaperSprite* GetSpriteFromPath(const FString& fullDbPathToImage, const FString& constantDbPathToImageFolder, const FString& constantPathToSpriteFolder);
    
    UFUNCTION(BlueprintPure)
    static UPaperSprite* GetSpriteFromFullPath(const FString& fullSpritePath);
    
    UFUNCTION(BlueprintPure)
    static FText GetPlayerRoleTextUppercase(const EPlayerRole playerRole);
    
    UFUNCTION(BlueprintPure)
    static FText GetPlayerRoleText(const EPlayerRole playerRole);
    
    UFUNCTION(BlueprintPure)
    static FColor GetPaintColorByRarity(const EItemRarity rarity);
    
    UFUNCTION(BlueprintPure)
    static FText GetOfferingCategoryText(const EOfferingCategory offeringCategory);
    
    UFUNCTION(BlueprintPure)
    static UPaperSprite* GetMapSpriteFromPath(const FString& mapSpritePath);
    
    UFUNCTION(BlueprintPure)
    static FText GetItemRarityText(const EItemRarity rarity);
    
    UFUNCTION(BlueprintPure)
    static FText GetItemAvailabilityText(const EItemAvailability availability);
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* GetIconImageByPath(const FString& iconPath);
    
    UFUNCTION(BlueprintPure)
    static FText GetEmblemQualityText(const EEmblemQuality emblemQuality);
    
    UFUNCTION(BlueprintPure)
    static FColor GetEmblemColorByQuality(const EEmblemQuality emblemQuality);
    
    UFUNCTION(BlueprintPure)
    static FText GetDifficultyLevelText(const EAIDifficultyLevel difficultyLevel);
    
    UFUNCTION(BlueprintPure)
    static UInteractionDefinition* GetCurrentOrAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType);
    
    UFUNCTION(BlueprintPure)
    static UInteractionDefinition* GetCurrentInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType);
    
    UFUNCTION(BlueprintPure)
    static UInteractionDefinition* GetCurrentInteraction(ADBDPlayer* player);
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrencyUITexturePath(ECurrencyType currencyType);
    
    UFUNCTION(BlueprintPure)
    static FSlateColor GetCurrencyColor(ECurrencyType currencyType);
    
    UFUNCTION(BlueprintCallable)
    static float GetControlsTunableByRole(EPlayerRole playerRole, FName tunableValueName);
    
    UFUNCTION(BlueprintCallable)
    static float GetControlsTunable(FName tunableValueName);
    
    UFUNCTION(BlueprintPure)
    static FColor GetBackgroundColorByRarity(const EItemRarity rarity);
    
    UFUNCTION(BlueprintPure)
    static UInteractionDefinition* GetAvailableInteractionOfType(ADBDPlayer* player, EInputInteractionType interactionInputType);
    
    UFUNCTION(BlueprintCallable)
    static FText GetAlantaInteractionDescriptionText(UInteractionDefinition* interaction);
    
};

