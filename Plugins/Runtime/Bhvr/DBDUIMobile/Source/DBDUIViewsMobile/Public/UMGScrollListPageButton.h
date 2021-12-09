#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGScrollListPageButton.generated.h"

class UButton;
class UImage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGScrollListPageButtonOnClicked, int32, pageIndex);

UCLASS(EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGScrollListPageButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGScrollListPageButtonOnClicked OnClicked;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 PageIndex;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ActionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* SelectedImage;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool selected);
    
    UFUNCTION()
    void HandleActionButtonClick();
    
    UUMGScrollListPageButton();
};

