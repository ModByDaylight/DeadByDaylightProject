#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "GameManualViewInterface.h"
#include "EGameManualMenuState.h"
#include "EHelpType.h"
#include "OnSetOnboardingMenuSubtitleDelegateDelegate.h"
#include "OnResetOnboardingMenuSubtitleDelegateDelegate.h"
#include "CoreGameManualPanelWidget.generated.h"

class UCoreGameManualCategoryButton;
class UPanelWidget;
class UCoreTabContainerWidget;
class UDBDTextBlock;
class UDBDRichTextBlock;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGameManualPanelWidget : public UCoreBaseUserWidget, public IGameManualViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    EGameManualMenuState _currentSelectedManualMenu;
    
    UPROPERTY(BlueprintReadWrite)
    EHelpType _currentGameManualTopic;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPanelWidget* CategoryPanel;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCoreGameManualCategoryButton* GameCategoryButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCoreGameManualCategoryButton* SurvivorCategoryButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCoreGameManualCategoryButton* KillerCategoryButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPanelWidget* TopicsPanel;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCoreTabContainerWidget* GameManualTopicsTabs;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* GameManualContentTitle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDTextBlock* GameManualContentSubtitle;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UDBDRichTextBlock* GameManualContentText;
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnSetOnboardingMenuSubtitleDelegate _onSetOnboardingMenuSubtitleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnResetOnboardingMenuSubtitleDelegate _onResetOnboardingMenuSubtitleDelegate;
    
public:
    UCoreGameManualPanelWidget();
private:
    UFUNCTION(BlueprintCallable)
    void ToggleGameManualMenuState();
    
    UFUNCTION(BlueprintCallable)
    void ShowHelpTopics(EHelpType categoryType);
    
    UFUNCTION(BlueprintCallable)
    void SetGameManualMenuState(EGameManualMenuState menuState);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentOnbardingMenuSubtitle();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ResetScrolls(bool resetTopicsScroll);
    
private:
    UFUNCTION()
    void OnTopicsTabSelected(UCoreSelectableButtonWidget* selectedButton);
    
    
    // Fix for true pure virtual functions not being implemented
};

