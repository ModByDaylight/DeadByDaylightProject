#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGTallyEmblemProgressionWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyEmblemProgressionWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PositiveIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* NegativeIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PercentText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor WarningPercentColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor WarningDescriptionColor;
    
public:
    UUMGTallyEmblemProgressionWidget();
};

