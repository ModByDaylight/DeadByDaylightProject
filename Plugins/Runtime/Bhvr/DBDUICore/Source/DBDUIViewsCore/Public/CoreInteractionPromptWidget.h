#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractionPromptViewData.h"
#include "CoreInteractionPromptWidget.generated.h"

class UScaleBox;
class UDBDTextBlock;
class UDBDTextManager;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreInteractionPromptWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LargeTextScale;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UScaleBox* LargeTextScaleBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* ActionTB;
    
private:
    UPROPERTY(Transient)
    UDBDTextManager* _textManager;
    
public:
    UCoreInteractionPromptWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FInteractionPromptViewData& data);
    
private:
    UFUNCTION()
    void OnLargeTextSettingsChanged(bool isLargeTextEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearData();
    
};

