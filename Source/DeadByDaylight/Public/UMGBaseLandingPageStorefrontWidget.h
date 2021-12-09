#pragma once
#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "UObject/NoExportTypes.h"
#include "EStorefrontState.h"
#include "UMGBaseLandingPageStorefrontWidget.generated.h"

class UUMGLandingPageButtonWidget;
class UHorizontalBox;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGBaseLandingPageStorefrontWidget : public UUMGBaseStorefrontWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* BigButtonsSlot;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* SmallButtonsSlot1;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* SmallButtonsSlot2;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGLandingPageButtonWidget> SmallButtonClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGLandingPageButtonWidget> MediumButtonClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGLandingPageButtonWidget> BigButtonClass;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DisabledButtonColor;
    
    UPROPERTY(EditDefaultsOnly)
    FText DisabledButtonText;
    
private:
    UPROPERTY(Export)
    TArray<UUMGLandingPageButtonWidget*> _landingPageTabs;
    
    UFUNCTION()
    void HandleTabSelected(const EStorefrontState& tabId);
    
public:
    UUMGBaseLandingPageStorefrontWidget();
};

