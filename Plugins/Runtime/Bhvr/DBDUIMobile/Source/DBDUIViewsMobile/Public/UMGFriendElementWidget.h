#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UMGBaseFriendListElement.h"
#include "UMGFriendElementWidget.generated.h"

class UImage;
class UButton;

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
    
public:
    UUMGFriendElementWidget();
protected:
    UFUNCTION()
    void HandleSelectionButton();
    
    UFUNCTION(BlueprintCallable)
    void HandleFavoriteButtonClicked();
    
};

