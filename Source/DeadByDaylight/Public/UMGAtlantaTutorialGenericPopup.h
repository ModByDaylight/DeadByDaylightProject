#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Engine/EngineTypes.h"
#include "UMGAtlantaTutorialGenericPopup.generated.h"

class UHorizontalBox;
class UImage;
class UUMGScrollListPageButton;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaTutorialGenericPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ImageTutorial;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* ImagesCanvas;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* ButtonsPanel;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGScrollListPageButton> _pageButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ButtonWidth;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DelayBeforeChangingImage;
    
private:
    UPROPERTY(Transient)
    FTimerHandle _changeImagesTimerHandle;
    
public:
    UUMGAtlantaTutorialGenericPopup();
private:
    UFUNCTION()
    void TriggerChangeImagesTimer();
    
protected:
    UFUNCTION()
    void HandleImageButtonClicked(int32 imageIndex);
    
};

