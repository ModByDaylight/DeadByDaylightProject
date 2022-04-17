#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnScrollListPageButtonClickedDelegate.h"
#include "UMGScrollListPageButton.generated.h"

class UButton;
class UImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGScrollListPageButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnScrollListPageButtonClicked OnClicked;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 PageIndex;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ActionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SelectedImage;
    
public:
    UUMGScrollListPageButton();
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool selected);
    
    UFUNCTION()
    void HandleActionButtonClick();
    
};

