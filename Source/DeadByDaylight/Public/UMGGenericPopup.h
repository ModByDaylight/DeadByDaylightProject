#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGGenericPopup.generated.h"

class UUMGHtmlRichText;
class URichTextBlock;
class UImage;
class UUMGPopupButton;

UCLASS(Abstract, EditInlineNew)
class UUMGGenericPopup : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* Title;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* Message;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TitleBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TitleSmoke;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPopupButton* RegressionPopupButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPopupButton* AlternativePopupButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPopupButton* ProgressionPopupButton;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateColor ErrorTitleSmokeColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateColor ErrorTitleBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateColor DefaultTitleSmokeColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateColor DefaultTitleBackgroundColor;
    
    UUMGGenericPopup();
    UFUNCTION(BlueprintImplementableEvent)
    void OnPopupDisappearance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPopupAppearance();
    
};

