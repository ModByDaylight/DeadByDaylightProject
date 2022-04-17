#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaMatchConfigScreen.generated.h"

class UHorizontalBox;
class UUMGAtlantaMatchConfigPageScroll;
class UVerticalBox;
class UUMGBaseButtonWidget;
class UTextBlock;
class UMatchConfigTabsDataAsset;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaMatchConfigScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAtlantaMatchConfigPageScroll* MatchConfigPageScroll;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* TabsBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* BotsTabsBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBaseButtonWidget* BackButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* MatchConfigTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* InventoryTitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* SelectedTabTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMatchConfigTabsDataAsset* TabsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush SmallTabSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BigTabSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TabsVerticalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TabsHorizontalPadding;
    
public:
    UUMGAtlantaMatchConfigScreen();
protected:
    UFUNCTION()
    void HandleBackButtonClicked();
    
};

