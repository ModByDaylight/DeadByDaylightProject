#pragma once
#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreOnboardingMenuTitleWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget {
    GENERATED_BODY()
public:
    UCoreOnboardingMenuTitleWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnboardingMenuTitle(const FText& menuTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnboardingMenuSubtitle(const FText& menuTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnboardingMenuDoubleTitle(const FText& menuTitle, const FText& menuSubTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetOnboardingMenuSubtitle();
    
};

