#pragma once
#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "StartSequenceViewInterface.h"
#include "EEasingType.h"
#include "EThemeColorId.h"
#include "UObject/NoExportTypes.h"
#include "CoreStartSequenceWidget.generated.h"

class UUITweenInstance;
class UDBDTextBlock;
class UImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoreStartSequenceWidgetStartSequenceFadeOutDelegate);

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
    FCoreStartSequenceWidgetStartSequenceFadeOutDelegate StartSequenceFadeOutDelegate;
    
    UFUNCTION()
    void OnHideStartSequenceComplete(UUITweenInstance* tween);
    
public:
    UCoreStartSequenceWidget();
};

