#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGLoadingScreenWidget.generated.h"

class UTextBlock;
class UProgressBar;
class UImage;
class UPanelWidget;

UCLASS(EditInlineNew)
class UUMGLoadingScreenWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    UTextBlock* Description;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    UImage* HintIcon;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    UProgressBar* LoadingBar;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    UPanelWidget* KillerPanel;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    UPanelWidget* SurvivorPanel;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    UTextBlock* Title;
    
public:
    UUMGLoadingScreenWidget();
};

