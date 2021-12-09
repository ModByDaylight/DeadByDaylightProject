#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "Components/ScrollBox.h"
#include "EShowScrollDisplayPrompt.h"
#include "DBDScrollBox.generated.h"

class UCoreInputPromptTextWidget;

UCLASS()
class DBDUIVIEWSCORE_API UDBDScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    bool _useControllerScroll;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    bool _shouldScrollOnMouseOver;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    float _scrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Export, NoClear)
    UCoreInputPromptTextWidget* _displayPrompt;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    FText _displayPromptText;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, NoClear)
    EShowScrollDisplayPrompt _showDisplayPrompt;
    
    UFUNCTION(BlueprintCallable)
    void UpdateDisplayPrompt();
    
    UFUNCTION(BlueprintCallable)
    void OnControlModeChanged(EControlMode controlMode);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsMouseOver();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleControllerInput(float analogValue);
    
public:
    UDBDScrollBox();
};

