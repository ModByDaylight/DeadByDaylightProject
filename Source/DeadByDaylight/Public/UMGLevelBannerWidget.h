#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Highlightable.h"
#include "UMGLevelBannerWidget.generated.h"

class UAkAudioEvent;
class UButton;
class UTextBlock;
class UImage;
class UProgressBar;
class UHorizontalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGLevelBannerWidget : public UMobileBaseUserWidget, public IHighlightable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* TooltipButton;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PlayerLevelText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PlayerDevotionText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PlayerCurrentExperienceText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PlayerNextLevelExperienceText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* XPProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* XPTextContainer;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* OnLongPressSound;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TooltipHighlightPicture;
    
public:
    UUMGLevelBannerWidget();
    UFUNCTION(BlueprintCallable)
    void StopHighlight();
    
    UFUNCTION(BlueprintCallable)
    void StartHighlight();
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBarValue(const float progress);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoBP(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInfo(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExperienceVisibilityBP(const bool isExperienceVisible, const bool isBig);
    
    UFUNCTION()
    void OnTooltipButtonLongPressEvent();
    
    
    // Fix for true pure virtual functions not being implemented
};

