#pragma once
#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "EStorefrontState.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseLandingPageStorefrontWidget.generated.h"

class UVerticalBox;
class UHorizontalBox;
class UUMGLandingPageButtonWidget;

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
    
public:
    UUMGBaseLandingPageStorefrontWidget();
private:
    UFUNCTION()
    void HandleTabSelected(const EStorefrontState& tabId);
    
};

