#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "BaseTooltipWidget.generated.h"

class UUMGHtmlRichText;
class UTextBlock;
class UAkAudioEvent;
class UButton;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UBaseTooltipWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TitleLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* TooltipContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* DescriptionLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* CloseButton;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* TooltipOpeningSound;
    
public:
    UBaseTooltipWidget();
protected:
    UFUNCTION()
    void OnQuitButtonClicked();
    
};

