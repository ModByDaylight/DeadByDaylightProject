#pragma once
#include "CoreMinimal.h"
#include "UMGBaseFriendListElement.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendElementWidget.generated.h"

class UButton;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGFriendElementWidget : public UUMGBaseFriendListElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UImage* FavoriteSlot;
    
    UPROPERTY(Export)
    UButton* FavoriteButton;
    
    UPROPERTY(Export)
    UImage* SelectionImage;
    
    UPROPERTY(Export)
    UImage* SelectedPicture;
    
    UPROPERTY(Export)
    UImage* FriendIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush UnFavoriteBrush;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush FavoriteBrush;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush MutedBrush;
    
    UFUNCTION()
    void HandleSelectionButton();
    
    UFUNCTION(BlueprintCallable)
    void HandleFavoriteButtonClicked();
    
public:
    UUMGFriendElementWidget();
};

