#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "EmblemTooltipWidget.generated.h"

class UImage;
class UTextBlock;
class UVerticalBox;
class UUMGTallyEmblemProgressBar;
class UUMGTallyEmblemProgressionWidget;

UCLASS(Abstract, EditInlineNew)
class UEmblemTooltipWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HeaderBackground;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* SubTitleLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HeaderSmoke;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* DataContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyEmblemProgressBar* TallyEmblemProgressBar;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGTallyEmblemProgressionWidget> ProgressionDataWidgetClass;
    
public:
    UEmblemTooltipWidget();
};

