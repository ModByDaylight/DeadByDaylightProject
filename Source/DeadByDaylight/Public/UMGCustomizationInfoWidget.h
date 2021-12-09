#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGCustomizationInfoWidget.generated.h"

class UImage;
class URichTextBlock;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationInfoWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Icon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Background;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* InformationText;
    
    UPROPERTY(EditAnywhere)
    FSlateColor BackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor TextColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor IconColor;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> DefaultIcon;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftObjectPtr<UTexture2D> KillerIcon;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftObjectPtr<UTexture2D> SurvivorIcon;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftObjectPtr<UTexture2D> BreakableIcon;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftObjectPtr<UTexture2D> UnbreakableIcon;
    
public:
    UUMGCustomizationInfoWidget();
};

