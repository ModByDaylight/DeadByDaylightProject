#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "StoreScreen.generated.h"

UCLASS()
class UStoreScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UStoreScreen();
protected:
    UFUNCTION()
    void OnUnlockWithCurrency(int32 currencyId, const FString& combinedItem);
    
    UFUNCTION()
    void OnUnlockDlc(const FString& dlcId) const;
    
    UFUNCTION()
    void OnTabSelected(int32 index);
    
    UFUNCTION()
    void OnStorySelected() const;
    
    UFUNCTION()
    void OnStoreItemSelected(const FString& itemId);
    
    UFUNCTION()
    void OnStoreItemLinkSelected(const FString& itemId);
    
    UFUNCTION()
    void OnStoreCharacterSelected(int32 characterIndex);
    
    UFUNCTION()
    void OnStoreCatalogCategorySelected(int32 categoryIndex);
    
    UFUNCTION()
    void OnSearchInputChanged(const FString& searchInput);
    
    UFUNCTION()
    void OnRotateCharacter(float mouseDistanceChange);
    
    UFUNCTION()
    void OnPromoCodeButtonClicked();
    
    UFUNCTION()
    void OnNotEnoughTokens();
    
    UFUNCTION()
    void OnMarketSlotButtonClick(int32 slotIndex);
    
    UFUNCTION()
    void OnFiltersUpdated(bool all, bool rarityCommon, bool rarityUncommon, bool rarityRare, bool rarityVeryRare, bool rarityUltraRare, bool rarityArtifact, bool rarityLegendary, bool raritySpecialEvent, bool includeAllOwnedItems);
    
    UFUNCTION()
    void OnFeaturedStoreItemSelected(const FString& itemId, bool isOutfit);
    
    UFUNCTION()
    void OnFeaturedCharacterSelected(int32 characterIndex);
    
    UFUNCTION()
    void OnFeaturedButtonSelected(int32 linkIndex);
    
    UFUNCTION()
    void OnFeaturedBannerItemSelected(const FString& itemId, bool isOutfit);
    
    UFUNCTION()
    void OnFeaturedBannerDlcSelected(const FString& dlcId);
    
    UFUNCTION()
    void OnEquipItem(const FString& itemId);
    
    UFUNCTION()
    void OnCatalogSelected() const;
    
    UFUNCTION()
    void OnBuyCurrencyBundle(int32 index);
    
};

