#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsDescription.generated.h"

class UTextBlock;
class UAtlantaEventsTemplateDataAsset;
class UCanvasPanel;
class UUMGBaseButtonWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsDescription : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAtlantaEventsTemplateDataAsset* widgetData;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ItemsRewards;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Description;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TimePeriodTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TimePeriodStart;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TimePeriodEnd;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBaseButtonWidget* DeepLinkButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* TimePeriodCanvas;
    
private:
    UFUNCTION()
    void HandleButtonClicked();
    
public:
    UUMGAtlantaEventsDescription();
};

