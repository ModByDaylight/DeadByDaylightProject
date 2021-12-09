#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTooltipContentPlayerLevelWidget.generated.h"

class UUMGLevelBannerWidget;
class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGTooltipContentPlayerLevelWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FText PlayerLevelText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLevelBannerWidget* LevelBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* LevelExperienceRichText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ExperienceToNextLevelText;
    
public:
    UFUNCTION()
    void SetInfo(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience);
    
    UUMGTooltipContentPlayerLevelWidget();
};

