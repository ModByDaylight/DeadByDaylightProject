#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGLandingPageButtonWidget.generated.h"

class UImage;
class UCanvasPanel;
class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGLandingPageButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* BigTag;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SmallTag;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TagText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* BannerTitleText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BannerImage;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TitleColorBg;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* BorderColor;
    
public:
    UUMGLandingPageButtonWidget();
};

