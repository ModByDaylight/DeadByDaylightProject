#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MobileBaseUserWidget.generated.h"

class UWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UMobileBaseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidget* HighlightWidget;
    
    UPROPERTY(EditDefaultsOnly)
    FName _tutorialAnimationName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _tutorialNumberOfLoops;
    
public:
    UMobileBaseUserWidget();
private:
    UFUNCTION()
    void TutorialAnimationFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryBroadcastOnHighlightWidgetClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerTutorialVisuals();
    
    UFUNCTION()
    void PropagateOnHighlightWidgetClicked(const FName onBoardingID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable)
    bool IsInTutorialState();
    
    UFUNCTION(BlueprintCallable)
    void FinishTutorialVisuals();
    
};

