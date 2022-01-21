#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "CharacterSlideData.h"
#include "UMGCharacterSlideShowWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class UUMGCharacterSlideShowWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, TSoftObjectPtr<UTexture2D>> _perkCategoriesIcons;
    
    UPROPERTY(EditDefaultsOnly)
    float SecondsBeforeNextSlide;
    
public:
    UUMGCharacterSlideShowWidget();
private:
    UFUNCTION()
    void WaitAndFadeOut();
    
    UFUNCTION()
    void SwitchCharacterSlide();
    
    UFUNCTION()
    void FadeOut();
    
    UFUNCTION()
    void FadeIn();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DisplayCharacterSlide(const FCharacterSlideData& characterSlide);
    
};

