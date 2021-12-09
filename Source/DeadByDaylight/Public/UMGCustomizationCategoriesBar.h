#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECustomizationCategory.h"
#include "UMGCustomizationCategoriesBar.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationCategoriesBar : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectedCategory(const ECustomizationCategory category);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRole(const bool isKiller);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastCustomizationCategoryButtonPressed(ECustomizationCategory categoryIndex);
    
public:
    UUMGCustomizationCategoriesBar();
};

