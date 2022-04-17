#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EThemeColorId.h"
#include "CoreBaseHudWidget.h"
#include "StartSequenceViewInterface.h"
#include "EEasingType.h"
#include "StartSequenceFadeOutCompletedDelegate.h"
#include "CoreStartSequenceWidget.generated.h"

class UImage;
class UDBDTextBlock;
class UUITweenInstance;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStartSequenceWidget : public UCoreBaseHudWidget, public IStartSequenceViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEasingType FadeInEasing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEasingType FadeOutEasing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EThemeColorId, FLinearColor> BorderColors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* ThemeNameTextfield;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* SeparatorImage;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* MapNameTextfield;
    
private:
    UPROPERTY(BlueprintCallable)
    FStartSequenceFadeOutCompleted StartSequenceFadeOutDelegate;
    
public:
    UCoreStartSequenceWidget();
private:
    UFUNCTION()
    void OnHideStartSequenceComplete(UUITweenInstance* tween);
    
    
    // Fix for true pure virtual functions not being implemented
};

