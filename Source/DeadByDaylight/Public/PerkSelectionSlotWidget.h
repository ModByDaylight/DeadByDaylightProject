#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSelectionSlotWidget.generated.h"

class UTextBlock;
class UPerkActionButton;
class UImage;
class UUMGHtmlRichText;

UCLASS(Abstract, EditInlineNew)
class UPerkSelectionSlotWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PerkName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextChoose;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPerkActionButton* PerkActionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SelectedIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* DescriptionText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PictureBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PicturePerkBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PictureHighlightFrame;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PictureTopRightBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PictureTopRightFrame;
    
    UPROPERTY(EditDefaultsOnly)
    float HighOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float LowOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float PerkBackgroundLowOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float DescriptionBackgroundLowOpacity;
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
public:
    UPerkSelectionSlotWidget();
};

